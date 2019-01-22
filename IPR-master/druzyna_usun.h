#ifndef DRUZYNA_USUN_H
#define DRUZYNA_USUN_H

#include <QDialog>

namespace Ui {
class druzyna_usun;
}

class druzyna_usun : public QDialog
{
    Q_OBJECT

public:
    explicit druzyna_usun(QWidget *parent = nullptr);
    ~druzyna_usun();

private:
    Ui::druzyna_usun *ui;
};

#endif // DRUZYNA_USUN_H
