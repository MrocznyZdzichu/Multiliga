#include "kolejka_usun.h"
#include "ui_kolejka_usun.h"

kolejka_usun::kolejka_usun(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kolejka_usun)
{
    ui->setupUi(this);
}

kolejka_usun::~kolejka_usun()
{
    delete ui;
}
