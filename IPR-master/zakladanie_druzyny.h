#ifndef ZAKLADANIE_DRUZYNY_H
#define ZAKLADANIE_DRUZYNY_H

#include <QDialog>

namespace Ui {
class zakladanie_druzyny;
}

class zakladanie_druzyny : public QDialog
{
    Q_OBJECT

public:
    explicit zakladanie_druzyny(QWidget *parent = nullptr);
    ~zakladanie_druzyny();

private:
    Ui::zakladanie_druzyny *ui;
};

#endif // ZAKLADANIE_DRUZYNY_H
