#ifndef DODAJ_OGLOSZENIE_H
#define DODAJ_OGLOSZENIE_H

#include <QDialog>

namespace Ui {
class dodaj_ogloszenie;
}

class dodaj_ogloszenie : public QDialog
{
    Q_OBJECT

public:
    explicit dodaj_ogloszenie(QWidget *parent = nullptr);
    ~dodaj_ogloszenie();

private:
    Ui::dodaj_ogloszenie *ui;
};

#endif // DODAJ_OGLOSZENIE_H
