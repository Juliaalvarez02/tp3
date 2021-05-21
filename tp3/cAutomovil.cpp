#include "cAutomovil.h"

cAutomovil::cAutomovil(int patente, string color, int num_chasis, int num_poliza, cFecha fecha, int precio, int capacidad, unsigned int tarifa, unsigned int cant):cVehiculo(patente, color, num_chasis, num_poliza, fecha, precio, capacidad, tarifa, cant)
{

}

cAutomovil::~cAutomovil()
{
}
