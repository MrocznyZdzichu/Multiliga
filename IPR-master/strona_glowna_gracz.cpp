#include "strona_glowna_gracz.h"
#include "ui_strona_glowna_gracz.h"

strona_glowna_gracz::strona_glowna_gracz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::strona_glowna_gracz)
{
    ui->setupUi(this);
}

strona_glowna_gracz::~strona_glowna_gracz()
{
    delete ui;
}
