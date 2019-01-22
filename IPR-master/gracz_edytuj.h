#ifndef GRACZ_EDYTUJ_H
#define GRACZ_EDYTUJ_H

#include <QDialog>

namespace Ui {
class gracz_edytuj;
}

class gracz_edytuj : public QDialog
{
    Q_OBJECT

public:
    explicit gracz_edytuj(QWidget *parent = nullptr);
    ~gracz_edytuj();

private:
    Ui::gracz_edytuj *ui;
};

#endif // GRACZ_EDYTUJ_H
