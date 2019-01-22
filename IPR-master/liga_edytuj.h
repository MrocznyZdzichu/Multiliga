#ifndef LIGA_EDYTUJ_H
#define LIGA_EDYTUJ_H

#include <QDialog>

namespace Ui {
class liga_edytuj;
}

class liga_edytuj : public QDialog
{
    Q_OBJECT

public:
    explicit liga_edytuj(QWidget *parent = nullptr);
    ~liga_edytuj();

private:
    Ui::liga_edytuj *ui;
};

#endif // LIGA_EDYTUJ_H
