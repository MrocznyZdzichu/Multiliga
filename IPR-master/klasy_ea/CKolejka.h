///////////////////////////////////////////////////////////
//  CKolejka.h
//  Implementation of the Class CKolejka
//  Created on:      15-sty-2019 02:11:55
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_42E37184_D84E_414a_907A_D083BA6BC3BC__INCLUDED_)
#define EA_42E37184_D84E_414a_907A_D083BA6BC3BC__INCLUDED_

#include "CMecz.h"
#include "CZasady.h"

class CKolejka
{

public:
	CKolejka();
	virtual ~CKolejka();
	CMecz *m_CMecz;
	CZasady *m_CZasady;

};
#endif // !defined(EA_42E37184_D84E_414a_907A_D083BA6BC3BC__INCLUDED_)
