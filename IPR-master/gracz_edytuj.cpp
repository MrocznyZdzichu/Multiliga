#include "gracz_edytuj.h"
#include "ui_gracz_edytuj.h"

gracz_edytuj::gracz_edytuj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gracz_edytuj)
{
    ui->setupUi(this);
}

gracz_edytuj::~gracz_edytuj()
{
    delete ui;
}
