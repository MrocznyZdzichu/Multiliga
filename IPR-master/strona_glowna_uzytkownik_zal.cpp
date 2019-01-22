#include "strona_glowna_uzytkownik_zal.h"
#include "ui_strona_glowna_uzytkownik_zal.h"

strona_glowna_uzytkownik_zal::strona_glowna_uzytkownik_zal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::strona_glowna_uzytkownik_zal)
{
    ui->setupUi(this);
}

strona_glowna_uzytkownik_zal::~strona_glowna_uzytkownik_zal()
{
    delete ui;
}
