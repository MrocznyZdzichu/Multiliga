#ifndef MOJE_FINANSE_H
#define MOJE_FINANSE_H

#include <QDialog>

namespace Ui {
class moje_finanse;
}

class moje_finanse : public QDialog
{
    Q_OBJECT

public:
    explicit moje_finanse(QWidget *parent = nullptr);
    ~moje_finanse();

private:
    Ui::moje_finanse *ui;
};

#endif // MOJE_FINANSE_H
