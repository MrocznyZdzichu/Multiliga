#include "gracz_dodaj.h"
#include "ui_gracz_dodaj.h"

gracz_dodaj::gracz_dodaj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gracz_dodaj)
{
    ui->setupUi(this);
}

gracz_dodaj::~gracz_dodaj()
{
    delete ui;
}
