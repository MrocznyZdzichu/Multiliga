#include "profil_kolejki.h"
#include "ui_profil_kolejki.h"

profil_kolejki::profil_kolejki(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profil_kolejki)
{
    ui->setupUi(this);
}

profil_kolejki::~profil_kolejki()
{
    delete ui;
}
