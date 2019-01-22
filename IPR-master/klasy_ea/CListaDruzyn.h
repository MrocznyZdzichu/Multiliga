///////////////////////////////////////////////////////////
//  CListaDruzyn.h
//  Implementation of the Class CListaDruzyn
//  Created on:      15-sty-2019 02:11:56
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_3BB53864_078D_45b8_AA00_79DF938CF982__INCLUDED_)
#define EA_3BB53864_078D_45b8_AA00_79DF938CF982__INCLUDED_
#include <list>
#include "CDruzyna.h"

class CListaDruzyn
{

public:
	CListaDruzyn();
	virtual ~CListaDruzyn();
	CDruzyna *m_CDruzyna;

    std::string druzyny_do_wyswietlenia();
    //void odbierz_druzyny(json dane);
	void zwroc_druzyne(int indeks);

private:
	std::list<CDruzyna*> lista;

};
#endif // !defined(EA_3BB53864_078D_45b8_AA00_79DF938CF982__INCLUDED_)
