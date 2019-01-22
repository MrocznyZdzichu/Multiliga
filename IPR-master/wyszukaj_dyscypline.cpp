#include "wyszukaj_dyscypline.h"
#include "ui_wyszukaj_dyscypline.h"

wyszukaj_dyscypline::wyszukaj_dyscypline(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wyszukaj_dyscypline)
{
    ui->setupUi(this);
}

wyszukaj_dyscypline::~wyszukaj_dyscypline()
{
    delete ui;
}
