#include "wyszukaj_druzyne.h"
#include "ui_wyszukaj_druzyne.h"

wyszukaj_druzyne::wyszukaj_druzyne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::wyszukaj_druzyne)
{
    ui->setupUi(this);
    this->wczytaj_dane();
}

wyszukaj_druzyne::~wyszukaj_druzyne()
{
    delete ui;
}

void wyszukaj_druzyne::wczytaj_dane()
{
    this->ui->comboBox_2->clear();

    CListaDyscyplin* availableSports = new CListaDyscyplin;
    availableSports->ListaDyscyplinDOM = availableSports->deserializuj("listadyscyplin.json");

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
    availableLeagues->listaLigDOM = availableLeagues->deserializuj("listaLig.json");

    if (availableLeagues->listaLigDOM != NULL)
    {
        for (auto& i : availableLeagues->listaLigDOM["listaLig"].GetArray())
        {
            this->ui->comboBox->addItem(QString::fromStdString(i["nazwa"].GetString()));
        }
    }

    this->ui->comboBox_3->clear();

    CListaMiast* availableTowns = new CListaMiast;
    availableTowns->ListaMiastDOM = availableSports->deserializuj("listamiast.json");

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

    CListaDruzyn* listaDruzyn = new CListaDruzyn(nazwaDruzyny, nazwaLigi, nazwaMiasta, nazwaDyscypliny);
    listaDruzyn->serializujSzukane();
    listaDruzyn->wyslij_siebie();

    listaDruzyn->listaDruzynDOM = CRest::getRest().odbierz_druzyny();
    listaDruzyn->wybierzDruzyny();
    bool czyDruzynyGotowe = listaDruzyn->lista_gotowa();

    if (czyDruzynyGotowe)
    {
        wypisz_druzyny(listaDruzyn);
        this->ui->label->setText("Wyniki wyszuiwania znajdują się w tabeli poniżej");
    }
    else
    {
        ui->label->setText("Nie ma takiej druzyny");
    }
}

void wyszukaj_druzyne::wypisz_druzyny(CListaDruzyn *druzyny)
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

void wyszukaj_druzyne::on_tableWidget_cellClicked(int row, int column)
{
    profil_druzyny* teamInfo;
    std::string fileName;
    fileName = this->ui->tableWidget->item(row, 0)->text().toStdString();
    fileName += ".json";

    teamInfo = new profil_druzyny(this, fileName);
    teamInfo->open();
}
