#pragma once
#include "cVehiculo.h"
class cCamioneta :
	protected cVehiculo
{
public:
	cCamioneta(string patente, string color, int num_chasis, int num_poliza, int precio,
		int capacidad, unsigned int tarifa, cFecha* fecha_ult_mantenimiento);
	~cCamioneta();
	void pasosMantenimiento();
};

