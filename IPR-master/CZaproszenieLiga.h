///////////////////////////////////////////////////////////
//  CZaproszenieLiga.h
//  Implementation of the Class CZaproszenieLiga
//  Created on:      15-sty-2019 02:12:02
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_6E1E4299_28D7_47db_8AEC_603A5FABB6BA__INCLUDED_)
#define EA_6E1E4299_28D7_47db_8AEC_603A5FABB6BA__INCLUDED_

#include "CSerial.h"
#include "CLiga.h"
#include "CDruzyna.h"
#include <QDateTime>

class CZaproszenieLiga : public CSerial
{

public:
    CZaproszenieLiga(std::string nazwaDruzyny, std::string nazwaLigi);
	virtual ~CZaproszenieLiga();
    void serializuj();
    void wyslij_siebie();
    Document pobierz_dane(std::string jsonname);

private:
    QDateTime data_utworzenia;
    std::string nazwa_druzyny;
    std::string nazwa_ligi;

};
#endif // !defined(EA_6E1E4299_28D7_47db_8AEC_603A5FABB6BA__INCLUDED_)
