#ifndef DODAJ_KONTO_DRUZYNE_H
#define DODAJ_KONTO_DRUZYNE_H

#include <QDialog>

namespace Ui {
class dodaj_konto_druzyne;
}

class dodaj_konto_druzyne : public QDialog
{
    Q_OBJECT

public:
    explicit dodaj_konto_druzyne(QWidget *parent = nullptr);
    ~dodaj_konto_druzyne();

private:
    Ui::dodaj_konto_druzyne *ui;
};

#endif // DODAJ_KONTO_DRUZYNE_H
