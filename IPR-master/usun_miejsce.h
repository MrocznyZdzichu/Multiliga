#ifndef USUN_MIEJSCE_H
#define USUN_MIEJSCE_H

#include <QDialog>

namespace Ui {
class usun_miejsce;
}

class usun_miejsce : public QDialog
{
    Q_OBJECT

public:
    explicit usun_miejsce(QWidget *parent = nullptr);
    ~usun_miejsce();

private:
    Ui::usun_miejsce *ui;
};

#endif // USUN_MIEJSCE_H
