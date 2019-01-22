#include "profil_miasta.h"
#include "ui_profil_miasta.h"

profil_miasta::profil_miasta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profil_miasta)
{
    ui->setupUi(this);
}

profil_miasta::~profil_miasta()
{
    delete ui;
}
