#ifndef EDYTUJ_MIEJSCE_H
#define EDYTUJ_MIEJSCE_H

#include <QDialog>

namespace Ui {
class edytuj_miejsce;
}

class edytuj_miejsce : public QDialog
{
    Q_OBJECT

public:
    explicit edytuj_miejsce(QWidget *parent = nullptr);
    ~edytuj_miejsce();

private:
    Ui::edytuj_miejsce *ui;
};

#endif // EDYTUJ_MIEJSCE_H
