#include "cCamioneta.h"

cCamioneta::cCamioneta(string patente, string color, int num_chasis, int num_poliza,
	int precio, int capacidad, unsigned int tarifa, unsigned int cant, cFecha* fecha_ult_mantenimiento):cVehiculo (patente, color, num_chasis,
		num_poliza, precio, capacidad, tarifa, cant,fecha_ult_mantenimiento)
{
}

cCamioneta::~cCamioneta()
{
}

void cCamioneta::pasosMantenimiento()
{
	cout << "\nPasos mantenimiento automovil: " << endl;
	cout << "\nPirulito 1" << "\nPirulito 2" << "\nPirulito 3" << endl;
	cambiarFecha();
}
