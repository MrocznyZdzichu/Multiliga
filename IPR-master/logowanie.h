#ifndef LOGOWANIE_H
#define LOGOWANIE_H

#include <QMainWindow>

namespace Ui {
class logowanie;
}

class logowanie : public QMainWindow
{
    Q_OBJECT

public:
    explicit logowanie(QWidget *parent = nullptr);
    ~logowanie();

private slots:
    void on_pushButton_clicked();
    void wrongEmail();
    void dane_niepoprawne();

private:
    Ui::logowanie *ui;
};

#endif // LOGOWANIE_H
