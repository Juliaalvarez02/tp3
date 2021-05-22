#pragma once
#include "cVehiculo.h"
class cAutomovil : 
	protected cVehiculo
{
public:
	cAutomovil(string patente, string color, int num_chasis, int num_poliza, int precio,
		int capacidad, unsigned int tarifa, unsigned int cant);
	~cAutomovil();
	virtual int agregarAdicionales();
};

