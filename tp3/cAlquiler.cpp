#include "cAlquiler.h"

cAlquiler::cAlquiler()
{
}

cAlquiler::cAlquiler(string Cliente, int cant, int monto)
{
	cliente = Cliente;
	vehiculoalquilado = NULL;
	cant_adicionales = cant;
	fecha_inicio = NULL;
	fecha_findereserva = NULL;
	monto_total = monto;
}

cAlquiler::~cAlquiler()
{
}

string cAlquiler::toString()
{
	return "Cliente: " + cliente + "\nPatente del vehiculo alquilado: " + to_string(vehiculoalquilado->getPatente()) 
		+ "\nCantidad de elementos adicionales: " + to_string(cant_adicionales) + "\nFecha de inicio de la reserva: " 
		+ to_string(fecha_inicio->getDia()) + "/" + to_string(fecha_inicio->getMes()) + "/" + to_string(fecha_inicio->getAnio()) 
		+ "Fecha fin de reserva: " + to_string(fecha_findereserva->getDia()) + "/" + to_string(fecha_findereserva->getMes()) + "/" 
		+ to_string(fecha_findereserva->getAnio());
}

void cAlquiler::imprimir()
{
	cout << toString() << endl;
}
