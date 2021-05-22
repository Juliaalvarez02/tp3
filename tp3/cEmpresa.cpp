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

void cEmpresa::adquirirNuevosVehiculos(cVehiculo* nuevoVehiculo)
{
	if (listavehiculos != NULL) {
		listavehiculos->agregarItem(nuevoVehiculo);
	}
}

void cEmpresa::retirar_deCirculacion(cVehiculo* vehiculoRetirado)
{
	if (listavehiculos != NULL)
		listavehiculos->Eliminar(vehiculoRetirado);
}

void cEmpresa::realizarMantenimiento(cVehiculo* vehiculoMantenido)
{
	for (int i = 0; i < listavehiculos->getCA(); i++) {
		listavehiculos[i].buscaritem(vehiculoMantenido);
		vehiculoMantenido->cambiarFecha();
	}
}






