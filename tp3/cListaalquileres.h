#pragma once
#include "cLista.h"
#include "cAlquiler.h"
#include "cMotocicleta.h"
#include "cAutomovil.h"
#include "cCamioneta.h"
#include "cTrafics.h"

class cListaalquileres :
	public cLista<cAlquiler>
{
public:
	cListaalquileres(unsigned int tam=NMAX);
	~cListaalquileres();
	void listarXtipo();
};

