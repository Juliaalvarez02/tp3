#include "cAutomovil.h"

cAutomovil::cAutomovil(string patente, string color, int num_chasis, int num_poliza, int precio,
	int capacidad, unsigned int tarifa, cFecha* fecha_ult_mantenimiento):cVehiculo(patente, color, num_chasis, num_poliza,
		precio, capacidad, tarifa,fecha_ult_mantenimiento)
{

}

cAutomovil::~cAutomovil()
{
}

void cAutomovil::pasosMantenimiento()
{
	cout << "\nPasos mantenimiento automovil: " << endl;
	cout << "Pepito 1" << "\nPepito 2" << "\nPepito 3" << endl;
	cambiarFecha();
}
