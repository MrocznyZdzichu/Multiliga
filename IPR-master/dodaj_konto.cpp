#include "dodaj_konto.h"
#include "ui_dodaj_konto.h"

dodaj_konto::dodaj_konto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dodaj_konto)
{
    ui->setupUi(this);
}

dodaj_konto::~dodaj_konto()
{
    delete ui;
}
