#ifndef DRUZUNA_DODAJ_H
#define DRUZUNA_DODAJ_H

#include <QDialog>

namespace Ui {
class druzuna_dodaj;
}

class druzuna_dodaj : public QDialog
{
    Q_OBJECT

public:
    explicit druzuna_dodaj(QWidget *parent = nullptr);
    ~druzuna_dodaj();

private:
    Ui::druzuna_dodaj *ui;
};

#endif // DRUZUNA_DODAJ_H
