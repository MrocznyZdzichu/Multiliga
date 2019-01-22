#include "dodaj_mecz.h"
#include "ui_dodaj_mecz.h"

dodaj_mecz::dodaj_mecz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dodaj_mecz)
{
    ui->setupUi(this);
}

dodaj_mecz::~dodaj_mecz()
{
    delete ui;
}
