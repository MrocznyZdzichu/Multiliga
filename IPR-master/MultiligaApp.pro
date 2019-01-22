#-------------------------------------------------
#
# Project created by QtCreator 2019-01-07T21:01:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MultiligaApp
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        logowanie.cpp \
    przypomnienie_hasla.cpp \
    strona_glowna_uzytkownik_zal.cpp \
    edycja_konta.cpp \
    zmiana_hasla.cpp \
    usuniecie_konta.cpp \
    strona_glowna_uzytkownik_z_wyszukiwaniem.cpp \
    wyszukiwanie.cpp \
    wyszukaj_gracza.cpp \
    wyszukaj_druzyne.cpp \
    wyszukaj_lige.cpp \
    wyszukaj_dyscypline.cpp \
    wyszukaj_miasto.cpp \
    profil_gracza.cpp \
    profil_druzyny.cpp \
    profil_ligi.cpp \
    profil_miasta.cpp \
    profil_dyscypliny.cpp \
    profil_meczu.cpp \
    profil_kolejki.cpp \
    profil_miejsca.cpp \
    strona_glowna_gracz.cpp \
    moje_ligi_gracz.cpp \
    moje_druzyny.cpp \
    moje_finanse.cpp \
    edycja_konta_gracz.cpp \
    zakladanie_druzyny.cpp \
    strona_glowna_opiekun.cpp \
    ogloszenie.cpp \
    dodaj_ogloszenie.cpp \
    zarzadzaj_ligami.cpp \
    zarzadzaj_miejscami.cpp \
    dodaj_konto.cpp \
    edytuj_ogloszenie.cpp \
    liga_dodaj.cpp \
    liga_usun.cpp \
    liga_edytuj.cpp \
    gracz_edytuj.cpp \
    gracz_usun.cpp \
    druzyna_edytuj.cpp \
    druzyna_usun.cpp \
    druzuna_dodaj.cpp \
    gracz_dodaj.cpp \
    dodaj_konto_druzyne.cpp \
    gracz_dodaj_nagrode.cpp \
    dodaj_miejsce.cpp \
    edytuj_miejsce.cpp \
    usun_miejsce.cpp \
    kolejka_dodaj.cpp \
    kolejka_usun.cpp \
    kolejka_edytuj.cpp \
    dodaj_mecz.cpp \
    usun_mecz.cpp \
    edytuj_medcz.cpp \
    CZasady.cpp \
    CZaproszenieLiga.cpp \
    CZaproszenieDruzyna.cpp \
    CWniosekLiga.cpp \
    CWniosekDruzyna.cpp \
    CUzytkownik.cpp \
    CSerial.cpp \
    CRest.cpp \
    CPodmecz.cpp \
    COpiekun.cpp \
    COgloszenie.cpp \
    CNagroda.cpp \
    CMiejsce.cpp \
    CMiasto.cpp \
    CMecz.cpp \
    CListaOgloszen.cpp \
    CListaMiejsc.cpp \
    CListaLig.cpp \
    CListaGraczy.cpp \
    CListaDyscyplin.cpp \
    CListaDruzyn.cpp \
    CLiga.cpp \
    CKolejka.cpp \
    CKarnet.cpp \
    CGracz.cpp \
    CDyscyplina.cpp \
    CDruzyna.cpp \
    CListaMiast.cpp \
    CListaOpiekonow.cpp \
    COplaty.cpp

