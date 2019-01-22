#ifndef WYSZUKAJ_DYSCYPLINE_H
#define WYSZUKAJ_DYSCYPLINE_H

#include <QDialog>

namespace Ui {
class wyszukaj_dyscypline;
}

class wyszukaj_dyscypline : public QDialog
{
    Q_OBJECT

public:
    explicit wyszukaj_dyscypline(QWidget *parent = nullptr);
    ~wyszukaj_dyscypline();

private:
    Ui::wyszukaj_dyscypline *ui;
};

#endif // WYSZUKAJ_DYSCYPLINE_H
