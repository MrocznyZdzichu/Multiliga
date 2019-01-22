#ifndef GRACZ_DODAJ_NAGRODE_H
#define GRACZ_DODAJ_NAGRODE_H

#include <QDialog>

namespace Ui {
class gracz_dodaj_nagrode;
}

class gracz_dodaj_nagrode : public QDialog
{
    Q_OBJECT

public:
    explicit gracz_dodaj_nagrode(QWidget *parent = nullptr);
    ~gracz_dodaj_nagrode();

private:
    Ui::gracz_dodaj_nagrode *ui;
};

#endif // GRACZ_DODAJ_NAGRODE_H
