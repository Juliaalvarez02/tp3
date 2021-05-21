#pragma once
#include "cVehiculo.h"
class cAutomovil : //hola
	protected cVehiculo
{
public:
	cAutomovil(int patente, string color, int num_chasis, int num_poliza, cFecha fecha, int precio, int capacidad, unsigned int tarifa, unsigned int cant);
	~cAutomovil();
};

