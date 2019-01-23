///////////////////////////////////////////////////////////
//  CMiejsce.h
//  Implementation of the Class CMiejsce
//  Created on:      15-sty-2019 02:11:59
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_4A010C51_21DE_4c50_A311_11A7EF36625D__INCLUDED_)
#define EA_4A010C51_21DE_4c50_A311_11A7EF36625D__INCLUDED_
#include <deque>
#include "CSerial.h"

using namespace rapidjson;

class CMiejsce : public CSerial
{

public:
	CMiejsce();
    CMiejsce(std::string nazwa_miejsca, std::string miasto,
             std::string dyscyplina, float oplata);
	virtual ~CMiejsce();

    Document miejsceDOM;
    void serializuj();
    Document deserializuj(std::string jsonname);
    void wyslij_siebie();

    std::string getName();
    std::string getTown();

private:
    std::string nazwa_miejsca;
    std::string miasto;
    std::deque<std::string> dyscypliny;
    std::deque<float> oplaty;

};
#endif // !defined(EA_4A010C51_21DE_4c50_A311_11A7EF36625D__INCLUDED_)
