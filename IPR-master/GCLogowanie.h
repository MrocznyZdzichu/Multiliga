///////////////////////////////////////////////////////////
//  GCLogowanie.h
//  Implementation of the Class GCLogowanie
//  Created on:      15-sty-2019 02:12:05
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_046947A0_D444_4fb5_93A9_2297798375F9__INCLUDED_)
#define EA_046947A0_D444_4fb5_93A9_2297798375F9__INCLUDED_

#include "GCMenuGlowne.h"
#include "CRest.h"

class GCLogowanie
{

public:
	GCLogowanie();
	virtual ~GCLogowanie();
	GCMenuGlowne *m_GCMenuGlowne;
	CRest *m_CRest;

	void dane_niepoprawne();
    bool dane_poprawne();

};
#endif // !defined(EA_046947A0_D444_4fb5_93A9_2297798375F9__INCLUDED_)
