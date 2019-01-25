#include "profil_druzyny.h"
#include "ui_profil_druzyny.h"
#include "CListaLig.h"

profil_druzyny::profil_druzyny(QWidget *parent, CDruzyna* wyszukana_druzyna) :
    QDialog(parent),
    ui(new Ui::profil_druzyny)
{
    this->wyszukana_druzyna = wyszukana_druzyna;
    ui->setupUi(this);
    this->wczytaj_ligi();
    this->wyswietl_druzyne();
    if (this->czy_nalezy_do_ligi())
    {

    }
    else
    {
        this->aktywuj_przycisk_zapraszania_i_zablokuj_usuwania();
    }


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
void profil_druzyny::wyswietl_druzyne()
{
    std::string t1 = "Nazwa: ";
    t1 += this->wyszukana_druzyna->nazwa;
    this->ui->label->setText(QString::fromStdString(t1));

    t1 = "Dyscyplina: ";
    t1 += this->wyszukana_druzyna->dyscyplina->nazwaDyscypliny;
    this->ui->label_6->setText(QString::fromStdString(t1));

    t1 = "Kapitan: ";
    t1 += this->wyszukana_druzyna->graczeDruzyny[0]->getImie();
    t1 += " ";
    t1 += this->wyszukana_druzyna->graczeDruzyny[0]->getNazwisko();
    this->ui->label_2->setText(QString::fromStdString(t1));

    t1 = "opis: ";
    t1 += this->wyszukana_druzyna->opis;
    this->ui->label_3->setText(QString::fromStdString(t1));

    t1 = "Uczestniczy w: ";
    t1 += this->wyszukana_druzyna->liga->nazwaLigi;
    this->ui->label_4->setText(QString::fromStdString(t1));

    t1 = "Poprzednie uczestniczyła w: ";
    t1 += this->wyszukana_druzyna->poprzednia_liga->nazwaLigi;
    this->ui->label_7->setText(QString::fromStdString(t1));

    t1 = "Osiagniecia: ";
    t1 += this->wyszukana_druzyna->osiagniecia;
    this->ui->label_5->setText(QString::fromStdString(t1));

    this->ui->tableWidget->setColumnCount(3);
    this->ui->tableWidget->setRowCount(this->wyszukana_druzyna->graczeDruzyny.size());
    QStringList naglowki;
    naglowki << "Imie";
    naglowki << "Nazwisko";
    naglowki << "";
    this->ui->tableWidget->setHorizontalHeaderLabels(naglowki);
    for (int i = 0; i < ui->tableWidget->rowCount(); i++)
    {
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString::fromStdString(this->wyszukana_druzyna->graczeDruzyny[i]->getImie())));
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString::fromStdString(this->wyszukana_druzyna->graczeDruzyny[i]->getNazwisko())));
        if (i == 0)
            ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::fromStdString("Kapitan")));
        else
            ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::fromStdString("Czlonek")));
    }

}
void profil_druzyny::on_pushButton_4_clicked()
{
    std::string nazwa_druzyny, nazwa_ligi;
    nazwa_druzyny = this->wyszukana_druzyna->nazwa;
    nazwa_ligi = this->ui->comboBox->currentText().toStdString();
    CZaproszenieLiga* zaproszenie = new CZaproszenieLiga(nazwa_druzyny, nazwa_ligi);

    zaproszenie->serializuj();
    zaproszenie->wyslij_siebie();

    CRest::getRest().dodaj_zaproszenie_do_ligi_druzynowej();
    this->zablokuj_przycisk_zapraszania();
}

bool profil_druzyny::czy_nalezy_do_ligi()
{
    if (this->wyszukana_druzyna->liga->nazwaLigi == "brak")
    {
        return false;
    }
    else
    {
        return true;
    }
}

void profil_druzyny::aktywuj_przycisk_zapraszania_i_zablokuj_usuwania()
{
    ui->pushButton_4->setEnabled(1);
    ui->pushButton_5->setEnabled(0);
}

void profil_druzyny::zablokuj_przycisk_zapraszania()
{
    ui->label_9->setText("Stworzono zaproszenie");
    ui->pushButton_4->setEnabled(0);
}

void profil_druzyny::wczytaj_ligi()
{
    bool czy_plik_istnieje;
    Document d = CRest::getRest().wez_json_i_przekaz("listaLig.json", czy_plik_istnieje);
    for (auto& liga : d["listaLig"].GetArray())
    {
        ui->comboBox->addItem(QString::fromStdString(liga["nazwa"].GetString()));
    }
}
