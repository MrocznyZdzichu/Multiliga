///////////////////////////////////////////////////////////
//  CListaMiejsc.h
//  Implementation of the Class CListaMiejsc
//  Created on:      15-sty-2019 02:11:58
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_777C25B8_A7CD_4ffe_A8A7_AC3009EA9D56__INCLUDED_)
#define EA_777C25B8_A7CD_4ffe_A8A7_AC3009EA9D56__INCLUDED_

#include "CMiejsce.h"
#include <list>
class CListaMiejsc
{

public:
	CListaMiejsc();
	virtual ~CListaMiejsc();
	CMiejsce *m_CMiejsce;

private:
	std::list<CMiejsce*> lista;

};
#endif // !defined(EA_777C25B8_A7CD_4ffe_A8A7_AC3009EA9D56__INCLUDED_)
