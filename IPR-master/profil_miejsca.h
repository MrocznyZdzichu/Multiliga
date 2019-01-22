#ifndef PROFIL_MIEJSCA_H
#define PROFIL_MIEJSCA_H

#include <QDialog>

namespace Ui {
class profil_miejsca;
}

class profil_miejsca : public QDialog
{
    Q_OBJECT

public:
    explicit profil_miejsca(QWidget *parent = nullptr);
    ~profil_miejsca();

private:
    Ui::profil_miejsca *ui;
};

#endif // PROFIL_MIEJSCA_H
