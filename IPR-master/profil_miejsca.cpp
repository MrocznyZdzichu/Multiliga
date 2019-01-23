#include "profil_miejsca.h"
#include "ui_profil_miejsca.h"
#include <cmath>
profil_miejsca::profil_miejsca(QWidget *parent, CMiejsce* miejsceRozgrywek) :
    QDialog(parent),
    ui(new Ui::profil_miejsca)
{
    this->miejsceRozgrywek = miejsceRozgrywek;
    ui->setupUi(this);
    this->wczytaj_dane();
}

profil_miejsca::~profil_miejsca()
{
    delete ui;
}

void profil_miejsca::on_pushButton_3_clicked()
{
    this->close();
}

void profil_miejsca::wczytaj_dane()
{
    std::string fileName = miejsceRozgrywek->getName();
    fileName += miejsceRozgrywek->getTown();
    fileName += ".json";

    this->miejsceRozgrywek->deserializuj(fileName);
    this->miejsceRozgrywek->miejsceDOM = this->miejsceRozgrywek->deserializuj(fileName);

    this->ui->lineEdit->setText(QString::fromStdString(this->miejsceRozgrywek->miejsceDOM["nazwa miejsca"].GetString()));
    this->ui->lineEdit_2->setText(QString::fromStdString(this->miejsceRozgrywek->miejsceDOM["miasto"].GetString()));

    this->ui->tableWidget->setColumnCount(2);
    int rowCount = 0;
    for (auto& liczbaDyscyplin : this->miejsceRozgrywek->miejsceDOM["dyscypliny"].GetArray())
        rowCount++;
    this->ui->tableWidget->setRowCount(rowCount);

    QStringList naglowki;
    naglowki << "Dyscyplina";
    naglowki << "Opłata";
    this->ui->tableWidget->setHorizontalHeaderLabels(naglowki);

    int rowNumber = 0;
    for (auto& dyscyplina : this->miejsceRozgrywek->miejsceDOM["dyscypliny"].GetArray())
    {
        this->ui->tableWidget->setItem(rowNumber, 0, new QTableWidgetItem(QString::fromStdString(dyscyplina.GetString())));
    }

    rowNumber = 0;
    for (auto& oplata : this->miejsceRozgrywek->miejsceDOM["oplata"].GetArray())
    {
        this->ui->tableWidget->setItem(rowNumber, 1, new QTableWidgetItem(QString::fromStdString(std::to_string(roundf(oplata.GetFloat()*100)/100))));
    }
}
