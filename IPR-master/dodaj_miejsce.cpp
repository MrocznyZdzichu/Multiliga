#include "dodaj_miejsce.h"
#include "ui_dodaj_miejsce.h"
#include "CMiejsce.h"
#include "CRest.h"
#include "COplaty.h"

dodaj_miejsce::dodaj_miejsce(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dodaj_miejsce)
{
    ui->setupUi(this);

    this->wczytaj_dane();
    this->open();
}

dodaj_miejsce::~dodaj_miejsce()
{
    delete ui;
    delete this;
}

void dodaj_miejsce::on_pushButton_3_clicked()
{
    std::string nazwa_miejsca = ui->lineEdit->text().toStdString();
    std::string nazwa_miasta = ui->comboBox_3->currentText().toStdString();
    std::string nazwa_dyscypliny = ui->comboBox_2->currentText().toStdString();
    float oplata = (ui->lineEdit_2->text().toFloat());

    if (oplata <= 0)
    {
        ui->label_3->setText("Prosze podać dodatnia stawke");
        return;
    }

    if (nazwa_miejsca == "")
    {
        ui->label_3->setText("Proszę wpisać nazwę miejsca rozgrywek");
        return;
    }

    CMiejsce* newPlace = new CMiejsce(nazwa_miejsca, nazwa_miasta, nazwa_dyscypliny, oplata);
    newPlace->serializuj();
    newPlace->wyslij_siebie();

    CRest::getRest().dodaj_miejsce_rozgrywki();
    this->ui->label_3->clear();
    this->wyswietlenieMiejsca = new profil_miejsca(this, newPlace);
}

void dodaj_miejsce::addGamingPlaceResult(QString comm)
{
    this->ui->label_3->setText(comm);
}

void dodaj_miejsce::wczytaj_dane()
{
    CListaMiast* lista_miast = new CListaMiast();
    CListaDyscyplin* lista_dyscyplin = new CListaDyscyplin();

    lista_miast->ListaMiastDOM = lista_miast->pobierz_dane("listamiast.json");
    lista_dyscyplin->ListaDyscyplinDOM = lista_dyscyplin->pobierz_dane("listadyscyplin.json");

    this->aktualizuj(lista_miast, lista_dyscyplin);
}

void dodaj_miejsce::on_pushButton_2_clicked()
{
    std::string nazwa_dyscypliny = this->ui->lineEdit_4->text().toStdString();
    if (nazwa_dyscypliny != "")

    {
        CDyscyplina* newSport = new CDyscyplina(nazwa_dyscypliny);

        newSport->serializuj();
        newSport->wyslij_siebie();

        CRest::getRest().dodaj_dyscypline();
        this->ui->label_3->clear();
        this->wczytaj_dane();
    }
    else
        ui->label_3->setText("Prosze wpisać nazwę dyscypliny");

}

void dodaj_miejsce::aktualizuj(CListaMiast* lista_miast, CListaDyscyplin* lista_dyscyplin)
{
    ui->comboBox_3->clear();

    for (auto& i : lista_miast->ListaMiastDOM["miasta"].GetArray())
    {
        ui->comboBox_3->addItem(QString::fromStdString(i.GetString()));
    }

    ui->comboBox_2->clear();

    for (auto& i : lista_dyscyplin->ListaDyscyplinDOM["dyscypliny"].GetArray())
    {
        ui->comboBox_2->addItem(QString::fromStdString(i.GetString()));
    }
}
