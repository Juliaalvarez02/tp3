#include "cTrafics.h"

cTrafics::cTrafics(string patente, string color, int num_chasis, int num_poliza, int precio,
	int capacidad, unsigned int tarifa, cFecha* fecha_ult_mantenimiento):cVehiculo(patente, color, num_chasis,
		num_poliza, precio, capacidad, tarifa, fecha_ult_mantenimiento)
{

}

cTrafics::~cTrafics()
{
}

void cTrafics::pasosMantenimiento()
{
	cout << "\nPasos mantenimiento trafic: " << endl;
	cout << "P1" << "\nP2" << "\nP3" << endl;
	cambiarFecha();
}