#include "profil_gracza.h"
#include "ui_profil_gracza.h"

profil_gracza::profil_gracza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profil_gracza)
{
    ui->setupUi(this);
}

profil_gracza::~profil_gracza()
{
    delete ui;
}
