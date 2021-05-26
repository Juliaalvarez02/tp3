#include "cListaalquileres.h"

cListaalquileres::cListaalquileres(unsigned int tam):cLista(tam)
{

}

cListaalquileres::~cListaalquileres()
{
}

//void cListaalquileres::listarXtipo(vehiculos vehiculoAImprimir)
//{
//	int ganancia_total = 0;
//	cLista<cVehiculo>* motos = new cLista<cVehiculo>();
//	cLista<cVehiculo>* autos = new cLista<cVehiculo>();
//	cLista<cVehiculo>* trafics = new cLista<cVehiculo>();
//	cLista<cVehiculo>* camionetas = new cLista<cVehiculo>();
//
//	for (int i = 0; i < CA; i++) {
//		motos[i] = NULL;
//		autos[i] = NULL;
//		trafics[i] = NULL;
//		camionetas[i] = NULL;
//	}
//
//	/*switch (vehiculoAImprimir) 
//	{
//	case camioneta:
//		for (int i = 0; i < CA; i++) {
//			if (lista[i] == NULL || lista[i]->getVehiculo() == NULL)
//				break;
//			cCamioneta* p_Camioneta = dynamic_cast<cCamioneta*>(lista[i]->getVehiculo());
//		
//			if (p_Camioneta != NULL) {
//				lista[i]->imprimir();
//				ganancia_total = ganancia_total + lista[i]->montoTotal();
//			}
//			else
//				break;
//		}
//		break;
//	case motocicleta:
//		for (int i = 0; i < CA; i++) {
//			if (lista[i] == NULL || lista[i]->getVehiculo() == NULL)
//				break;
//			
//			cMotocicleta* p_Motocicleta = dynamic_cast<cMotocicleta*>(lista[i]->getVehiculo());
//
//			if (p_Motocicleta != NULL) {
//				lista[i]->imprimir();
//				ganancia_total = ganancia_total + lista[i]->montoTotal();
//			}
//			else
//				break;
//		}
//		break;
//	case automovil:
//		for (int i = 0; i < CA; i++) {
//			if (lista[i] == NULL || lista[i]->getVehiculo() == NULL)
//				break;
//			
//			cAutomovil* p_automovil = dynamic_cast<cAutomovil*>(lista[i]->getVehiculo());
//
//			if (p_automovil != NULL) {
//				lista[i]->imprimir();
//				ganancia_total = ganancia_total + lista[i]->montoTotal();
//			}
//			else
//				break;
//		}
//		break;
//	case trafic:
//		for (int i = 0; i < CA; i++) {
//			if (lista[i] == NULL || lista[i]->getVehiculo() == NULL)
//				break;
//			
//			cTrafics* p_trafic = dynamic_cast<cTrafics*>(lista[i]->getVehiculo());
//
//			if (p_trafic != NULL) {
//				lista[i]->imprimir();
//				ganancia_total = ganancia_total + lista[i]->montoTotal();
//			}
//			else
//				break;
//		}
//		break;
//	}*/
//}




