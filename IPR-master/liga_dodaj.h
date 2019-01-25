#ifndef LIGA_DODAJ_H
#define LIGA_DODAJ_H

#include <QDialog>
#include "CLiga.h"
#include "CListaDyscyplin.h"
#include "CListaOpiekonow.h"
#include "CListaMiast.h"
#include "profil_ligi.h"

struct Dane
{
    std::string nazwa, dyscyplina, sezon, miasto, organizator;
    int poziom_ligi, liczba_kolejek, liczebnosc_druzyn, liczba_podmeczy, czas_trwania_podmeczu, liczba_punktow_do_zwyciestwa, liczba_meczy_na_kolejke;

    bool czyPoprawne()
    {
        bool czyPlikIstnieje;
        Document d = CRest::getRest().wez_json_i_przekaz("listaLig.json", czyPlikIstnieje);
        if (czyPlikIstnieje)
        {
            if (nazwa == "" || dyscyplina == "" || sezon == "" || organizator == ""
                    || poziom_ligi <= 0 || liczba_kolejek <= 0 || liczebnosc_druzyn <= 0 || liczba_podmeczy <= 0
                    || czas_trwania_podmeczu <= 0 || liczba_punktow_do_zwyciestwa <= 0)
            {
                return 0;
            }
            else
            {
                for (auto& i : d["listaLig"].GetArray())
                {
                    if (nazwa == i["nazwa"].GetString())
                        return 0;
                }
                return 1;
            }
        }
        else
            return 0;
    }
};

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
    void inicjalizacja(CLiga* nowaLiga);

private slots:
    void wczytaj_dane();
    void wyswietlKomunikat(QString comm);

    void on_pushButton_5_clicked();
};

#endif // LIGA_DODAJ_H
