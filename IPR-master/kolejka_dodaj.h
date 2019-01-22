#ifndef KOLEJKA_DODAJ_H
#define KOLEJKA_DODAJ_H

#include <QDialog>

namespace Ui {
class kolejka_dodaj;
}

class kolejka_dodaj : public QDialog
{
    Q_OBJECT

public:
    explicit kolejka_dodaj(QWidget *parent = nullptr);
    ~kolejka_dodaj();

private:
    Ui::kolejka_dodaj *ui;
};

#endif // KOLEJKA_DODAJ_H
