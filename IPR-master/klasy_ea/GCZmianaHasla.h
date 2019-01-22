///////////////////////////////////////////////////////////
//  GCZmianaHasla.h
//  Implementation of the Class GCZmianaHasla
//  Created on:      15-sty-2019 02:12:10
//  Original author: Myles
///////////////////////////////////////////////////////////

#if !defined(EA_1DC67A57_7843_4b92_80A6_8E9D5239B5A2__INCLUDED_)
#define EA_1DC67A57_7843_4b92_80A6_8E9D5239B5A2__INCLUDED_

#include "CUzytkownik.h"

class GCZmianaHasla
{

public:
	GCZmianaHasla();
	virtual ~GCZmianaHasla();
	CUzytkownik *m_CUzytkownik;

	void zmiana_niepoprawna();
	void zmiana_poprawna();

};
#endif // !defined(EA_1DC67A57_7843_4b92_80A6_8E9D5239B5A2__INCLUDED_)
