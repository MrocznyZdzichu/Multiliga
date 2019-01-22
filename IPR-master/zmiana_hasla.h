#ifndef ZMIANA_HASLA_H
#define ZMIANA_HASLA_H

#include <QDialog>

namespace Ui {
class zmiana_hasla;
}

class zmiana_hasla : public QDialog
{
    Q_OBJECT

public:
    explicit zmiana_hasla(QWidget *parent = nullptr);
    ~zmiana_hasla();

private:
    Ui::zmiana_hasla *ui;
};

#endif // ZMIANA_HASLA_H
