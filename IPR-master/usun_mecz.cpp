#include "usun_mecz.h"
#include "ui_usun_mecz.h"

usun_mecz::usun_mecz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usun_mecz)
{
    ui->setupUi(this);
}

usun_mecz::~usun_mecz()
{
    delete ui;
}
