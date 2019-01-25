#include <cstring>
#include <QApplication>
#include <QObject>
#include "logowanie.h"
#include "strona_glowna_opiekun.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    logowanie* w;
    w = new logowanie;
    strona_glowna_opiekun w1;
    QObject::connect(w, SIGNAL(destroyed()),&w1,SLOT(open()));
    w->show();
    return a.exec();
}
