#ifndef WYSZUKAJ_MIASTO_H
#define WYSZUKAJ_MIASTO_H

#include <QDialog>

namespace Ui {
class wyszukaj_miasto;
}

class wyszukaj_miasto : public QDialog
{
    Q_OBJECT

public:
    explicit wyszukaj_miasto(QWidget *parent = nullptr);
    ~wyszukaj_miasto();

private:
    Ui::wyszukaj_miasto *ui;
};

#endif // WYSZUKAJ_MIASTO_H
