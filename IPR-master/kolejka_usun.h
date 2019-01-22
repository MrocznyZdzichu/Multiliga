#ifndef KOLEJKA_USUN_H
#define KOLEJKA_USUN_H

#include <QDialog>

namespace Ui {
class kolejka_usun;
}

class kolejka_usun : public QDialog
{
    Q_OBJECT

public:
    explicit kolejka_usun(QWidget *parent = nullptr);
    ~kolejka_usun();

private:
    Ui::kolejka_usun *ui;
};

#endif // KOLEJKA_USUN_H
