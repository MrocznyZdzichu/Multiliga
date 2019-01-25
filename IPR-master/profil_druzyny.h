#ifndef PROFIL_DRUZYNY_H
#define PROFIL_DRUZYNY_H

#include <QDialog>
#include "CDruzyna.h"
#include "CZaproszenieLiga.h"

namespace Ui {
class profil_druzyny;
}

class profil_druzyny : public QDialog
{
    Q_OBJECT

public:
    profil_druzyny(QWidget *parent, CDruzyna* wyszukana_druzyna);
    explicit profil_druzyny(QWidget *parent = nullptr);
    std::string jsonname;
    std::vector<CZaproszenieLiga*> zaproszeniaDruzynDoLig;
    CDruzyna* wyszukana_druzyna;
    ~profil_druzyny();

private slots:
    void on_pushButton_clicked();
    void wyswietl_druzyne();
    void on_pushButton_4_clicked();
    bool czy_nalezy_do_ligi();
    void aktywuj_przycisk_zapraszania_i_zablokuj_usuwania ();
    void zablokuj_przycisk_zapraszania();
    void wczytaj_ligi();

private:
    Ui::profil_druzyny *ui;
};

#endif // PROFIL_DRUZYNY_H
