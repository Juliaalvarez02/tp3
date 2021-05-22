#pragma once
#include "cVehiculo.h"
class cMotocicleta :
	protected cVehiculo
{
public:
	cMotocicleta(string patente, string color, int num_chasis, int num_poliza, int precio, int capacidad,
		unsigned int tarifa, unsigned int cant);
	~cMotocicleta();
	virtual void pasosMantenimiento();
};

