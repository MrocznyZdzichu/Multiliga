#ifndef EDYCJA_KONTA_H
#define EDYCJA_KONTA_H

#include <QDialog>

namespace Ui {
class edycja_konta;
}

class edycja_konta : public QDialog
{
    Q_OBJECT

public:
    explicit edycja_konta(QWidget *parent = nullptr);
    ~edycja_konta();

private:
    Ui::edycja_konta *ui;
};

#endif // EDYCJA_KONTA_H
