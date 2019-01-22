#ifndef PROFIL_MECZU_H
#define PROFIL_MECZU_H

#include <QDialog>

namespace Ui {
class profil_meczu;
}

class profil_meczu : public QDialog
{
    Q_OBJECT

public:
    explicit profil_meczu(QWidget *parent = nullptr);
    ~profil_meczu();

private:
    Ui::profil_meczu *ui;
};

#endif // PROFIL_MECZU_H
