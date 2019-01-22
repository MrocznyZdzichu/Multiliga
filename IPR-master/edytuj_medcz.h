#ifndef EDYTUJ_MEDCZ_H
#define EDYTUJ_MEDCZ_H

#include <QDialog>

namespace Ui {
class edytuj_medcz;
}

class edytuj_medcz : public QDialog
{
    Q_OBJECT

public:
    explicit edytuj_medcz(QWidget *parent = nullptr);
    ~edytuj_medcz();

private:
    Ui::edytuj_medcz *ui;
};

#endif // EDYTUJ_MEDCZ_H
