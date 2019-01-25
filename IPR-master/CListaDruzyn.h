///////////////////////////////////////////////////////////
//  CListaDruzyn.h
//  Implementation of the Class CListaDruzyn
//  Created on:      15-sty-2019 02:11:56
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_3BB53864_078D_45b8_AA00_79DF938CF982__INCLUDED_)
#define EA_3BB53864_078D_45b8_AA00_79DF938CF982__INCLUDED_
#include <vector>
#include <rapidjson-master/rapidjson-master/include/rapidjson/document.h>

#include "CDruzyna.h"

using namespace rapidjson;
class CListaDruzyn : public CSerial
{

public:
    CListaDruzyn();
    CListaDruzyn(std::string nazwaDruzyny, std::string nazwaLigi,
                 std::string nazwaMiasta, std::string nazwaDyscypliny);
	virtual ~CListaDruzyn();

    CDruzyna* druzynaSzukana;
    Document listaDruzynDOM;

    std::vector<int> indeksySzukanychDruzyn;

    bool lista_gotowa();
    void wybierzDruzyny();

    void serializuj();
    void wyslij_siebie();
    Document pobierz_dane(std::string jsonname);
    CDruzyna* zwroc_druzyne(std::string nazwa_druzyny);

    void serializuj_szukane();
    Document deserializujSzukane(std::string jsonname);
private:


};
#endif // !defined(EA_3BB53864_078D_45b8_AA00_79DF938CF982__INCLUDED_)
