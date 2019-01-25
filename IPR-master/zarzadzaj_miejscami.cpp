#include "zarzadzaj_miejscami.h"
#include "ui_zarzadzaj_miejscami.h"
#include "CListaMiejsc.h"
#include "CRest.h"
zarzadzaj_miejscami::zarzadzaj_miejscami(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zarzadzaj_miejscami)
{
    connect(&CRest::getRest(), SIGNAL(aktualizuj_zarzadzaj_miejscami()), this, SLOT(wczytaj_dane()));

    ui->setupUi(this);
    this->wczytaj_dane();
}

zarzadzaj_miejscami::~zarzadzaj_miejscami()
{
    delete ui;
    delete this;
}

void zarzadzaj_miejscami::on_commandLinkButton_clicked()
{
    dodaj_miejsce *addPlace = new dodaj_miejsce(this);
}

void zarzadzaj_miejscami::on_pushButton_clicked()
{

}
void zarzadzaj_miejscami::wczytaj_dane()
{
     ui->comboBox->clear();

    CListaMiejsc* availablePlaces = new CListaMiejsc();
    availablePlaces->listaMiejscDOM = availablePlaces->pobierz_dane("listamiejsc.json");

    for (auto& itr : availablePlaces->listaMiejscDOM["listaMiejsc"].GetArray())
    {
        ui->comboBox->addItem(QString::fromStdString(itr["nazwa miejsca"].GetString()));
    }
}
