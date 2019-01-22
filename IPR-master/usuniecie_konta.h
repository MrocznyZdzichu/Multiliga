#ifndef USUNIECIE_KONTA_H
#define USUNIECIE_KONTA_H

#include <QDialog>

namespace Ui {
class usuniecie_konta;
}

class usuniecie_konta : public QDialog
{
    Q_OBJECT

public:
    explicit usuniecie_konta(QWidget *parent = nullptr);
    ~usuniecie_konta();

private:
    Ui::usuniecie_konta *ui;
};

#endif // USUNIECIE_KONTA_H
