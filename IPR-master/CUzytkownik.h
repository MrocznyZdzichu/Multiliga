///////////////////////////////////////////////////////////
//  CUzytkownik.h
//  Implementation of the Class CUzytkownik
//  Created on:      15-sty-2019 02:12:01
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_4BB22C61_496F_4047_BFF2_655444117CFE__INCLUDED_)
#define EA_4BB22C61_496F_4047_BFF2_655444117CFE__INCLUDED_
#include "CSerial.h"
//#include "GCLogowanie.h"
//#include "GCEdycjaKonta.h"
#include <rapidjson-master/rapidjson-master/include/rapidjson/document.h>
class CUzytkownik : public CSerial
{
public:
	CUzytkownik();
    CUzytkownik(std::string email, std::string password);
    CUzytkownik(std::string fieldValues[]);
	virtual ~CUzytkownik();
    //GCLogowanie *m_GCLogowanie;
    //GCEdycjaKonta *m_GCEdycjaKonta;

    bool zmiana_status();
    bool sprawdz_haslo(std::string providedPwd);
    bool zmien_email(std::string n_email, std::string haslo);
    void zmien_haslo(std::string haslo, std::string n_haslo);

    rapidjson::Document pobierz_dane(std::string jsonname);
    void serializuj();
    void wyslij_siebie();
    static std::string shortenMail(std::string originMail);

    std::string getEmail();
    std::string getPwd();
    std::string getImie();
    std::string getNazwisko();

    void setImie(std::string imie);
    void setNazwisko(std::string nazwisko);
    void setEmail(std::string email);
    void setPwd(std::string pwd);

protected:
    std::string email;
    std::string haslo;
    std::string imie;
    std::string nazwisko;

};
#endif // !defined(EA_4BB22C61_496F_4047_BFF2_655444117CFE__INCLUDED_)
