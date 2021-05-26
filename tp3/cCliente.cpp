#include "cCliente.h"

cCliente::cCliente()
{
}

cCliente::cCliente(string nombre, cFecha* fechadealquiler, cVehiculo* vehiculo_alquilado)
{
	this->nombre = nombre;
	this->fechadealquiler = fechadealquiler;
	this->vehiculo_alquilado = vehiculo_alquilado;
}

cCliente::~cCliente()
{
}

string cCliente::toString()
{
	return "Nombre: " + nombre + "\nFecha de alquiler: " + to_string(fechadealquiler->getDia()) + "/" +
		to_string(fechadealquiler->getMes()) + "/" + to_string(fechadealquiler->getAnio()) + "\nPatente: " +
		vehiculo_alquilado->getPatente();
}

void cCliente::imprimir()
{
	cout << toString() << endl;
}
