#include "liga_dodaj.h"
#include "ui_liga_dodaj.h"
#include "globalUser.h"
#include "CRest.h"
liga_dodaj::liga_dodaj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::liga_dodaj)
{
    ui->setupUi(this);
    this->wczytaj_dane();
    this->open();
}

liga_dodaj::~liga_dodaj()
{
    delete ui;
}

void liga_dodaj::wczytaj_dane()
{
    CListaDyscyplin* availableSports = new CListaDyscyplin;
    availableSports->ListaDyscyplinDOM = availableSports->pobierz_dane("listadyscyplin.json");

    if (availableSports->ListaDyscyplinDOM != NULL)
    {
        for (auto& i : availableSports->ListaDyscyplinDOM["dyscypliny"].GetArray())
        {
            this->ui->comboBox_2->addItem(QString::fromStdString(i.GetString()));
        }
    }

    CListaOpiekonow* availableOrganizators = new CListaOpiekonow;
    availableOrganizators->ListaOpiekunowDOM = availableOrganizators->pobierz_dane("opiekunowie.json");

    if (availableOrganizators->ListaOpiekunowDOM != NULL)
    {
        for (auto& i : availableOrganizators->ListaOpiekunowDOM["opiekunowie"].GetArray())
        {
            std::string fullName = "";
            fullName += i["imie"].GetString();
            fullName += " ";
            fullName += i["nazwisko"].GetString();
            fullName += " ";
            fullName += i["email"].GetString();

            this->ui->comboBox_4->addItem(QString::fromStdString(fullName));
        }
    }

    CListaMiast* availableTowns = new CListaMiast;
    availableTowns->ListaMiastDOM = availableSports->pobierz_dane("listamiast.json");

    if (availableTowns->ListaMiastDOM != NULL)
    {
        for (auto& i : availableTowns->ListaMiastDOM["miasta"].GetArray())
        {
            this->ui->comboBox_5->addItem(QString::fromStdString(i.GetString()));
        }
    }
}

void liga_dodaj::wyswietlKomunikat(QString comm)
{
    this->ui->label_45->setText(comm);
}

void liga_dodaj::on_pushButton_5_clicked()
{   
    Dane dane_ligi;
    dane_ligi.nazwa = ui->lineEdit_23->text().toStdString();
    dane_ligi.poziom_ligi = ui->lineEdit_24->text().toInt();
    dane_ligi.sezon = ui->lineEdit_25->text().toStdString();
    dane_ligi.liczba_kolejek = ui->lineEdit_16->text().toInt();
    dane_ligi.liczba_meczy_na_kolejke = ui->lineEdit_17->text().toInt();
    dane_ligi.liczebnosc_druzyn = ui->lineEdit_18->text().toInt();
    dane_ligi.liczba_podmeczy = ui->lineEdit_19->text().toInt();
    dane_ligi.czas_trwania_podmeczu = ui->lineEdit_20->text().toInt();
    dane_ligi.liczba_punktow_do_zwyciestwa = ui->lineEdit_21->text().toInt();
    dane_ligi.dyscyplina = ui->comboBox_2->currentText().toStdString();
    dane_ligi.miasto = ui->comboBox_5->currentText().toStdString();
    dane_ligi.organizator = ui->comboBox_4->currentText().toStdString();

    bool czyDanePoprawne = dane_ligi.czyPoprawne();
    if (!czyDanePoprawne)
    {
        ui->label_3->setText("Dane niepoprawne");
        return ;
    }
    else
    {
        CLiga* nowaLiga = new CLiga();
        this->inicjalizacja(nowaLiga);

        nowaLiga->serializuj();
        nowaLiga->wyslij_siebie();

        CRest::getRest().dodaj_lige();
        profil_ligi* liga_info = new profil_ligi(nowaLiga, this);
        ui->label_3->setText("Dodano nową ligę");
    }
}

void liga_dodaj::inicjalizuj_glowne_pola(CLiga *nowaLiga)
{
    nowaLiga->nazwaLigi = this->ui->lineEdit_23->text().toStdString();
    nowaLiga->poziomLigi = ui->lineEdit_24->text().toUInt();
    nowaLiga->sezon = ui->lineEdit_25->text().toStdString();

    nowaLiga->dyscyplinaLigi = new CDyscyplina;
    nowaLiga->dyscyplinaLigi->nazwaDyscypliny = ui->comboBox_2->currentText().toStdString();

    nowaLiga->miastoLigi = new CMiasto;
    nowaLiga->miastoLigi->nazwaMiasta = ui->comboBox_5->currentText().toStdString();
}

void liga_dodaj::inicjalizuj_zasady(CLiga* nowaLiga)
{
    nowaLiga->zasadyLigi = new CZasady;

    nowaLiga->zasadyLigi->liczbaKolejek = this->ui->lineEdit_16->text().toUInt();
    nowaLiga->zasadyLigi->liczbaMeczy = ui->lineEdit_17->text().toUInt();
    nowaLiga->zasadyLigi->liczebnoscDruzyn = ui->lineEdit_18->text().toUInt();
    nowaLiga->zasadyLigi->liczbaPodmeczy = ui->lineEdit_19->text().toUInt();
    nowaLiga->zasadyLigi->czasPodmeczu = ui->lineEdit_20->text().toUInt();
    nowaLiga->zasadyLigi->limitPunktow = ui->lineEdit_21->text().toUInt();
}

void liga_dodaj::inicjalizuj_opiekuna(CLiga *nowaLiga)
{
    nowaLiga->opiekunLigi = new COpiekun;

    std::string providedData = ui->comboBox_4->currentText().toStdString();
    std::string imie = "";
    std::string nazwisko = "";
    std::string email = "";

    unsigned int spacebarcount = 0;
    for (int i = 0; i < providedData.size(); i++)
    {
        char currentCharacter = providedData[i];
        if (currentCharacter == ' ')
            spacebarcount ++;
        else
        {
            switch (spacebarcount)
            {
            case 0:
                imie += currentCharacter;
                break;
            case 1:
                nazwisko += currentCharacter;
                break;
            case 2:
                email += currentCharacter;
                break;
            }
        }
    }
    nowaLiga->opiekunLigi->setImie(imie);
    nowaLiga->opiekunLigi->setNazwisko(nazwisko);
    nowaLiga->opiekunLigi->setEmail(email);
}

void liga_dodaj::inicjalizacja(CLiga *nowaLiga)
{
    this->inicjalizuj_glowne_pola(nowaLiga);
    this->inicjalizuj_opiekuna(nowaLiga);
    this->inicjalizuj_zasady(nowaLiga);
}

