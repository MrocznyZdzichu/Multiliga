#include "gracz_dodaj_nagrode.h"
#include "ui_gracz_dodaj_nagrode.h"

gracz_dodaj_nagrode::gracz_dodaj_nagrode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gracz_dodaj_nagrode)
{
    ui->setupUi(this);
}

gracz_dodaj_nagrode::~gracz_dodaj_nagrode()
{
    delete ui;
}
