#include "wyszukaj_gracza.h"
#include "ui_wyszukaj_gracza.h"

wyszukaj_gracza::wyszukaj_gracza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wyszukaj_gracza)
{
    ui->setupUi(this);
}

wyszukaj_gracza::~wyszukaj_gracza()
{
    delete ui;
}
