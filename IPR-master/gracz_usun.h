#ifndef GRACZ_USUN_H
#define GRACZ_USUN_H

#include <QDialog>

namespace Ui {
class gracz_usun;
}

class gracz_usun : public QDialog
{
    Q_OBJECT

public:
    explicit gracz_usun(QWidget *parent = nullptr);
    ~gracz_usun();

private:
    Ui::gracz_usun *ui;
};

#endif // GRACZ_USUN_H
