#include "strona_glowna_opiekun.h"
#include "ui_strona_glowna_opiekun.h"
#include "zarzadzaj_ligami.h"

strona_glowna_opiekun::strona_glowna_opiekun(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::strona_glowna_opiekun)
{
    ui->setupUi(this);
}

strona_glowna_opiekun::~strona_glowna_opiekun()
{   
    delete ui;
    delete this;
}

void strona_glowna_opiekun::on_edycja_konta_clicked()
{
    this->addMsgDialog = new dodaj_ogloszenie(this);
    this->addMsgDialog->open();
}

void strona_glowna_opiekun::on_wyloguj_2_clicked()
{
    wyszukiwanie *searchWindow;
    searchWindow = new wyszukiwanie(this);
    searchWindow->open();
}

void strona_glowna_opiekun::on_edycja_konta_5_clicked()
{
    zarzadzaj_miejscami *managePlaces;
    managePlaces = new zarzadzaj_miejscami(this);
    managePlaces->open();
}

void strona_glowna_opiekun::on_edycja_konta_4_clicked()
{
    zarzadzaj_ligami* manageLeagues = new zarzadzaj_ligami(this);
    manageLeagues->open();
}
