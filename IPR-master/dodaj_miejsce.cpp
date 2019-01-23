#include "dodaj_miejsce.h"
#include "ui_dodaj_miejsce.h"
#include "CMiejsce.h"
#include "CRest.h"
#include "COplaty.h"

dodaj_miejsce::dodaj_miejsce(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dodaj_miejsce)
{
    connect(&CRest::getRest(), SIGNAL(addGamingPlaceResult(QString)), this, SLOT(addGamingPlaceResult(QString)));
    connect(&CRest::getRest(), SIGNAL(wrongPassword(QString)), this, SLOT(addGamingPlaceResult(QString)));
    connect(&CRest::getRest(), SIGNAL(fileNotFound(QString)), this, SLOT(addGamingPlaceResult(QString)));

    ui->setupUi(this);

    this->wczytaj_dane();
}

dodaj_miejsce::~dodaj_miejsce()
{
    delete ui;
    delete this;
}

void dodaj_miejsce::on_pushButton_3_clicked()
{
    std::string newPlaceName = ui->lineEdit->text().toStdString();
    std::string newPlaceTown = ui->comboBox_3->currentText().toStdString();
    std::string newPlaceSport = ui->comboBox_2->currentText().toStdString();
    float newPlacePayment = (ui->comboBox->currentText().toFloat());
    std::string providedPwd = ui->lineEdit_3->text().toStdString();
    if (newPlaceName == "")
    {
        ui->label_3->setText("Proszę wprowadzić wszystkie dane");
        return;
    }
    if (newPlacePayment <= 0)
    {
        ui->label_3->setText("Prosze podać dodania stawke");
    }

    if (CRest::getRest().logged_user->sprawdz_haslo(providedPwd))
    {
        CMiejsce* newPlace = new CMiejsce(newPlaceName, newPlaceTown, newPlaceSport, newPlacePayment);
        newPlace->serializuj();
        newPlace->wyslij_siebie();

        CRest::getRest().dodaj_miejsce_rozgrywki();
        this->wyswietlenieMiejsca = new profil_miejsca(this, newPlace);
        this->wyswietlenieMiejsca->open();
    }
    else
    {
        ui->label_3->setText("Wprowadzono niewłaściwe hasło");
    }

}
void dodaj_miejsce::addGamingPlaceResult(QString comm)
{
    this->ui->label_3->setText(comm);
}
void dodaj_miejsce::wczytaj_dane()
{
    CListaMiast* availableTowns = new CListaMiast();
    availableTowns->ListaMiastDOM = availableTowns->deserializuj("listamiast.json");

    CListaDyscyplin* availableSports = new CListaDyscyplin();
    availableSports->ListaDyscyplinDOM = availableSports->deserializuj("listadyscyplin.json");

    ui->comboBox_3->clear();

    for (auto& i : availableTowns->ListaMiastDOM["miasta"].GetArray())
    {
        ui->comboBox_3->addItem(QString::fromStdString(i.GetString()));
    }

    ui->comboBox_2->clear();

    for (auto& i : availableSports->ListaDyscyplinDOM["dyscypliny"].GetArray())
    {
        ui->comboBox_2->addItem(QString::fromStdString(i.GetString()));
    }

    COplaty* prices = new COplaty();
    prices->lista_oplat_DOM = prices->deserializuj("oplaty.json");
    ui->comboBox->clear();

    for (auto& i : prices->lista_oplat_DOM["oplaty"].GetArray())
    {
        ui->comboBox->addItem(QString::fromStdString(i.GetString()));
    }
}

void dodaj_miejsce::on_pushButton_2_clicked()
{
    if (this->ui->lineEdit_4->text().toStdString() != "" &&
        this-> ui->lineEdit_2->text().toStdString() != "")

    {
        CDyscyplina* newSport = new CDyscyplina;
        newSport->nazwaDyscypliny = this->ui->lineEdit_4->text().toStdString();

        newSport->serializuj();
        newSport->wyslij_siebie();

        CRest::getRest().dodaj_dyscypline();

        COplaty* newPrice = new COplaty;
        newPrice->priceAsString = this->ui->lineEdit_2->text().toStdString();

        newPrice->serializuj();
        newPrice->wyslij_siebie();

        CRest::getRest().dodaj_oplate();

        this->wczytaj_dane();
        this->ui->label_3->setText("Dodano dyscypline i oplate");
    }
    else
        ui->label_3->setText("Prosze podac oplata i dyscypline");

}
