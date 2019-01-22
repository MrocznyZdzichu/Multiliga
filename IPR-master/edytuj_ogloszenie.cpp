#include "edytuj_ogloszenie.h"
#include "ui_edytuj_ogloszenie.h"

edytuj_ogloszenie::edytuj_ogloszenie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edytuj_ogloszenie)
{
    ui->setupUi(this);
}

edytuj_ogloszenie::~edytuj_ogloszenie()
{
    delete ui;
    this->destroy();
}
