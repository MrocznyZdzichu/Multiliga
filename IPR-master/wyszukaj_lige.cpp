#include "wyszukaj_lige.h"
#include "ui_wyszukaj_lige.h"

wyszukaj_lige::wyszukaj_lige(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wyszukaj_lige)
{
    ui->setupUi(this);
}

wyszukaj_lige::~wyszukaj_lige()
{
    delete ui;
}
