#include "cCamioneta.h"

cCamioneta::cCamioneta(string patente, string color, int num_chasis, int num_poliza,
	int precio, int capacidad, unsigned int tarifa, cFecha* fecha_ult_mantenimiento):cVehiculo (patente, color, num_chasis,
		num_poliza, precio, capacidad, tarifa, fecha_ult_mantenimiento)
{

}

cCamioneta::~cCamioneta()
{
}

void cCamioneta::pasosMantenimiento()
{
	cout << "\nPasos mantenimiento camioneta: " << endl;
	cout << "Pepe 1" << "\nPepe 2" << "\nPepe 3" << endl;
	cambiarFecha();
}
