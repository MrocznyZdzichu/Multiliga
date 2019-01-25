#include "wyszukaj_druzyne.h"
#include "ui_wyszukaj_druzyne.h"

wyszukaj_druzyne::wyszukaj_druzyne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wyszukaj_druzyne)
{
    ui->setupUi(this);
    this->wczytaj_dane();
    this->open();
}

wyszukaj_druzyne::~wyszukaj_druzyne()
{
    delete ui;
}

void wyszukaj_druzyne::wczytaj_dane()
{
    this->ui->comboBox_2->clear();

    CListaDyscyplin* availableSports = new CListaDyscyplin;
    availableSports->ListaDyscyplinDOM = availableSports->pobierz_dane("listadyscyplin.json");

    if (availableSports->ListaDyscyplinDOM != NULL)
    {
        for (auto& i : availableSports->ListaDyscyplinDOM["dyscypliny"].GetArray())
        {
            this->ui->comboBox_2->addItem(QString::fromStdString(i.GetString()));
        }
    }

    this->ui->comboBox->clear();
    this->ui->comboBox->addItem(QString::fromStdString("brak"));

    CListaLig* availableLeagues = new CListaLig();
    availableLeagues->listaLigDOM = availableLeagues->pobierz_dane("listaLig.json");

    if (availableLeagues->listaLigDOM != NULL)
    {
        for (auto& i : availableLeagues->listaLigDOM["listaLig"].GetArray())
        {
            this->ui->comboBox->addItem(QString::fromStdString(i["nazwa"].GetString()));
        }
    }

    this->ui->comboBox_3->clear();

    CListaMiast* availableTowns = new CListaMiast;
    availableTowns->ListaMiastDOM = availableSports->pobierz_dane("listamiast.json");

    if (availableTowns->ListaMiastDOM != NULL)
    {
        for (auto& i : availableTowns->ListaMiastDOM["miasta"].GetArray())
        {
            this->ui->comboBox_3->addItem(QString::fromStdString(i.GetString()));
        }
    }
}

void wyszukaj_druzyne::on_pushButton_3_clicked()
{
    std::string nazwaDruzyny = ui->lineEdit_11->text().toStdString();
    std::string nazwaLigi = ui->comboBox->currentText().toStdString();
    std::string nazwaMiasta = ui->comboBox_3->currentText().toStdString();
    std::string nazwaDyscypliny = ui->comboBox_2->currentText().toStdString();

    this->lista_druzyn = new CListaDruzyn(nazwaDruzyny, nazwaLigi, nazwaMiasta, nazwaDyscypliny);
    lista_druzyn->serializuj_szukane();
    lista_druzyn->wyslij_siebie();

    lista_druzyn->listaDruzynDOM = CRest::getRest().odbierz_druzyny();
    lista_druzyn->wybierzDruzyny();
    bool czyDruzynyGotowe = lista_druzyn->lista_gotowa();

    if (czyDruzynyGotowe)
    {
        druzyny_do_wyswietlenia(lista_druzyn);
        this->ui->label->setText("Wyniki wyszukiwania znajdują się w tabeli poniżej");
    }
    else
    {
        ui->label->setText("Nie ma takiej druzyny");
        ui->tableWidget->clear();
    }
}

void wyszukaj_druzyne::druzyny_do_wyswietlenia(CListaDruzyn *druzyny)
{
    this->ui->tableWidget->setColumnCount(4);
    int rowCount = druzyny->indeksySzukanychDruzyn.size();
    this->ui->tableWidget->setRowCount(rowCount);

    QStringList naglowki;
    naglowki << "nazwa drużyny";
    naglowki << "dyscyplina";
    naglowki << "liga";
    naglowki << "miasto";
    this->ui->tableWidget->setHorizontalHeaderLabels(naglowki);

    int rowNumber = 0;
    int colNumber = 0;
    for (auto index : druzyny->indeksySzukanychDruzyn)
    {
        this->ui->tableWidget->setItem(rowNumber, colNumber,
                                       new QTableWidgetItem(QString::fromStdString(
                                       druzyny->listaDruzynDOM["listaDruzyn"].GetArray()[index]["nazwa"].GetString())));
        colNumber++;

        this->ui->tableWidget->setItem(rowNumber, colNumber,
                                       new QTableWidgetItem(QString::fromStdString(
                                       druzyny->listaDruzynDOM["listaDruzyn"].GetArray()[index]["dyscyplina"].GetString())));

        colNumber++;
        this->ui->tableWidget->setItem(rowNumber, colNumber,
                                       new QTableWidgetItem(QString::fromStdString(
                                       druzyny->listaDruzynDOM["listaDruzyn"].GetArray()[index]["liga"].GetString())));

        colNumber++;
        this->ui->tableWidget->setItem(rowNumber, colNumber,
                                       new QTableWidgetItem(QString::fromStdString(
                                       druzyny->listaDruzynDOM["listaDruzyn"].GetArray()[index]["miasto"].GetString())));

        rowNumber++;
        colNumber = 0;
    }
}

//Odpowiada metodzie wyswietl_druzyne
void wyszukaj_druzyne::on_tableWidget_cellClicked(int row, int column)
{
    profil_druzyny* teamInfo;
    std::string nazwa_druzyny;
    nazwa_druzyny = this->ui->tableWidget->item(row, 0)->text().toStdString();
    CDruzyna* wyszukana_druzyna = this->lista_druzyn->zwroc_druzyne(nazwa_druzyny);

    teamInfo = new profil_druzyny(this, wyszukana_druzyna);
    teamInfo->open();
}
