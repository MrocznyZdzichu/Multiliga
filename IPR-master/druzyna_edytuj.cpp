#include "druzyna_edytuj.h"
#include "ui_druzyna_edytuj.h"

druzyna_edytuj::druzyna_edytuj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::druzyna_edytuj)
{
    ui->setupUi(this);
}

druzyna_edytuj::~druzyna_edytuj()
{
    delete ui;
}
