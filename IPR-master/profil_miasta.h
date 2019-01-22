#ifndef PROFIL_MIASTA_H
#define PROFIL_MIASTA_H

#include <QDialog>

namespace Ui {
class profil_miasta;
}

class profil_miasta : public QDialog
{
    Q_OBJECT

public:
    explicit profil_miasta(QWidget *parent = nullptr);
    ~profil_miasta();

private:
    Ui::profil_miasta *ui;
};

#endif // PROFIL_MIASTA_H
