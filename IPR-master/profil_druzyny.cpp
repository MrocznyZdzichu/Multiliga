#include "profil_druzyny.h"
#include "ui_profil_druzyny.h"
#include "CListaLig.h"
profil_druzyny::profil_druzyny(QWidget *parent, std::string jsonname) :
    QDialog(parent),
    ui(new Ui::profil_druzyny)
{
    this->jsonname = jsonname;
    ui->setupUi(this);
    this->wczytaj_dane();
}

profil_druzyny::~profil_druzyny()
{
    delete ui;
}

void profil_druzyny::on_pushButton_clicked()
{
    this->close();
}

void parsujZawodnikow(const Document& DOM, std::string& imie, std::string& nazwisko, std::string rawString,
                      std::vector<std::string>& imiona, std::vector<std::string>& nazwiska);
void profil_druzyny::wczytaj_dane()
{
    CDruzyna* wyswietlanaDruzyna = new CDruzyna;
    wyswietlanaDruzyna->druzynaDOM = wyswietlanaDruzyna->deserializuj(jsonname);

    std::string imie = "";
    std::string nazwisko = "";
    std::vector<std::string> imiona;
    std::vector<std::string> nazwiska;
    std::string rawString;

    parsujZawodnikow(wyswietlanaDruzyna->druzynaDOM, imie, nazwisko, rawString, imiona, nazwiska);
    this->ustawWidgety(wyswietlanaDruzyna->druzynaDOM);

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
void parsujZawodnikow(const Document &DOM, std::string &imie, std::string &nazwisko, std::string rawString,
                      std::vector<std::string> &imiona, std::vector<std::string> &nazwiska)
{
    for (auto& gracz : DOM["gracze"].GetArray())
    {
        imie = "";
        nazwisko = "";
        rawString = gracz.GetString();
        int trigger = 0;
        for (auto sign : rawString)
        {
            if (sign == ' ')
            {
                trigger++;
                continue;
            }
            switch (trigger)
            {
            case 0:
                imie += sign;
                break;

            case 1:
                nazwisko += sign;
                break;
            }
        }
        imiona.push_back(imie);
        nazwiska.push_back(nazwisko);
    }
}

void profil_druzyny::ustawWidgety (const Document& d)
{
    std::string nazwa = "Nazwa: ";
    nazwa += d["nazwa"].GetString();
    this->ui->label->setText(QString::fromStdString(nazwa));

    nazwa = "Dyscyplina: ";
    nazwa += d["dyscyplina"].GetString();
    this->ui->label_6->setText(QString::fromStdString(nazwa));

    nazwa = "Kapitan: ";
    nazwa += d["gracze"][0].GetString();
    this->ui->label_2->setText(QString::fromStdString(nazwa));

    nazwa = "Opis: ";
    nazwa += d["opis"].GetString();
    this->ui->label_3->setText(QString::fromStdString(nazwa));

    nazwa = "Uczestniczy w lidze: ";
    nazwa += d["liga"].GetString();
    this->ui->label_4->setText(QString::fromStdString(nazwa));

    nazwa = "Poprzednia liga: ";
    nazwa += d["poprzednia liga"].GetString();
    this->ui->label_7->setText(QString::fromStdString(nazwa));

    nazwa = "Osiągniecia: ";
    nazwa += d["osiagniecia"].GetString();
    this->ui->label_5->setText(QString::fromStdString(nazwa));

    this->ustawTabele(d);
}

void profil_druzyny::ustawTabele(const Document &d)
{
    this->ui->tableWidget->setColumnCount(3);
    int rowCount = 0;
    for (auto& liczbaGraczy : d["gracze"].GetArray())
        rowCount++;
    this->ui->tableWidget->setRowCount(rowCount);

    std::string imie = "";
    std::string nazwisko = "";
    std::vector<std::string> imiona;
    std::vector<std::string> nazwiska;
    std::string rawString;
    parsujZawodnikow(d, imie, nazwisko, rawString, imiona, nazwiska);

    QStringList naglowki;
    naglowki << "Imie";
    naglowki << "Nazwisko";
    naglowki << "";
    this->ui->tableWidget->setHorizontalHeaderLabels(naglowki);

    int rowNumber = 0;
    int colNumber = 0;
    for (int i = 0; i < rowCount; i++)
    {
        this->ui->tableWidget->setItem(rowNumber, colNumber,
                                       new QTableWidgetItem(QString::fromStdString(
                                                                imiona[rowNumber])));
        colNumber++;

        this->ui->tableWidget->setItem(rowNumber, colNumber,
                                       new QTableWidgetItem(QString::fromStdString(
                                                                nazwiska[rowNumber])));

        if (rowNumber == 0)
        {
            colNumber++;
            this->ui->tableWidget->setItem(rowNumber, colNumber,
                                           new QTableWidgetItem(QString::fromStdString(
                                                                    "Kapitan")));
        }
        else
        {
            colNumber++;
            this->ui->tableWidget->setItem(rowNumber, colNumber,
                                           new QTableWidgetItem(QString::fromStdString(
                                                                    "Członek")));
        }

        rowNumber++;
        colNumber = 0;
    }
}

void profil_druzyny::on_pushButton_4_clicked()
{

}
