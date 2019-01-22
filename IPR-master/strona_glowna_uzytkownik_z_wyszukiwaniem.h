#ifndef STRONA_GLOWNA_UZYTKOWNIK_Z_WYSZUKIWANIEM_H
#define STRONA_GLOWNA_UZYTKOWNIK_Z_WYSZUKIWANIEM_H

#include <QDialog>

namespace Ui {
class strona_glowna_uzytkownik_z_wyszukiwaniem;
}

class strona_glowna_uzytkownik_z_wyszukiwaniem : public QDialog
{
    Q_OBJECT

public:
    explicit strona_glowna_uzytkownik_z_wyszukiwaniem(QWidget *parent = nullptr);
    ~strona_glowna_uzytkownik_z_wyszukiwaniem();

private:
    Ui::strona_glowna_uzytkownik_z_wyszukiwaniem *ui;
};

#endif // STRONA_GLOWNA_UZYTKOWNIK_Z_WYSZUKIWANIEM_H
