#include "cListaalquileres.h"

cListaalquileres::cListaalquileres(unsigned int tam):cLista(tam)
{

}

cListaalquileres::~cListaalquileres()
{
}

void cListaalquileres::listarXtipo(vehiculos vehiculoAImprimir)
{
	int ganancia_total = 0;
	cLista<cVehiculo>* motos = new cLista<cVehiculo>();
	cLista<cVehiculo>* autos = new cLista<cVehiculo>();
	cLista<cVehiculo>* trafics = new cLista<cVehiculo>();
	cLista<cVehiculo>* camionetas = new cLista<cVehiculo>();

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
				break;
			cVehiculo* vehiculo = lista[i]->getVehiculo();
			cCamioneta* p_Camioneta = dynamic_cast<cCamioneta*>(vehiculo);

			if (p_Camioneta != NULL) {
				camionetas->agregarItem(lista[i]->getVehiculo());
				camionetas->sumarA_CA();
				cout << camionetas << endl;
				ganancia_total = ganancia_total + lista[i]->montoTotal();
			}
			else
				break;
		}
		break;
	case motocicleta:
		for (int i = 0; i < CA; i++) {
			if (lista[i] == NULL || lista[i]->getVehiculo() == NULL)
				break;
			cVehiculo* vehiculo = lista[i]->getVehiculo();
			cMotocicleta* p_Motocicleta = dynamic_cast<cMotocicleta*>(vehiculo);

			if (p_Motocicleta != NULL) {
				motos->agregarItem(lista[i]->getVehiculo());
				motos->sumarA_CA();
				cout << motos << endl;
				ganancia_total = ganancia_total + lista[i]->montoTotal();
			}
			else
				break;
		}
		break;
	case automovil:
		for (int i = 0; i < CA; i++) {
			if (lista[i] == NULL || lista[i]->getVehiculo() == NULL)
				break;
			cVehiculo* vehiculo = lista[i]->getVehiculo();
			cAutomovil* p_automovil = dynamic_cast<cAutomovil*>(vehiculo);

			if (p_automovil != NULL) {
				autos->agregarItem(lista[i]->getVehiculo());
				autos->sumarA_CA();
				cout << autos << endl;
				ganancia_total = ganancia_total + lista[i]->montoTotal();
			}
			else
				break;
		}
		break;
	case trafic:
		for (int i = 0; i < CA; i++) {
			if (lista[i] == NULL || lista[i]->getVehiculo() == NULL)
				break;
			cVehiculo* vehiculo = lista[i]->getVehiculo();
			cTrafics* p_trafic = dynamic_cast<cTrafics*>(vehiculo);

			if (p_trafic != NULL) {
				trafics->agregarItem(lista[i]->getVehiculo());
				trafics->sumarA_CA();
				cout << trafics << endl;
				ganancia_total = ganancia_total + lista[i]->montoTotal();
			}
			else
				break;
		}
		break;
	}
}




