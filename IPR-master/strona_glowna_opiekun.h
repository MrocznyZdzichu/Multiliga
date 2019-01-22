#ifndef STRONA_GLOWNA_OPIEKUN_H
#define STRONA_GLOWNA_OPIEKUN_H
#include <memory>
#include <QDialog>
#include <dodaj_ogloszenie.h>
#include <wyszukiwanie.h>
#include "zarzadzaj_miejscami.h"
namespace Ui {
class strona_glowna_opiekun;
}

class strona_glowna_opiekun : public QDialog
{
    Q_OBJECT

public:
    explicit strona_glowna_opiekun(QWidget *parent = nullptr);
    ~strona_glowna_opiekun();

private slots:
    void on_edycja_konta_clicked();
    void on_wyloguj_2_clicked();

    void on_edycja_konta_5_clicked();

    void on_edycja_konta_4_clicked();

private:
    Ui::strona_glowna_opiekun *ui;
    dodaj_ogloszenie *addMsgDialog;

};

#endif // STRONA_GLOWNA_OPIEKUN_H
