#include "cListaalquileres.h"

cListaalquileres::cListaalquileres(unsigned int tam):cLista(tam)
{

}

cListaalquileres::~cListaalquileres()
{
}

void cListaalquileres::listarXtipo()
{
	cLista<cVehiculo>* motos;
	int cantmotos = 0;

	for (int i = 0; i < CA; i++) {
		cMotocicleta* motocicleta = dynamic_cast<cMotocicleta*>(lista[i]->getVehiculo());
		if (motocicleta != NULL) {
			motos[CA] = lista[i];
		}
	}
}




