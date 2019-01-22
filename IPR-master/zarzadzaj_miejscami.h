#ifndef ZARZADZAJ_MIEJSCAMI_H
#define ZARZADZAJ_MIEJSCAMI_H

#include <QDialog>
#include "dodaj_miejsce.h"
namespace Ui {
class zarzadzaj_miejscami;
}

class zarzadzaj_miejscami : public QDialog
{
    Q_OBJECT

public:
    explicit zarzadzaj_miejscami(QWidget *parent = nullptr);
    ~zarzadzaj_miejscami();

private slots:
    void on_commandLinkButton_clicked();
    void wczytaj_dane();
    void on_pushButton_clicked();

private:
    Ui::zarzadzaj_miejscami *ui;
};

#endif // ZARZADZAJ_MIEJSCAMI_H
