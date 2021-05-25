#pragma once
#include "cVehiculo.h"
class cAutomovil : 
	protected cVehiculo
{
public:
	cAutomovil(string patente, string color, int num_chasis, int num_poliza, int precio,
		int capacidad, unsigned int tarifa, cFecha* fecha_ult_mantenimiento);
	~cAutomovil();
	void pasosMantenimiento();
};

