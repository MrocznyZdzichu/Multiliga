#ifndef WYSZUKAJ_GRACZA_H
#define WYSZUKAJ_GRACZA_H

#include <QDialog>

namespace Ui {
class wyszukaj_gracza;
}

class wyszukaj_gracza : public QDialog
{
    Q_OBJECT

public:
    explicit wyszukaj_gracza(QWidget *parent = nullptr);
    ~wyszukaj_gracza();

private:
    Ui::wyszukaj_gracza *ui;
};

#endif // WYSZUKAJ_GRACZA_H
