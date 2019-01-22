#ifndef PROFIL_GRACZA_H
#define PROFIL_GRACZA_H

#include <QDialog>

namespace Ui {
class profil_gracza;
}

class profil_gracza : public QDialog
{
    Q_OBJECT

public:
    explicit profil_gracza(QWidget *parent = nullptr);
    ~profil_gracza();

private:
    Ui::profil_gracza *ui;
};

#endif // PROFIL_GRACZA_H
