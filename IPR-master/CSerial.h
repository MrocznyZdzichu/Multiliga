///////////////////////////////////////////////////////////
//  CSerial.h
//  Implementation of the Class CSerial
//  Created on:      15-sty-2019 02:12:01
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_0546D472_9014_41d6_AC39_9C188E0D7FE6__INCLUDED_)
#define EA_0546D472_9014_41d6_AC39_9C188E0D7FE6__INCLUDED_
#include <cstdlib>
#include <string>
#include <rapidjson-master/rapidjson-master/include/rapidjson/document.h>

class CSerial
{

public:
	CSerial();
	virtual ~CSerial();
    std::string json_do_wyslania;

    virtual rapidjson::Document pobierz_dane(std::string jsonname) = 0;
    virtual void serializuj() = 0;
    virtual void wyslij_siebie() = 0;

};
#endif // !defined(EA_0546D472_9014_41d6_AC39_9C188E0D7FE6__INCLUDED_)
