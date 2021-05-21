#pragma once
#include "cListaalquileres.h"
#include "cCliente.h"
#include "cVehiculo.h"
#include <ctime>

class cEmpresa
{
	cLista<cCliente>*listaclientes;
	cLista<cVehiculo>*listavehiculos;
	cListaalquileres* lista_alquiler;
public:
	cEmpresa();
	~cEmpresa();
	void adquirirNuevosVehiculos(cVehiculo* nuevoVehiculo);
	void retirar_deCirculacion(cVehiculo* vehiculoRetirado);
	void realizarMantenimiento(cVehiculo* vehiculoMantenido);
};

