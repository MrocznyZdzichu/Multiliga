#ifndef PROFIL_DRUZYNY_H
#define PROFIL_DRUZYNY_H

#include <QDialog>
#include "CDruzyna.h"

namespace Ui {
class profil_druzyny;
}

class profil_druzyny : public QDialog
{
    Q_OBJECT

public:
    profil_druzyny(QWidget *parent, std::string jsonname);
    explicit profil_druzyny(QWidget *parent = nullptr);
    std::string jsonname;
    ~profil_druzyny();

private slots:
    void on_pushButton_clicked();
    void wczytaj_dane();
    void ustawWidgety(const Document& d);
    void ustawTabele(const Document& d);

    void on_pushButton_4_clicked();

private:
    Ui::profil_druzyny *ui;
};

#endif // PROFIL_DRUZYNY_H
