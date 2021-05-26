#include "cListaalquileres.h"

cListaalquileres::cListaalquileres(unsigned int tam):cLista(tam)
{

}

cListaalquileres::~cListaalquileres()
{
}

void cListaalquileres::listarXtipo(vehiculos vehiculoAImprimir)
{
	cLista<cVehiculo>* motos = new cLista<cVehiculo>;
	cLista<cVehiculo>* autos = new cLista<cVehiculo>;
	cLista<cVehiculo>* trafics = new cLista<cVehiculo>;
	cLista<cVehiculo>* camionetas = new cLista<cVehiculo>;

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
			if (lista[i] == NULL || lista[i]->getVehiculo() == NULL)
				return;
			cVehiculo* vehiculo = lista[i]->getVehiculo();
			cCamioneta* p_Camioneta = dynamic_cast<cCamioneta*>(vehiculo);

			if (p_Camioneta != NULL) {
				camionetas[camionetas->getCA()].agregarItem(lista[i]->getVehiculo()) ;
				camionetas->getCA()+1;
				cout << camionetas << endl;
			}
		}
		break;
	case motocicleta:
		for (int i = 0; i < CA; i++) {
			if (lista[i] == NULL || lista[i]->getVehiculo() == NULL)
				return;
			cVehiculo* vehiculo = lista[i]->getVehiculo();
			cMotocicleta* p_Motocicleta = dynamic_cast<cMotocicleta*>(vehiculo);

			if (p_Motocicleta != NULL) {
				motos[motos->getCA()].agregarItem(lista[i]->getVehiculo());
				motos->getCA()+1;
				cout << motos << endl;
			}
		}
		break;
	case automovil:
		for (int i = 0; i < CA; i++) {
			if (lista[i] == NULL || lista[i]->getVehiculo() == NULL)
				return;
			cVehiculo* vehiculo = lista[i]->getVehiculo();
			cAutomovil* p_automovil = dynamic_cast<cAutomovil*>(vehiculo);

			if (p_automovil != NULL) {
				autos[autos->getCA()].agregarItem(lista[i]->getVehiculo());
				autos->getCA()+1;
				cout << autos << endl;
			}
		}
		break;
	case trafic:
		for (int i = 0; i < CA; i++) {
			if (lista[i] == NULL || lista[i]->getVehiculo() == NULL)
				return;
			cVehiculo* vehiculo = lista[i]->getVehiculo();
			cTrafics* p_trafic = dynamic_cast<cTrafics*>(vehiculo);

			if (p_trafic != NULL) {
				trafics[trafics->getCA()].agregarItem(lista[i]->getVehiculo());
				trafics->getCA()+1;
				cout << trafics << endl;
				
			}
		}
		break;
	}
}




