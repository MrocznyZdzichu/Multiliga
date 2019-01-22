#ifndef PRZYPOMNIENIE_HASLA_H
#define PRZYPOMNIENIE_HASLA_H

#include <QDialog>

namespace Ui {
class przypomnienie_hasla;
}

class przypomnienie_hasla : public QDialog
{
    Q_OBJECT

public:
    explicit przypomnienie_hasla(QWidget *parent = nullptr);
    ~przypomnienie_hasla();

private:
    Ui::przypomnienie_hasla *ui;
};

#endif // PRZYPOMNIENIE_HASLA_H
