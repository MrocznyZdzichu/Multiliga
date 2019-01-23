#include "liga_dodaj.h"
#include "ui_liga_dodaj.h"
#include "globalUser.h"
liga_dodaj::liga_dodaj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::liga_dodaj)
{
    connect(&CRest::getRest(), SIGNAL(wrongPassword(QString)), this, SLOT(wyswietlKomunikat(QString)));
    connect(&CRest::getRest(), SIGNAL(fileNotFound(QString)), this, SLOT(wyswietlKomunikat(QString)));
    connect(&CRest::getRest(), SIGNAL(addLeagueResult(QString)), this, SLOT(wyswietlKomunikat(QString)));

    ui->setupUi(this);
    this->wczytaj_dane();
}

liga_dodaj::~liga_dodaj()
{
    delete ui;
}

void liga_dodaj::wczytaj_dane()
{
    CListaDyscyplin* availableSports = new CListaDyscyplin;
    availableSports->ListaDyscyplinDOM = availableSports->deserializuj("listadyscyplin.json");

    if (availableSports->ListaDyscyplinDOM != NULL)
    {
        for (auto& i : availableSports->ListaDyscyplinDOM["dyscypliny"].GetArray())
        {
            this->ui->comboBox_2->addItem(QString::fromStdString(i.GetString()));
        }
    }

    CListaOpiekonow* availableOrganizators = new CListaOpiekonow;
    availableOrganizators->ListaOpiekunowDOM = availableOrganizators->deserializuj("opiekunowie.json");

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
    availableTowns->ListaMiastDOM = availableSports->deserializuj("listamiast.json");

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
    if (ui->lineEdit_23->text() == "" || ui->lineEdit_24->text() == "" || ui->lineEdit_25->text() == "" ||
        ui->comboBox_2->currentText() == "" || ui->comboBox_5->currentText() == "" || ui->lineEdit_16->text() == "" ||
        ui->lineEdit_17->text() == "" || ui->comboBox_4->currentText() == "" || ui->lineEdit_18->text() == "" ||
        ui->lineEdit_19->text() == "" || ui->lineEdit_20->text() == "" || ui->lineEdit_21->text() == "")
    {
        ui->label_3->setText("Proszę wprowadzić wszystkie dane");
        return;
    }

    CLiga* nowaLiga = new CLiga();
    std::string providedPwd = ui->lineEdit_22->text().toStdString();

    inicjalizuj_glowne_pola(nowaLiga);
    inicjalizuj_zasady(nowaLiga);
    inicjalizuj_opiekuna(nowaLiga);

    if (CRest::getRest().logged_user->sprawdz_haslo(providedPwd))
    {
        bool isUnique = CRest::getRest().sprawdz_unikalnosc(nowaLiga->nazwaLigi);
        if (isUnique)
        {
            nowaLiga->serializuj();
            nowaLiga->wyslij_siebie();

            CRest::getRest().dodaj_lige();
            this->otworz_profil_ligi(nowaLiga->nazwaLigi);
        }
        else
        {
            ui->label_3->setText("Nazwa ligi musi być unikalna");
        }
    }
    else
    {
        ui->label_3->setText("Wprowadzono niewłaściwe hasło");
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

void liga_dodaj::otworz_profil_ligi(std::string nazwaLigi)
{
    profil_ligi* ligaInfo = new profil_ligi(this, nazwaLigi);
    ligaInfo->open();
}
