#ifndef PROFIL_KOLEJKI_H
#define PROFIL_KOLEJKI_H

#include <QDialog>

namespace Ui {
class profil_kolejki;
}

class profil_kolejki : public QDialog
{
    Q_OBJECT

public:
    explicit profil_kolejki(QWidget *parent = nullptr);
    ~profil_kolejki();

private:
    Ui::profil_kolejki *ui;
};

#endif // PROFIL_KOLEJKI_H
