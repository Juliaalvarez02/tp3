#include "cTrafics.h"

cTrafics::cTrafics(string patente, string color, int num_chasis, int num_poliza, int precio,
	int capacidad, unsigned int tarifa, unsigned int cant):cVehiculo(patente, color, num_chasis,
		num_poliza, precio, capacidad, tarifa, cant)
{
}

cTrafics::~cTrafics()
{
}