HEADERS += \
        logowanie.h \
    przypomnienie_hasla.h \
    strona_glowna_uzytkownik_zal.h \
    edycja_konta.h \
    zmiana_hasla.h \
    usuniecie_konta.h \
    strona_glowna_uzytkownik_z_wyszukiwaniem.h \
    wyszukiwanie.h \
    wyszukaj_gracza.h \
    wyszukaj_druzyne.h \
    wyszukaj_lige.h \
    wyszukaj_dyscypline.h \
    wyszukaj_miasto.h \
    profil_gracza.h \
    profil_druzyny.h \
    profil_ligi.h \
    profil_miasta.h \
    profil_dyscypliny.h \
    profil_meczu.h \
    profil_kolejki.h \
    profil_miejsca.h \
    strona_glowna_gracz.h \
    moje_ligi_gracz.h \
    moje_druzyny.h \
    moje_finanse.h \
    edycja_konta_gracz.h \
    zakladanie_druzyny.h \
    strona_glowna_opiekun.h \
    ogloszenie.h \
    dodaj_ogloszenie.h \
    zarzadzaj_ligami.h \
    zarzadzaj_miejscami.h \
    dodaj_konto.h \
    edytuj_ogloszenie.h \
    liga_dodaj.h \
    liga_usun.h \
    liga_edytuj.h \
    gracz_edytuj.h \
    gracz_usun.h \
    druzyna_edytuj.h \
    druzyna_usun.h \
    druzuna_dodaj.h \
    gracz_dodaj.h \
    dodaj_konto_druzyne.h \
    gracz_dodaj_nagrode.h \
    dodaj_miejsce.h \
    edytuj_miejsce.h \
    usun_miejsce.h \
    kolejka_dodaj.h \
    kolejka_usun.h \
    kolejka_edytuj.h \
    dodaj_mecz.h \
    usun_mecz.h \
    edytuj_medcz.h \
    CZasady.h \
    CZaproszenieLiga.h \
    CZaproszenieDruzyna.h \
    CWniosekLiga.h \
    CWniosekDruzyna.h \
    CUzytkownik.h \
    CSerial.h \
    CRest.h \
    CPodmecz.h \
    COpiekun.h \
    COgloszenie.h \
    CNagroda.h \
    CMiejsce.h \
    CMiasto.h \
    CMecz.h \
    CListaOgloszen.h \
    CListaMiejsc.h \
    CListaLig.h \
    CListaGraczy.h \
    CListaDyscyplin.h \
    CListaDruzyn.h \
    CLiga.h \
    CKolejka.h \
    CKarnet.h \
    CGracz.h \
    CDyscyplina.h \
    CDruzyna.h \
    CListaMiast.h \
    CListaOpiekonow.h \
    COplaty.h

FORMS += \
        logowanie.ui \
    przypomnienie_hasla.ui \
    strona_glowna_uzytkownik_zal.ui \
    edycja_konta.ui \
    zmiana_hasla.ui \
    usuniecie_konta.ui \
    strona_glowna_uzytkownik_z_wyszukiwaniem.ui \
    wyszukiwanie.ui \
    wyszukaj_gracza.ui \
    wyszukaj_druzyne.ui \
    wyszukaj_lige.ui \
    wyszukaj_dyscypline.ui \
    wyszukaj_miasto.ui \
    profil_gracza.ui \
    profil_druzyny.ui \
    profil_ligi.ui \
    profil_miasta.ui \
    profil_dyscypliny.ui \
    profil_meczu.ui \
    profil_kolejki.ui \
    profil_miejsca.ui \
    strona_glowna_gracz.ui \
    moje_ligi_gracz.ui \
    moje_druzyny.ui \
    moje_finanse.ui \
    edycja_konta_gracz.ui \
    zakladanie_druzyny.ui \
    strona_glowna_opiekun.ui \
    ogloszenie.ui \
    dodaj_ogloszenie.ui \
    zarzadzaj_ligami.ui \
    zarzadzaj_miejscami.ui \
    dodaj_konto.ui \
    edytuj_ogloszenie.ui \
    liga_dodaj.ui \
    liga_usun.ui \
    liga_edytuj.ui \
    gracz_edytuj.ui \
    gracz_usun.ui \
    druzyna_edytuj.ui \
    druzyna_usun.ui \
    druzuna_dodaj.ui \
    gracz_dodaj.ui \
    dodaj_konto_druzyne.ui \
    gracz_dodaj_nagrode.ui \
    dodaj_miejsce.ui \
    edytuj_miejsce.ui \
    usun_miejsce.ui \
    kolejka_dodaj.ui \
    kolejka_usun.ui \
    kolejka_edytuj.ui \
    dodaj_mecz.ui \
    usun_mecz.ui \
    edytuj_medcz.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
