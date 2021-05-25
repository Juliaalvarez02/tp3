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
	return "Cliente: " + cliente + "\nPatente del vehiculo alquilado: " + vehiculoalquilado->getPatente()
		+ "\nCantidad de elementos adicionales: " + to_string(cant_adicionales) + "\nFecha de inicio de la reserva: " 
		+ to_string(fecha_inicio->getDia()) + "/" + to_string(fecha_inicio->getMes()) + "/" + to_string(fecha_inicio->getAnio()) 
		+ "Fecha fin de reserva: " + to_string(fecha_findereserva->getDia()) + "/" + to_string(fecha_findereserva->getMes()) + "/" 
		+ to_string(fecha_findereserva->getAnio());
}

void cAlquiler::imprimir()
{
	cout << toString() << endl;
}

cVehiculo* cAlquiler::getVehiculo()
{
	return vehiculoalquilado;
}

int cAlquiler::calcularTarifa(adicionales adicional)
{
	switch (adicional) {
	case cascos:
		monto_total = ((vehiculoalquilado->getPrecioxDia() + precioCasco)*cant_dias_alquilado);
		break;
	case sillasSeguridad:
		monto_total = ((vehiculoalquilado->getPrecioxDia() + preciosilla)*cant_dias_alquilado);
		break;

	case portaEquipaje:
		monto_total = ((vehiculoalquilado->getPrecioxDia() + precioPortaEquipaje)*cant_dias_alquilado);
		break;
	case asientosRebatibles:
		monto_total = ((vehiculoalquilado->getPrecioxDia() + precioAsientosRebatibles)*cant_dias_alquilado);
		break;
	}
	return monto_total + vehiculoalquilado->getTarifaBase();
}


