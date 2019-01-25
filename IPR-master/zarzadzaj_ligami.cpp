#include "zarzadzaj_ligami.h"
#include "ui_zarzadzaj_ligami.h"
#include "liga_dodaj.h"
zarzadzaj_ligami::zarzadzaj_ligami(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zarzadzaj_ligami)
{
    connect(&CRest::getRest(), SIGNAL(aktualizuj_ligi()), this, SLOT(aktualizuj()));

    ui->setupUi(this);
    this->wczytaj_dane();
}

zarzadzaj_ligami::~zarzadzaj_ligami()
{
    delete ui;
}

void zarzadzaj_ligami::wczytaj_dane()
{
    this->ui->comboBox->clear();

    CListaLig* availableLeagues = new CListaLig();
    availableLeagues->listaLigDOM = availableLeagues->pobierz_dane("listaLig.json");

    if (availableLeagues->listaLigDOM != NULL)
    {
        for (auto& i : availableLeagues->listaLigDOM["listaLig"].GetArray())
        {
            this->ui->comboBox->addItem(QString::fromStdString(i["nazwa"].GetString()));
        }
    }
}

void zarzadzaj_ligami::on_commandLinkButton_clicked()
{
    liga_dodaj* addLeague = new liga_dodaj (this);
}

void zarzadzaj_ligami::fileNotFound(QString comm)
{
    ui->label_2->setText("Nie znaleziono lig");
}

void zarzadzaj_ligami::aktualizuj()
{
    this->wczytaj_dane();
}

void zarzadzaj_ligami::on_pushButton_3_clicked()
{

}
