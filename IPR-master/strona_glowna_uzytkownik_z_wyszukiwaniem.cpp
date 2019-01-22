#include "strona_glowna_uzytkownik_z_wyszukiwaniem.h"
#include "ui_strona_glowna_uzytkownik_z_wyszukiwaniem.h"

strona_glowna_uzytkownik_z_wyszukiwaniem::strona_glowna_uzytkownik_z_wyszukiwaniem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::strona_glowna_uzytkownik_z_wyszukiwaniem)
{
    ui->setupUi(this);
}

strona_glowna_uzytkownik_z_wyszukiwaniem::~strona_glowna_uzytkownik_z_wyszukiwaniem()
{
    delete ui;
}
