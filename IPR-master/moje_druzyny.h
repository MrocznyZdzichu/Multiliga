#ifndef MOJE_DRUZYNY_H
#define MOJE_DRUZYNY_H

#include <QDialog>

namespace Ui {
class moje_druzyny;
}

class moje_druzyny : public QDialog
{
    Q_OBJECT

public:
    explicit moje_druzyny(QWidget *parent = nullptr);
    ~moje_druzyny();

private:
    Ui::moje_druzyny *ui;
};

#endif // MOJE_DRUZYNY_H
