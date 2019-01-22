#include "profil_meczu.h"
#include "ui_profil_meczu.h"

profil_meczu::profil_meczu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profil_meczu)
{
    ui->setupUi(this);
}

profil_meczu::~profil_meczu()
{
    delete ui;
}
