#include "profil_miejsca.h"
#include "ui_profil_miejsca.h"

profil_miejsca::profil_miejsca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profil_miejsca)
{
    ui->setupUi(this);
}

profil_miejsca::~profil_miejsca()
{
    delete ui;
}
