#ifndef LIGA_USUN_H
#define LIGA_USUN_H

#include <QDialog>

namespace Ui {
class liga_usun;
}

class liga_usun : public QDialog
{
    Q_OBJECT

public:
    explicit liga_usun(QWidget *parent = nullptr);
    ~liga_usun();

private:
    Ui::liga_usun *ui;
};

#endif // LIGA_USUN_H
