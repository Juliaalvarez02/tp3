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
