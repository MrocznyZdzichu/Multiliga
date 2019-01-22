#include "dodaj_konto_druzyne.h"
#include "ui_dodaj_konto_druzyne.h"

dodaj_konto_druzyne::dodaj_konto_druzyne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dodaj_konto_druzyne)
{
    ui->setupUi(this);
}

dodaj_konto_druzyne::~dodaj_konto_druzyne()
{
    delete ui;
}
