#include "cVehiculo.h"

cVehiculo::cVehiculo()
{
}

cVehiculo::cVehiculo(int patente, string color, int num_chasis, int num_poliza, cFecha *fecha, int precio, int capacidad, unsigned int tarifa, unsigned int cant)
{
	this->patente = patente;
	this->color = color;
	this->num_chasis = num_chasis;
	this->num_poliza = num_poliza;
	fecha_ult_mantenimiento = NULL;
	precioXdia = precio;
	capacidad_pasajeros = capacidad;
	tarifa_base = tarifa;
	cantdias_alquilado = cant;
}

cVehiculo::~cVehiculo()
{
}

int cVehiculo::CalcularTarifa()
{
	int costofinal;
	costofinal = tarifa_base + (precioXdia * cantdias_alquilado);
}


