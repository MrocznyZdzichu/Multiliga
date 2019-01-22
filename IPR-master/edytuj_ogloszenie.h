#ifndef EDYTUJ_OGLOSZENIE_H
#define EDYTUJ_OGLOSZENIE_H

#include <QDialog>

namespace Ui {
class edytuj_ogloszenie;
}

class edytuj_ogloszenie : public QDialog
{
    Q_OBJECT

public:
    explicit edytuj_ogloszenie(QWidget *parent = nullptr);
    ~edytuj_ogloszenie();

private:
    Ui::edytuj_ogloszenie *ui;
};

#endif // EDYTUJ_OGLOSZENIE_H
