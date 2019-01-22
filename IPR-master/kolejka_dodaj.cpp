#include "kolejka_dodaj.h"
#include "ui_kolejka_dodaj.h"

kolejka_dodaj::kolejka_dodaj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kolejka_dodaj)
{
    ui->setupUi(this);
}

kolejka_dodaj::~kolejka_dodaj()
{
    delete ui;
}
