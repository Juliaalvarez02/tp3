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
	int dia;
	time_t now = time(0);
	tm* ltm = localtime(&now);
	dia = ltm->tm_mday;
	if (vehiculoMantenido != NULL) {
		vehiculoMantenido
			listavehiculos->
		return paciente->ultima_visita.dia;
	}
}
