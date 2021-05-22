#include "cCliente.h"

cCliente::cCliente()
{
}

cCliente::cCliente(string nombre)
{
	this->nombre = nombre;
	fechadealquiler = NULL;
	vehiculo_alquilado = NULL;
}

cCliente::~cCliente()
{
}

string cCliente::toString()
{
	return "Cliente: " + nombre + "Fecha de alquiler: " + to_string(fechadealquiler->getDia()) + "/" +
		to_string(fechadealquiler->getMes()) + "/" + to_string(fechadealquiler->getAnio()) + "Patente: " +
		vehiculo_alquilado->getPatente();
}

void cCliente::imprimir()
{
	cout << toString() << endl;
}
