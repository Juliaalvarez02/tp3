#include "Includes.h"

int main() {
	cVehiculo *vehiculo1 = new cVehiculo("AA555AA", "rojo", 25, 100, 15000, 5, 30000, 2, &cFecha(1,1,1));
	cVehiculo* vehiculo2 = new cVehiculo("BB444BB", "blanco", 48, 101, 15000, 5, 25000, 4,&cFecha(10,3,2021));
	cVehiculo* vehiculo3 = new cVehiculo("CC333CC", "blanco", 150, 102, 25000, 7, 5000, 10, &cFecha(10, 3, 2021));
	cMotocicleta* moto = new cMotocicleta("DD222DD", "gris", 20, 103, 18500, 5, 4300, 6, &cFecha(10, 3, 2021));

	vehiculo1->getDia();
	vehiculo1->imprimir();
	vehiculo2->imprimir();
	vehiculo3->CalcularTarifa();
	moto->pasosMantenimiento();
	

	
}