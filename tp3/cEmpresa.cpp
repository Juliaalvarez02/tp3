#include "cEmpresa.h"

cEmpresa::cEmpresa()
{
	for (int i = 0; i < listaclientes->getCA(); i++) {
		listaclientes[i] = NULL;
	}
	for (int i = 0; i < listavehiculos->getCA(); i++) {
		listavehiculos[i] = NULL;
	}
}

cEmpresa::~cEmpresa()
{
	for (int i = 0; i < listaclientes->getCA; i++) {
		delete listaclientes;
	}
}
