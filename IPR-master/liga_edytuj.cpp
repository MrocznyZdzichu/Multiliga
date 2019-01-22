#include "liga_edytuj.h"
#include "ui_liga_edytuj.h"

liga_edytuj::liga_edytuj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::liga_edytuj)
{
    ui->setupUi(this);
}

liga_edytuj::~liga_edytuj()
{
    delete ui;
}
