#include "cCliente.h"

cCliente::cCliente()
{
}

cCliente::cCliente(string nombre, cFecha fecha, cVehiculo vehiculo)
{
	this->nombre = nombre;
	fechadealquiler = fecha;
	vehiculo_alquilado = vehiculo;
}

cCliente::~cCliente()
{
}
