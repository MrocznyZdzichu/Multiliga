#ifndef DODAJ_MIEJSCE_H
#define DODAJ_MIEJSCE_H

#include <QDialog>
#include "CListaMiast.h"
#include "CListaDyscyplin.h"
#include "profil_miejsca.h"

namespace Ui {
class dodaj_miejsce;
}

class dodaj_miejsce : public QDialog
{
    Q_OBJECT

public:
    explicit dodaj_miejsce(QWidget *parent = nullptr);
    ~dodaj_miejsce();
    profil_miejsca* wyswietlenieMiejsca;

private slots:
    void on_pushButton_3_clicked();
    void addGamingPlaceResult (QString comm);
    void wczytaj_dane();

    void on_pushButton_2_clicked();

private:
    Ui::dodaj_miejsce *ui;
    void aktualizuj (CListaMiast* lista_miast, CListaDyscyplin* lista_dyscyplin);

};

#endif // DODAJ_MIEJSCE_H
