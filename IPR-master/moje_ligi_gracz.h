#ifndef MOJE_LIGI_GRACZ_H
#define MOJE_LIGI_GRACZ_H

#include <QDialog>

namespace Ui {
class moje_ligi_gracz;
}

class moje_ligi_gracz : public QDialog
{
    Q_OBJECT

public:
    explicit moje_ligi_gracz(QWidget *parent = nullptr);
    ~moje_ligi_gracz();

private:
    Ui::moje_ligi_gracz *ui;
};

#endif // MOJE_LIGI_GRACZ_H
