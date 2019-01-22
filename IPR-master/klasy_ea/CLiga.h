///////////////////////////////////////////////////////////
//  CLiga.h
//  Implementation of the Class CLiga
//  Created on:      15-sty-2019 02:11:56
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_8AD134FC_4766_4871_A25E_5B83D4419BB6__INCLUDED_)
#define EA_8AD134FC_4766_4871_A25E_5B83D4419BB6__INCLUDED_

#include "CKolejka.h"
#include "COpiekun.h"
#include "CZasady.h"
#include "CDyscyplina.h"

class CLiga : public CSerial
{

public:
	CLiga();
	virtual ~CLiga();
	CKolejka *m_CKolejka;
	COpiekun *m_COpiekun;
	CZasady *m_CZasady;
	CDyscyplina *m_CDyscyplina;

    //json deserializuj();
    //json serializuj();

};
#endif // !defined(EA_8AD134FC_4766_4871_A25E_5B83D4419BB6__INCLUDED_)
