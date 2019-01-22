#ifndef KOLEJKA_EDYTUJ_H
#define KOLEJKA_EDYTUJ_H

#include <QDialog>

namespace Ui {
class kolejka_edytuj;
}

class kolejka_edytuj : public QDialog
{
    Q_OBJECT

public:
    explicit kolejka_edytuj(QWidget *parent = nullptr);
    ~kolejka_edytuj();

private:
    Ui::kolejka_edytuj *ui;
};

#endif // KOLEJKA_EDYTUJ_H
