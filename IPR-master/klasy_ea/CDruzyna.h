///////////////////////////////////////////////////////////
//  CDruzyna.h
//  Implementation of the Class CDruzyna
//  Created on:      15-sty-2019 02:11:54
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_00B30A6A_1E43_4068_99AB_5DD93131D379__INCLUDED_)
#define EA_00B30A6A_1E43_4068_99AB_5DD93131D379__INCLUDED_
#define boolean bool
#include "CSerial.h"

class CDruzyna : public CSerial
{

public:
	CDruzyna();
	virtual ~CDruzyna();
    std::string nazwa;

	boolean czy_nalezy_do_ligi();
    bool czy_nazwa_unikalna();
    //json deserializuj();
    //json serializuj();

};
#endif // !defined(EA_00B30A6A_1E43_4068_99AB_5DD93131D379__INCLUDED_)
