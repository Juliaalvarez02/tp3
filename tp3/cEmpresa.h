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
	bool realizarMantenimiento(cVehiculo* vehiculoMantenido);
    bool agregarVehiculo(cVehiculo* nuevoVehiculo);
	bool agregarCliente(cCliente* nuevoCliente);
	bool agregarAlquiler(cAlquiler* nuevoAlquiler);
	//void listar(vehiculos vehiculoAImprimir);
};

