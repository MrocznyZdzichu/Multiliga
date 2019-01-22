#ifndef DODAJ_KONTO_H
#define DODAJ_KONTO_H

#include <QDialog>

namespace Ui {
class dodaj_konto;
}

class dodaj_konto : public QDialog
{
    Q_OBJECT

public:
    explicit dodaj_konto(QWidget *parent = nullptr);
    ~dodaj_konto();

private:
    Ui::dodaj_konto *ui;
};

#endif // DODAJ_KONTO_H
