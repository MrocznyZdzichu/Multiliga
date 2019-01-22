///////////////////////////////////////////////////////////
//  COgloszenie.h
//  Implementation of the Class COgloszenie
//  Created on:      15-sty-2019 02:12:00
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_1E20A727_7363_425d_BE3F_6B2B7845DB0D__INCLUDED_)
#define EA_1E20A727_7363_425d_BE3F_6B2B7845DB0D__INCLUDED_

#include "CSerial.h"

class COgloszenie : public CSerial
{

public:
	COgloszenie();
	virtual ~COgloszenie();

    //json deserializuj();
    //json serializuj();
    void ustaw_tresc(std::string n_tresc);

};
#endif // !defined(EA_1E20A727_7363_425d_BE3F_6B2B7845DB0D__INCLUDED_)
