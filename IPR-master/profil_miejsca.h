#ifndef PROFIL_MIEJSCA_H
#define PROFIL_MIEJSCA_H

#include <QDialog>
#include <CMiejsce.h>

namespace Ui {
class profil_miejsca;
}

class profil_miejsca : public QDialog
{
    Q_OBJECT

public:
    explicit profil_miejsca(QWidget *parent, CMiejsce* miejsceRozgrywek);
    ~profil_miejsca();

private slots:
    void on_pushButton_3_clicked();
    void wczytaj_dane();

private:
    Ui::profil_miejsca *ui;
    CMiejsce* miejsceRozgrywek;
};

#endif // PROFIL_MIEJSCA_H
