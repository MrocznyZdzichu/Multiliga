#include "gracz_usun.h"
#include "ui_gracz_usun.h"

gracz_usun::gracz_usun(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gracz_usun)
{
    ui->setupUi(this);
}

gracz_usun::~gracz_usun()
{
    delete ui;
}
