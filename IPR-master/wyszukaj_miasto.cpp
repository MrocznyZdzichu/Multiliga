#include "wyszukaj_miasto.h"
#include "ui_wyszukaj_miasto.h"

wyszukaj_miasto::wyszukaj_miasto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wyszukaj_miasto)
{
    ui->setupUi(this);
}

wyszukaj_miasto::~wyszukaj_miasto()
{
    delete ui;
}
