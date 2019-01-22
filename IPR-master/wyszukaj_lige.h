#ifndef WYSZUKAJ_LIGE_H
#define WYSZUKAJ_LIGE_H

#include <QDialog>

namespace Ui {
class wyszukaj_lige;
}

class wyszukaj_lige : public QDialog
{
    Q_OBJECT

public:
    explicit wyszukaj_lige(QWidget *parent = nullptr);
    ~wyszukaj_lige();

private:
    Ui::wyszukaj_lige *ui;
};

#endif // WYSZUKAJ_LIGE_H
