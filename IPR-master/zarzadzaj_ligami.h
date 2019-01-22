#ifndef ZARZADZAJ_LIGAMI_H
#define ZARZADZAJ_LIGAMI_H

#include <QDialog>
#include "CListaLig.h"
#include "profil_ligi.h"

namespace Ui {
class zarzadzaj_ligami;
}

class zarzadzaj_ligami : public QDialog
{
    Q_OBJECT

public:
    explicit zarzadzaj_ligami(QWidget *parent = nullptr);
    ~zarzadzaj_ligami();

private slots:
    void on_commandLinkButton_clicked();

    void update();
    void wczytaj_dane();
    void fileNotFound(QString comm);

    void on_pushButton_3_clicked();

private:
    Ui::zarzadzaj_ligami *ui;
};

#endif // ZARZADZAJ_LIGAMI_H
