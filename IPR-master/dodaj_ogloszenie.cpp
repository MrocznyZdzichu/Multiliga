#include "dodaj_ogloszenie.h"
#include "ui_dodaj_ogloszenie.h"

dodaj_ogloszenie::dodaj_ogloszenie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dodaj_ogloszenie)
{
    ui->setupUi(this);
}

dodaj_ogloszenie::~dodaj_ogloszenie()
{
    delete ui;
}
