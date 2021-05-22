#pragma once
#include "cVehiculo.h"
class cCamioneta :
	protected cVehiculo
{
public:
	cCamioneta(int patente, string color, int num_chasis, int num_poliza, int precio, 
		int capacidad, unsigned int tarifa, unsigned int cant);
	~cCamioneta();
};

