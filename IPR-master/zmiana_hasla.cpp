#include "zmiana_hasla.h"
#include "ui_zmiana_hasla.h"

zmiana_hasla::zmiana_hasla(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zmiana_hasla)
{
    ui->setupUi(this);
}

zmiana_hasla::~zmiana_hasla()
{
    delete ui;
}
