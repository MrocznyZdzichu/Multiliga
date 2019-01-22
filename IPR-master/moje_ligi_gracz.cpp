#include "moje_ligi_gracz.h"
#include "ui_moje_ligi_gracz.h"

moje_ligi_gracz::moje_ligi_gracz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moje_ligi_gracz)
{
    ui->setupUi(this);
}

moje_ligi_gracz::~moje_ligi_gracz()
{
    delete ui;
}
