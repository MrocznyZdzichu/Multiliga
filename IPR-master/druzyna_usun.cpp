#include "druzyna_usun.h"
#include "ui_druzyna_usun.h"

druzyna_usun::druzyna_usun(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::druzyna_usun)
{
    ui->setupUi(this);
}

druzyna_usun::~druzyna_usun()
{
    delete ui;
}
