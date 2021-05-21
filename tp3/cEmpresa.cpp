#include "cEmpresa.h"

cEmpresa::cEmpresa()
{
	for (int i = 0; i < listaclientes->getTam(); i++) {
		listaclientes[i] = NULL;
	}
	for (int i = 0; i < listavehiculos->getTam(); i++) {
		listavehiculos[i] = NULL;
	}
}

cEmpresa::~cEmpresa()
{
	if (listaclientes != NULL) {
		for (int i = 0; i < listaclientes->getCA(); i++) {
			if (&listaclientes[i] != NULL) {
				delete& listaclientes[i];
			}
		}
		delete[] listaclientes;
	}
		if (listavehiculos != NULL) {
			for (int i = 0; i < listavehiculos->getCA(); i++) {
				if (&listavehiculos[i] != NULL) {
					delete& listavehiculos[i];
				}
			}
			delete[] listavehiculos;
		}
}
