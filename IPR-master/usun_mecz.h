#ifndef USUN_MECZ_H
#define USUN_MECZ_H

#include <QDialog>

namespace Ui {
class usun_mecz;
}

class usun_mecz : public QDialog
{
    Q_OBJECT

public:
    explicit usun_mecz(QWidget *parent = nullptr);
    ~usun_mecz();

private:
    Ui::usun_mecz *ui;
};

#endif // USUN_MECZ_H
