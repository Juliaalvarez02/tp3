#pragma once
#include "cListaalquileres.h"
#include "cCliente.h"
#include "cVehiculo.h"

class cEmpresa
{//intento
	cLista<cCliente>*listaclientes;
	cLista<cVehiculo>*listavehiculos;

public:
	cEmpresa();
	~cEmpresa();
};

