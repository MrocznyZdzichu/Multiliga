#include "profil_dyscypliny.h"
#include "ui_profil_dyscypliny.h"

profil_dyscypliny::profil_dyscypliny(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profil_dyscypliny)
{
    ui->setupUi(this);
}

profil_dyscypliny::~profil_dyscypliny()
{
    delete ui;
}
