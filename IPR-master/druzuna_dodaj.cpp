#include "druzuna_dodaj.h"
#include "ui_druzuna_dodaj.h"

druzuna_dodaj::druzuna_dodaj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::druzuna_dodaj)
{
    ui->setupUi(this);
}

druzuna_dodaj::~druzuna_dodaj()
{
    delete ui;
}
