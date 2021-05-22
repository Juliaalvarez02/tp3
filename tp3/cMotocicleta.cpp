#include "cMotocicleta.h"

cMotocicleta::cMotocicleta(string patente, string color, int num_chasis, int num_poliza, int precio,
	int capacidad, unsigned int tarifa, unsigned int cant) :cVehiculo(patente, color, num_chasis, num_poliza, 
		 precio, capacidad, tarifa, cant)
{
}

cMotocicleta::~cMotocicleta()
{
}

void cMotocicleta::pasosMantenimiento()
{
	cout << "\nPasos mantenimiento automovil: " << endl;
	cout << "\nPirulito 1" << "\nPirulito 2" << "\nPirulito 3" << endl;
	cambiarFecha();
	cout << "Fecha: " << to_string(getDia()) + "/" + to_string(getMes()) + "/" + to_string(getAnio());
}