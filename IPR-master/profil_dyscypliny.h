#ifndef PROFIL_DYSCYPLINY_H
#define PROFIL_DYSCYPLINY_H

#include <QDialog>

namespace Ui {
class profil_dyscypliny;
}

class profil_dyscypliny : public QDialog
{
    Q_OBJECT

public:
    explicit profil_dyscypliny(QWidget *parent = nullptr);
    ~profil_dyscypliny();

private:
    Ui::profil_dyscypliny *ui;
};

#endif // PROFIL_DYSCYPLINY_H
