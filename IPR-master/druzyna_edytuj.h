#ifndef DRUZYNA_EDYTUJ_H
#define DRUZYNA_EDYTUJ_H

#include <QDialog>

namespace Ui {
class druzyna_edytuj;
}

class druzyna_edytuj : public QDialog
{
    Q_OBJECT

public:
    explicit druzyna_edytuj(QWidget *parent = nullptr);
    ~druzyna_edytuj();

private:
    Ui::druzyna_edytuj *ui;
};

#endif // DRUZYNA_EDYTUJ_H
