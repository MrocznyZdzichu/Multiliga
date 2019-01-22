#include "zakladanie_druzyny.h"
#include "ui_zakladanie_druzyny.h"

zakladanie_druzyny::zakladanie_druzyny(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zakladanie_druzyny)
{
    ui->setupUi(this);
}

zakladanie_druzyny::~zakladanie_druzyny()
{
    delete ui;
}
