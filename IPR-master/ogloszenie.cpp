#include "ogloszenie.h"
#include "ui_ogloszenie.h"

ogloszenie::ogloszenie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ogloszenie)
{
    ui->setupUi(this);
}

ogloszenie::~ogloszenie()
{
    delete ui;
}
