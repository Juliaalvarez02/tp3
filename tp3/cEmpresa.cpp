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

bool cEmpresa::realizarMantenimiento(cVehiculo* vehiculoMantenido)
{
	for (int i = 0; i < listavehiculos->getCA(); i++) {
		listavehiculos[i].buscaritem(vehiculoMantenido);
		vehiculoMantenido->cambiarFecha();
		return true;
	}
}

bool cEmpresa::agregarVehiculo(cVehiculo* nuevoVehiculo)
{
	for (int i = 0; i < listavehiculos->getTam(); i++) {
		listavehiculos[i].agregarItem(nuevoVehiculo);
		return true;
	}
}

bool cEmpresa::agregarCliente(cCliente* nuevoCliente)
{
	for (int i = 0; i < listaclientes->getTam(); i++) {
		listaclientes[i].agregarItem(nuevoCliente);
		return true;
	}
}

bool cEmpresa::agregarAlquiler(cAlquiler* nuevoAlquiler)
{
	for (int i = 0; i < lista_alquiler->getTam(); i++) {
		lista_alquiler[i].agregarItem(nuevoAlquiler);
		return true;
	}
}

void cEmpresa::listar(vehiculos vehiculoAImprimir)
{
	lista_alquiler->listarXtipo(vehiculoAImprimir);
}







