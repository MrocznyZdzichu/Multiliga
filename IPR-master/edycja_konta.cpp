#include "edycja_konta.h"
#include "ui_edycja_konta.h"

edycja_konta::edycja_konta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edycja_konta)
{
    ui->setupUi(this);
}

edycja_konta::~edycja_konta()
{
    delete ui;
}
