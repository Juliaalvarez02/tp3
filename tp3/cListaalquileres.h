#pragma once
#include "cLista.h"
#include "cAlquiler.h"
//hola
class cListaalquileres :
	public cLista<cAlquiler>
{
public:
	cListaalquileres();
	~cListaalquileres();
};

