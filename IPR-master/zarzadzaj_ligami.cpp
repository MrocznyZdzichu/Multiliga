#include "zarzadzaj_ligami.h"
#include "ui_zarzadzaj_ligami.h"
#include "liga_dodaj.h"
zarzadzaj_ligami::zarzadzaj_ligami(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zarzadzaj_ligami)
{
    connect(&CRest::getRest(), SIGNAL(fileNotFound(QString)), this, SLOT(fileNotFound(QString)));
    connect(&CRest::getRest(), SIGNAL(updateLeagues()), this, SLOT(update()));

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
    availableLeagues->listaLigDOM = availableLeagues->deserializuj("listaLig.json");

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
    addLeague->open();
}

void zarzadzaj_ligami::fileNotFound(QString comm)
{
    ui->label_2->setText("Nie znaleziono lig");
}

void zarzadzaj_ligami::update()
{
    this->wczytaj_dane();
}

void zarzadzaj_ligami::on_pushButton_3_clicked()
{
    std::string nazwaLigi = ui->comboBox->currentText().toStdString();
    profil_ligi* profilLigi = new profil_ligi(this, nazwaLigi);
    profilLigi->open();
}
