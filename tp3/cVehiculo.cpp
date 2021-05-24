#define _CRT_SECURE_NO_WARNINGS
#include "cVehiculo.h"

cVehiculo::cVehiculo()
{
}

cVehiculo::cVehiculo(string patente, string color, int num_chasis, int num_poliza, int precio, int capacidad,
	unsigned int tarifa, unsigned int cant, cFecha* fecha_ult_mantenimiento)
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

	if (fecha_ult_mantenimiento != NULL) {
		int dia = fecha_ult_mantenimiento->getDia();
		int mes = fecha_ult_mantenimiento->getMes();
		int anio = fecha_ult_mantenimiento->getAnio();

		time_t now = time(0);
		tm* ltm = localtime(&now);
		dia = ltm->tm_mday;
		mes = 1 + ltm->tm_mon;
		anio = 1900 + ltm->tm_year;
	}
	

	return fecha_ult_mantenimiento;
}

unsigned int cVehiculo::getPrecioAdicional()
{
	return precioAdicional;
}

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
	if (fecha_ult_mantenimiento == NULL) {
		return fecha_ult_mantenimiento->getDia();
	}
}

int cVehiculo::getMes()
{
	if (fecha_ult_mantenimiento != NULL) {
		return fecha_ult_mantenimiento->getMes();
	}
}

int cVehiculo::getAnio()
{
	if (fecha_ult_mantenimiento != NULL) {
		return fecha_ult_mantenimiento->getAnio();
	}
	
}

int cVehiculo::agregarAdicionales()
{
	int adicionales = 0;
	return adicionales;
}

void cVehiculo::pasosMantenimiento()
{
	cout << "Pasos mantenimiento: " << endl;
	cout << "\nP1" << "\nP2" << "\nP3" << endl;
}

string cVehiculo::toString()
{
	return "Patente: " + patente + "\nColor: " + color + "Numero de chasis: " + to_string(num_chasis) +
		"\nNumero de poliza: " + to_string(num_poliza) + "\nPrecio por dia: " + to_string(precioXdia) +
		"\nCapacidad de pasajeros: " + to_string(capacidad_pasajeros) + "\nTarifa base: " + to_string(tarifa_base)
		+ "\nCantidad de dias alquilado: " + to_string(cantdias_alquilado) + "\nFecha de ultimo mantenimiento: " +
		to_string(fecha_ult_mantenimiento->getDia()) + "/" + to_string(fecha_ult_mantenimiento->getMes()) + "/" +
		to_string(fecha_ult_mantenimiento->getAnio());

}

void cVehiculo::imprimir()
{
	cout << toString() << endl;
}






