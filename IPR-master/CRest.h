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

    std::string candidate_login;
    std::string candidate_pwd;

    Document object0JSon;
    std::string current_json;
    std::string object_id;

    CUzytkownik* logged_user;

    void getJSon(std::string filename, bool& fileExist);
    void getJSon(bool& fileExist);
    Document getJSonAndPass(std::string filename, bool& fileExist);

    bool sprawdz_haslo(std::string providedPwd);
    bool sprawdz_login();
    std::string sprawdz_uprawnienia();
    bool sprawdz_unikalnosc(std::string unikalneID);
    void logInOpiekun();

    void dodaj_miejsce_rozgrywki();
    void dodaj_lige();
    void dodaj_dyscypline();
    void dodaj_oplate();

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

    void addGamingPlaceResult (QString comm);
    void updateGamingPlaces();

    void addLeagueResult(QString comm);
    void updateLeagues();


};
#endif // !defined(EA_ABFA0A5B_21DA_4723_85AA_6D6082654A3F__INCLUDED_)
