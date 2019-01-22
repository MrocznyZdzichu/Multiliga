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
//#include "GCWyszukiwanieGracza.h"
//#include "GCWyszukiwanieMiasta.h"
//#include "GCWyszukiwanieLigi.h"
//#include "GCWyszukiwanieDruzyny.h"
#include <vector>
class CUzytkownik;
class CRest
{

public:
	CRest();
	virtual ~CRest();

    void odbierz_obiekt(std::string json_filename, std::vector<CUzytkownik*>& system_users);
    bool sprawdz_haslo(std::string p_haslo);
    void sprawdz_unikalnosc(std::string pole, std::string wartosc);
    //void wyslij_obiekt(json tx);

};
#endif // !defined(EA_ABFA0A5B_21DA_4723_85AA_6D6082654A3F__INCLUDED_)
