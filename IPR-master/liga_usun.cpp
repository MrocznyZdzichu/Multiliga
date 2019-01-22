#include "liga_usun.h"
#include "ui_liga_usun.h"

liga_usun::liga_usun(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::liga_usun)
{
    ui->setupUi(this);
}

liga_usun::~liga_usun()
{
    delete ui;
}
