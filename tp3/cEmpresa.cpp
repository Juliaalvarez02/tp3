#include "cEmpresa.h"

cEmpresa::cEmpresa()
{
	listaclientes = new cLista<cCliente>();
	listavehiculos = new cLista<cVehiculo>();
	lista_alquiler = new cListaalquileres();
}

cEmpresa::~cEmpresa()
{
	if (listaclientes != NULL) {
		delete listaclientes;
	}
	if (listavehiculos != NULL) {
		delete listavehiculos;
	}
}
