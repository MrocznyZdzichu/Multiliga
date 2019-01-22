#ifndef EDYCJA_KONTA_GRACZ_H
#define EDYCJA_KONTA_GRACZ_H

#include <QDialog>

namespace Ui {
class edycja_konta_gracz;
}

class edycja_konta_gracz : public QDialog
{
    Q_OBJECT

public:
    explicit edycja_konta_gracz(QWidget *parent = nullptr);
    ~edycja_konta_gracz();

private:
    Ui::edycja_konta_gracz *ui;
};

#endif // EDYCJA_KONTA_GRACZ_H
