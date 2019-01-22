#ifndef WYSZUKAJ_DRUZYNE_H
#define WYSZUKAJ_DRUZYNE_H

#include <QDialog>

#include "CListaDyscyplin.h"
#include "CListaLig.h"
#include "CListaMiast.h"
#include "CListaDruzyn.h"
#include "profil_druzyny.h"
#include "zarzadzaj_miejscami.h"
namespace Ui {
class wyszukaj_druzyne;
}

class wyszukaj_druzyne : public QDialog
{
    Q_OBJECT

public:
    explicit wyszukaj_druzyne(QWidget *parent = nullptr);
    ~wyszukaj_druzyne();

private:
    Ui::wyszukaj_druzyne *ui;

private slots:
    void wczytaj_dane();
    void on_pushButton_3_clicked();
    void wypisz_druzyny (CListaDruzyn* druzyny);
    void on_tableWidget_cellClicked(int row, int column);
};

#endif // WYSZUKAJ_DRUZYNE_H
