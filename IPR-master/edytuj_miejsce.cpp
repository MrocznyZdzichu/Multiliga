#include "edytuj_miejsce.h"
#include "ui_edytuj_miejsce.h"

edytuj_miejsce::edytuj_miejsce(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edytuj_miejsce)
{
    ui->setupUi(this);
}

edytuj_miejsce::~edytuj_miejsce()
{
    delete ui;
}
