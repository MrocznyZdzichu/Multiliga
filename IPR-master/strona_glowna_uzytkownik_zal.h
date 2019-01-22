#ifndef STRONA_GLOWNA_UZYTKOWNIK_ZAL_H
#define STRONA_GLOWNA_UZYTKOWNIK_ZAL_H

#include <QDialog>

namespace Ui {
class strona_glowna_uzytkownik_zal;
}

class strona_glowna_uzytkownik_zal : public QDialog
{
    Q_OBJECT

public:
    explicit strona_glowna_uzytkownik_zal(QWidget *parent = nullptr);
    ~strona_glowna_uzytkownik_zal();

private:
    Ui::strona_glowna_uzytkownik_zal *ui;
};

#endif // STRONA_GLOWNA_UZYTKOWNIK_ZAL_H
