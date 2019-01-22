///////////////////////////////////////////////////////////
//  CGracz.h
//  Implementation of the Class CGracz
//  Created on:      15-sty-2019 02:11:55
//  Original author: Myles
///////////////////////////////////////////////////////////
#include "CUzytkownik.h"
#if !defined(EA_1481BA45_62A5_407b_A3FD_BB2DB47D39AD__INCLUDED_)
#define EA_1481BA45_62A5_407b_A3FD_BB2DB47D39AD__INCLUDED_


#include "CLiga.h"
#include "CDruzyna.h"
#include "CKarnet.h"
#include "CNagroda.h"

class CGracz : public CUzytkownik
{

public:
	CGracz();
	virtual ~CGracz();
	CLiga *m_CLiga;
	CDruzyna *m_CDruzyna;
	CKarnet *m_CKarnet;
	CNagroda *m_CNagroda;

    //json deserializuj();
    //json serializuj();

};
#endif // !defined(EA_1481BA45_62A5_407b_A3FD_BB2DB47D39AD__INCLUDED_)
