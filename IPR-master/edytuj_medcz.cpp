#include "edytuj_medcz.h"
#include "ui_edytuj_medcz.h"

edytuj_medcz::edytuj_medcz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edytuj_medcz)
{
    ui->setupUi(this);
}

edytuj_medcz::~edytuj_medcz()
{
    delete ui;
}
