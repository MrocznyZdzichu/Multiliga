#include "edycja_konta_gracz.h"
#include "ui_edycja_konta_gracz.h"

edycja_konta_gracz::edycja_konta_gracz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edycja_konta_gracz)
{
    ui->setupUi(this);
}

edycja_konta_gracz::~edycja_konta_gracz()
{
    delete ui;
}
