#include "wyszukiwanie.h"
#include "ui_wyszukiwanie.h"

wyszukiwanie::wyszukiwanie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wyszukiwanie)
{
    ui->setupUi(this);
}

wyszukiwanie::~wyszukiwanie()
{
    delete ui;
}

void wyszukiwanie::on_zaloz_druzyne_4_clicked()
{
    wyszukaj_miasto* searchPlace;
    searchPlace = new wyszukaj_miasto(this);
    searchPlace->open();
}

void wyszukiwanie::on_wyszukiwanie_druzyn_clicked()
{
    wyszukaj_druzyne* searchTeam;
    searchTeam = new wyszukaj_druzyne(this);
    searchTeam->open();
}
