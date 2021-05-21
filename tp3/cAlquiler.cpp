#include "cAlquiler.h"

cAlquiler::cAlquiler()
{
}

cAlquiler::cAlquiler(string Cliente, cVehiculo* vehiculo, int cant, cFecha *fechai, cFecha *fechaf, int monto)
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
