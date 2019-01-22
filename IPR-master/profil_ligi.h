#ifndef PROFIL_LIGI_H
#define PROFIL_LIGI_H

#include <cstring>
#include <QDialog>
#include "CLiga.h"
#include "rapidjson-master/rapidjson-master/include/rapidjson/pointer.h"
#include "rapidjson-master/rapidjson-master/include/rapidjson/document.h"
namespace Ui {
class profil_ligi;
}

class profil_ligi : public QDialog
{
    Q_OBJECT

public:
    explicit profil_ligi(QWidget *parent = nullptr, std::string nazwaLigi = "");
    ~profil_ligi();
    std::string nazwaLigi;

private:
    Ui::profil_ligi *ui;

private slots:
    void wczytaj_dane();
};

#endif // PROFIL_LIGI_H
