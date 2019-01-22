#ifndef LIGA_DODAJ_H
#define LIGA_DODAJ_H

#include <QDialog>
#include "CLiga.h"
#include "CListaDyscyplin.h"
#include "CListaOpiekonow.h"
#include "CListaMiast.h"
#include "profil_ligi.h"

namespace Ui {
class liga_dodaj;
}

class liga_dodaj : public QDialog
{
    Q_OBJECT

public:
    explicit liga_dodaj(QWidget *parent = nullptr);
    ~liga_dodaj();

private:
    Ui::liga_dodaj *ui;
    void inicjalizuj_glowne_pola(CLiga* nowaLiga);
    void inicjalizuj_zasady(CLiga* nowaLiga);
    void inicjalizuj_opiekuna(CLiga* nowaLiga);

    void otworz_profil_ligi(std::string nazwaLigi);

private slots:
    void wczytaj_dane();
    void wyswietlKomunikat(QString comm);

    void on_pushButton_5_clicked();
};

#endif // LIGA_DODAJ_H
