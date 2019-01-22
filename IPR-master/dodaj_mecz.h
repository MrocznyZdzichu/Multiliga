#ifndef DODAJ_MECZ_H
#define DODAJ_MECZ_H

#include <QDialog>

namespace Ui {
class dodaj_mecz;
}

class dodaj_mecz : public QDialog
{
    Q_OBJECT

public:
    explicit dodaj_mecz(QWidget *parent = nullptr);
    ~dodaj_mecz();

private:
    Ui::dodaj_mecz *ui;
};

#endif // DODAJ_MECZ_H
