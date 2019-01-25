///////////////////////////////////////////////////////////
//  COpiekun.h
//  Implementation of the Class COpiekun
//  Created on:      15-sty-2019 02:12:00
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_794E56BE_B49B_4c50_BB26_051473D762EF__INCLUDED_)
#define EA_794E56BE_B49B_4c50_BB26_051473D762EF__INCLUDED_

#include <rapidjson-master/rapidjson-master/include/rapidjson/document.h>
#include "CUzytkownik.h"

using namespace rapidjson;
class COpiekun : public CUzytkownik
{

public:
	COpiekun();
    COpiekun(std::string imie, std::string nazwisko, std::string email, std::string haslo);
	virtual ~COpiekun();

    Document pobierz_dane(std::string jsonname);
    void wyslij_siebie();
    void serializuj();


};
#endif // !defined(EA_794E56BE_B49B_4c50_BB26_051473D762EF__INCLUDED_)
