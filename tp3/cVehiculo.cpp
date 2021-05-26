#define _CRT_SECURE_NO_WARNINGS
#include "cVehiculo.h"

cVehiculo::cVehiculo()
{
}

cVehiculo::cVehiculo(string patente, string color, int num_chasis, int num_poliza, int precio, int capacidad, unsigned int tarifa, cFecha* fecha_ult_mantenimiento)
{
	this->patente = patente;
	this->color = color;
	this->num_chasis = num_chasis;
	this->num_poliza = num_poliza;
	this->fecha_ult_mantenimiento = fecha_ult_mantenimiento;
	precioXdia = precio;
	capacidad_pasajeros = capacidad;
	tarifaBase = tarifa;
}

cVehiculo::~cVehiculo()
{
}

void cVehiculo::cambiarFecha()
{

	if (fecha_ult_mantenimiento != NULL) {
		int dia, mes, anio;
		time_t now = time(0);
		tm* ltm = localtime(&now);
		dia = ltm->tm_mday;
		mes = 1 + ltm->tm_mon;
		anio = 1900 + ltm->tm_year;
		fecha_ult_mantenimiento->dia = dia;
		fecha_ult_mantenimiento->mes = mes;
		fecha_ult_mantenimiento->anio = anio;
	}

}

unsigned int cVehiculo::getTarifaBase()
{
	return tarifaBase;
}

string cVehiculo::getPatente()
{
	return patente;
}

int cVehiculo::getPrecioxDia()
{
	return precioXdia;
}

void cVehiculo::pasosMantenimiento()
{
	cout << "Pasos mantenimiento: " << endl;
	cout << "\nP1" << "\nP2" << "\nP3" << endl;
}

string cVehiculo::toString()
{
	return "Patente: " + patente + "\nColor: " + color + "\nNumero de chasis: " + to_string(num_chasis) +
		"\nNumero de poliza: " + to_string(num_poliza) + "\nPrecio por dia: " + to_string(precioXdia) +
		"\nCapacidad de pasajeros: " + to_string(capacidad_pasajeros) + "\nTarifa base: " + to_string(tarifaBase)
	    + "\nFecha de ultimo mantenimiento: " + to_string(fecha_ult_mantenimiento->getDia()) + "/" 
		+ to_string(fecha_ult_mantenimiento->getMes()) + "/" + to_string(fecha_ult_mantenimiento->getAnio()) + "\n";

}

void cVehiculo::imprimir()
{
	cout << toString() << endl;
}






