///////////////////////////////////////////////////////////
//  CRest.h
//  Implementation of the Class CRest
//  Created on:      15-sty-2019 02:12:00
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_ABFA0A5B_21DA_4723_85AA_6D6082654A3F__INCLUDED_)
#define EA_ABFA0A5B_21DA_4723_85AA_6D6082654A3F__INCLUDED_

#include "rapidjson-master/rapidjson-master/include/rapidjson/document.h"
#include "rapidjson-master/rapidjson-master/include/rapidjson/filereadstream.h"
#include <cstdio>
#include <vector>
#include <rapidjson-master/rapidjson-master/include/rapidjson/document.h>
#include <QObject>

#include "CUzytkownik.h"

using namespace rapidjson;

class CListaDruzyn;
class CRest : public QObject
{
    Q_OBJECT
public:
    static CRest & getRest()
    {
        static CRest rest;
        return rest;
    }
	virtual ~CRest();

    std::string podany_mail;
    std::string podane_haslo;

    Document object0JSon;
    std::string current_json;
    std::string object_id;
    CUzytkownik* zalogowany_uzytkownik;
    void getJSon(std::string filename, bool& fileExist);
    void getJSon(bool& fileExist);
    Document wez_json_i_przekaz(std::string filename, bool& fileExist);

    bool sprawdz_haslo(std::string providedPwd);
    bool sprawdz_login();
    std::string sprawdz_uprawnienia();
    bool sprawdz_unikalnosc(std::string unikalneID);
    void logInOpiekun();

    void dodaj_miejsce_rozgrywki();
    void dodaj_lige();
    void dodaj_dyscypline();
    void dodaj_oplate();
    void dodaj_zaproszenie_do_ligi_druzynowej();

    std::string sprawdz_uzytkownika(bool& czyHasloPoprawne);
    Document odbierz_druzyny();

private:
    CRest();
    CRest(const CRest& );

    void dodaj_do_listy_miejsc(std::fstream &listamiejsc);
    void dodaj_plik_z_miejscem(std::fstream& plik_z_miejscem);

    void dodaj_do_listy_lig(std::fstream& listalig);
    void dodaj_plik_z_liga(std::fstream& plik_z_liga);

signals:
    void wrongLogin ();
    void wrongPassword(QString comm);
    void fileNotFound(QString comm);

    void aktualizuj_zarzadzaj_miejscami();
    void aktualizuj_ligi();


};
#endif // !defined(EA_ABFA0A5B_21DA_4723_85AA_6D6082654A3F__INCLUDED_)
