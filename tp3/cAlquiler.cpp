#include "cAlquiler.h"

cAlquiler::cAlquiler()
{
}

cAlquiler::cAlquiler(string Cliente, cVehiculo vehiculo, int cant, cFecha fechai, cFecha fechaf, int monto)
{
	cliente = Cliente;
	vehiculoalquilado = vehiculo;
	cant_adicionales = cant;
	fecha_inicio = fechai;
	fecha_findereserva = fechaf;
	monto_total = monto;
}

cAlquiler::~cAlquiler()
{
}
