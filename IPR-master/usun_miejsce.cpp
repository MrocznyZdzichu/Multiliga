#include "usun_miejsce.h"
#include "ui_usun_miejsce.h"

usun_miejsce::usun_miejsce(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usun_miejsce)
{
    ui->setupUi(this);
}

usun_miejsce::~usun_miejsce()
{
    delete ui;
}
