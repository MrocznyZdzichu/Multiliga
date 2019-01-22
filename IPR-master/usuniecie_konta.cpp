#include "usuniecie_konta.h"
#include "ui_usuniecie_konta.h"

usuniecie_konta::usuniecie_konta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usuniecie_konta)
{
    ui->setupUi(this);
}

usuniecie_konta::~usuniecie_konta()
{
    delete ui;
}
