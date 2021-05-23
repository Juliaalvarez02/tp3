#pragma once
#include "cVehiculo.h"
class cTrafics :
	protected cVehiculo
{
public:
	cTrafics(string patente, string color, int num_chasis, int num_poliza, int precio, int capacidad,
		unsigned int tarifa, unsigned int cant, cFecha* fecha_ult_mantenimiento);
	~cTrafics();
	virtual void pasosMantenimiento();

};

