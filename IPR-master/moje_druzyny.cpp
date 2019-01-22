#include "moje_druzyny.h"
#include "ui_moje_druzyny.h"

moje_druzyny::moje_druzyny(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moje_druzyny)
{
    ui->setupUi(this);
}

moje_druzyny::~moje_druzyny()
{
    delete ui;
}
