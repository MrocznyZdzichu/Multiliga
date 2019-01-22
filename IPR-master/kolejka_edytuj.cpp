#include "kolejka_edytuj.h"
#include "ui_kolejka_edytuj.h"

kolejka_edytuj::kolejka_edytuj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kolejka_edytuj)
{
    ui->setupUi(this);
}

kolejka_edytuj::~kolejka_edytuj()
{
    delete ui;
}
