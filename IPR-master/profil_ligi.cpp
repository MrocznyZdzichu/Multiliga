#include "profil_ligi.h"
#include "ui_profil_ligi.h"

profil_ligi::profil_ligi(CLiga* nowaLiga, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profil_ligi)
{
    this->nazwaLigi = nowaLiga->nazwaLigi;
    ui->setupUi(this);
    this->wczytaj_dane();
    this->open();
}

profil_ligi::~profil_ligi()
{
    delete ui;
}

void profil_ligi::wczytaj_dane()
{
    CLiga* wyswietlanaLiga = new CLiga;

    Document d = wyswietlanaLiga->pobierz_dane(this->nazwaLigi);

    std::string text1 = "Nazwa: ";
    text1 += d["nazwa"].GetString();
    ui->label->setText(QString::fromStdString(text1));

    text1 = "Dyscyplina: ";
    text1 += d["dyscyplina"].GetString();
    ui->label_7->setText(QString::fromStdString(text1));

    text1 = "Poziom ligi: ";
    text1 += std::to_string(d["poziom ligi"].GetInt());
    ui->label_3->setText(QString::fromStdString(text1));

    text1 = "Sezon: ";
    text1 += d["sezon"].GetString();
    ui->label_4->setText(QString::fromStdString(text1));

    text1 = "Miasto: ";
    text1 += d["miasto"].GetString();
    ui->label_8->setText(QString::fromStdString(text1));

    text1 = "Opiekun: ";
    text1 += d["organizator"]["imie"].GetString();
    text1 += " ";
    text1 += d["organizator"]["nazwisko"].GetString();
    text1 += " ";
    text1 += d["organizator"]["email"].GetString();
    ui->label_2->setText(QString::fromStdString(text1));

    text1 = "Liczba kolejek: ";
    text1 += std::to_string(d["zasady"]["liczba kolejek"].GetInt());
    ui->label_5->setText(QString::fromStdString(text1));

    text1 = "Liczba meczy na kolejke: ";
    text1 += std::to_string(d["zasady"]["liczba meczy na kolejke"].GetInt());
    ui->label_6->setText(QString::fromStdString(text1));

    text1 = "Liczebnosc druzyn: ";
    text1 += std::to_string(d["zasady"]["liczebnosc druzyn"].GetInt());
    ui->label_9->setText(QString::fromStdString(text1));

    text1 = "Dlugosc meczu: ";
    unsigned int temp = d["zasady"]["czas trwania podmeczu"].GetInt();
    if (temp == 0)
        text1 += "Brak limitu czasowego";
    else
    {
        text1 += std::to_string(d["zasady"]["liczba podmeczy"].GetInt());
        text1 += " x ";
        text1 += std::to_string(d["zasady"]["czas trwania podmeczu"].GetInt());
    }
    ui->label_10->setText(QString::fromStdString(text1));

    text1 = "Liczba punktow do zwyciestwa: ";
    temp = d["zasady"]["liczba punktow do zwyciestwa"].GetInt();
    if (temp == 0)
        text1 += "brak";
    else
        text1 += std::to_string(d["zasady"]["liczba punktow do zwyciestwa"].GetInt());
    ui->label_11->setText(QString::fromStdString(text1));
}

void profil_ligi::on_pushButton_clicked()
{
    this->close();
}
