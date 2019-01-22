#ifndef WYSZUKIWANIE_H
#define WYSZUKIWANIE_H

#include <QDialog>
#include "wyszukaj_miasto.h"
#include "wyszukaj_druzyne.h"

namespace Ui {
class wyszukiwanie;
}

class wyszukiwanie : public QDialog
{
    Q_OBJECT

public:
    explicit wyszukiwanie(QWidget *parent = nullptr);
    ~wyszukiwanie();

private slots:
    void on_zaloz_druzyne_4_clicked();

    void on_wyszukiwanie_druzyn_clicked();

private:
    Ui::wyszukiwanie *ui;
};

#endif // WYSZUKIWANIE_H
