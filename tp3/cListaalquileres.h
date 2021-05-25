#pragma once
#include "cLista.h"
#include "cAlquiler.h"

class cListaalquileres :
	public cLista<cAlquiler>
{
public:
	cListaalquileres(unsigned int tam=NMAX);
	~cListaalquileres();
	void listarXtipo();
};

