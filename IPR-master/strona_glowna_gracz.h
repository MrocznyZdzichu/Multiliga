#ifndef STRONA_GLOWNA_GRACZ_H
#define STRONA_GLOWNA_GRACZ_H

#include <QDialog>

namespace Ui {
class strona_glowna_gracz;
}

class strona_glowna_gracz : public QDialog
{
    Q_OBJECT

public:
    explicit strona_glowna_gracz(QWidget *parent = nullptr);
    ~strona_glowna_gracz();

private:
    Ui::strona_glowna_gracz *ui;
};

#endif // STRONA_GLOWNA_GRACZ_H
