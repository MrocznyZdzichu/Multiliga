#ifndef GRACZ_DODAJ_H
#define GRACZ_DODAJ_H

#include <QDialog>

namespace Ui {
class gracz_dodaj;
}

class gracz_dodaj : public QDialog
{
    Q_OBJECT

public:
    explicit gracz_dodaj(QWidget *parent = nullptr);
    ~gracz_dodaj();

private:
    Ui::gracz_dodaj *ui;
};

#endif // GRACZ_DODAJ_H
