#define _CRT_SECURE_NO_WARNINGS
#include "cVehiculo.h"

cVehiculo::cVehiculo()
{
}

cVehiculo::cVehiculo(string patente, string color, int num_chasis, int num_poliza, int precio, int capacidad,
	unsigned int tarifa, unsigned int cant)
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
	return costofinal;
}


cFecha* cVehiculo::cambiarFecha()
{
	int dia = fecha_ult_mantenimiento->getDia();
	int mes = fecha_ult_mantenimiento->getMes();
	int anio = fecha_ult_mantenimiento->getAnio();

	if (fecha_ult_mantenimiento != NULL) {
		time_t now = time(0);
		tm* ltm = localtime(&now);
		dia = ltm->tm_mday;
		mes = 1 + ltm->tm_mon;
		anio = 1900 + ltm->tm_year;
	}
	
	return fecha_ult_mantenimiento;
}

//unsigned int cVehiculo::getPrecioAdicional()
//{
//	return precioAdicional;
//}

string cVehiculo::getPatente()
{
	return patente;
}

int cVehiculo::getPrecio()
{
	return precioXdia;
}

int cVehiculo::getDia()
{
	return fecha_ult_mantenimiento->getDia();
}

int cVehiculo::getMes()
{
	return fecha_ult_mantenimiento->getMes();
}

int cVehiculo::getAnio()
{
	return fecha_ult_mantenimiento->getAnio();
}

int cVehiculo::agregarAdicionales()
{
	int adicionales = 0;
	return adicionales;
}






