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

class CUzytkownik : public CSerial
{

public:
	CUzytkownik();
	virtual ~CUzytkownik();
    //GCLogowanie *m_GCLogowanie;
    //GCEdycjaKonta *m_GCEdycjaKonta;

    //json deserializuj();
    //json serializuj();
    bool sprawdz_haslo(std::string haslo);
    bool zmiana_status();
    bool zmien_email(std::string n_email, std::string haslo);
    void zmien_haslo(std::string haslo, std::string n_haslo);

private:
    std::string email;
    std::string haslo;
    std::string imie;
    std::string nazwisko;

};
#endif // !defined(EA_4BB22C61_496F_4047_BFF2_655444117CFE__INCLUDED_)
