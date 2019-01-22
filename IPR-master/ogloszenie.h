#ifndef OGLOSZENIE_H
#define OGLOSZENIE_H

#include <QDialog>

namespace Ui {
class ogloszenie;
}

class ogloszenie : public QDialog
{
    Q_OBJECT

public:
    explicit ogloszenie(QWidget *parent = nullptr);
    ~ogloszenie();

private:
    Ui::ogloszenie *ui;
};

#endif // OGLOSZENIE_H
