#include "cAlquiler.h"

cAlquiler::cAlquiler()
{
}

cAlquiler::cAlquiler(string Cliente, int cantAd, int cantDias, cVehiculo* vehiculoalquilado, cFecha* fecha_inicio, cFecha* fecha_findereserva)
{
	cliente = Cliente;
	this->vehiculoalquilado = vehiculoalquilado;
	cant_adicionales = cantAd;
	this->fecha_inicio = fecha_inicio;
	this->fecha_findereserva = fecha_findereserva;
	monto_total = 0;
	cant_dias_alquilado = cantDias;
}

cAlquiler::~cAlquiler()
{
}

string cAlquiler::toString()
{
	return "Nombre: " + cliente + "\nPatente del vehiculo alquilado: " + vehiculoalquilado->getPatente()
		+ "\nCantidad de elementos adicionales: " + to_string(cant_adicionales) + "\nFecha de inicio de la reserva: " 
		+ to_string(fecha_inicio->getDia()) + "/" + to_string(fecha_inicio->getMes()) + "/" + to_string(fecha_inicio->getAnio()) 
		+ "\nFecha fin de reserva: " + to_string(fecha_findereserva->getDia()) + "/" + to_string(fecha_findereserva->getMes()) + "/" 
		+ to_string(fecha_findereserva->getAnio()) + "\n";
}

void cAlquiler::imprimir()
{
	cout << toString() << endl;
}

cVehiculo* cAlquiler::getVehiculo()
{
	return vehiculoalquilado;
}

int cAlquiler::calcularTarifa()
{
	switch (adicional) {
	case cascos:
		monto_total = vehiculoalquilado->getTarifaBase() + ((vehiculoalquilado->getPrecioxDia() + precioCasco)*cant_dias_alquilado);
		break;
	case sillasSeguridad:
		monto_total = vehiculoalquilado->getTarifaBase() + ((vehiculoalquilado->getPrecioxDia() + preciosilla)*cant_dias_alquilado);
		break;

	case portaEquipaje:
		monto_total = vehiculoalquilado->getTarifaBase() + ((vehiculoalquilado->getPrecioxDia() + precioPortaEquipaje)*cant_dias_alquilado);
		break;
	case asientosRebatibles:
		monto_total = vehiculoalquilado->getTarifaBase() + ((vehiculoalquilado->getPrecioxDia() + precioAsientosRebatibles)*cant_dias_alquilado);
		break;
	}
	return monto_total;
}


