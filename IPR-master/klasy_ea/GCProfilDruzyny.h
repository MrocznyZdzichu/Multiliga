///////////////////////////////////////////////////////////
//  GCProfilDruzyny.h
//  Implementation of the Class GCProfilDruzyny
//  Created on:      15-sty-2019 02:12:06
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_4A7E7ED6_C6AC_4861_AA48_CC78498EA380__INCLUDED_)
#define EA_4A7E7ED6_C6AC_4861_AA48_CC78498EA380__INCLUDED_

#include "CDruzyna.h"
#include "CZaproszenieLiga.h"

class GCProfilDruzyny
{

public:
	GCProfilDruzyny();
	virtual ~GCProfilDruzyny();
	CDruzyna *m_CDruzyna;
	CZaproszenieLiga *m_CZaproszenieLiga;

};
#endif // !defined(EA_4A7E7ED6_C6AC_4861_AA48_CC78498EA380__INCLUDED_)
