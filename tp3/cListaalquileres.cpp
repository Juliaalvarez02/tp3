#include "cListaalquileres.h"

cListaalquileres::cListaalquileres(unsigned int tam):cLista(tam)
{

}

cListaalquileres::~cListaalquileres()
{
}

void cListaalquileres::listarXtipo(vehiculos vehiculoAImprimir)
{
	cLista<cMotocicleta>* motos;
	cLista<cAutomovil>* autos;
	cLista<cTrafics>* trafics;
	cLista<cCamioneta>* camionetas;

	for (int i = 0; i < CA; i++) {
		motos[i] = NULL;
		autos[i] = NULL;
		trafics[i] = NULL;
		camionetas[i] = NULL;
	}

	switch (vehiculoAImprimir) 
	{
	case camioneta:
		for (int i = 0; i < CA; i++) {
			if (lista[i] == NULL || lista[i]->getVehiculo == NULL)
				return;
			cVehiculo* v = lista[i]->getVehiculo;
			cCamioneta* ptr = dynamic_cast<cCamioneta*>(v);

			if (ptr != NULL) {
				camionetas[CA] = lista[i]->getVehiculo;
				CA++;
				cout << camionetas << endl;
			}
		}
		break;
	case motocicleta:
		for (int i = 0; i < CA; i++) {
			if (lista[i] == NULL || lista[i]->getVehiculo == NULL)
				return;
			cVehiculo* v = lista[i]->getVehiculo;
			cMotocicleta* ptr = dynamic_cast<cMotocicleta*>(v);

			if (ptr != NULL) {
				motos[CA] = lista[i]->getVehiculo;
				CA++;
				cout << motos << endl;
			}
		}
		break;
	case automovil:
		for (int i = 0; i < CA; i++) {
			if (lista[i] == NULL || lista[i]->getVehiculo == NULL)
				return;
			cVehiculo* v = lista[i]->getVehiculo;
			cAutomovil* ptr = dynamic_cast<cAutomovil*>(v);

			if (ptr != NULL) {
				autos[CA] = lista[i]->getVehiculo;
				CA++;
				cout << autos << endl;
			}
		}
		break;
	case trafic:
		for (int i = 0; i < CA; i++) {
			if (lista[i] == NULL || lista[i]->getVehiculo == NULL)
				return;
			cVehiculo* v = lista[i]->getVehiculo;
			cTrafics* ptr = dynamic_cast<cTrafics*>(v);

			if (ptr != NULL) {
				trafics[CA] = lista[i]->getVehiculo;
				CA++;
				cout << trafics << endl;
			}
		}
		break;
	}
}




