#pragma once
#include "cListaalquileres.h"
#include "cCliente.h"
#include "cVehiculo.h"

class cEmpresa
{
	cLista<cCliente>*listaclientes;
	cLista<cVehiculo>*listavehiculos;
	cListaalquileres* lista_alquiler;
public:
	cEmpresa();
	~cEmpresa();
};

