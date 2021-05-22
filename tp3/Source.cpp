#include "Includes.h"

int main() {
	cVehiculo *vehiculo1 = new cVehiculo("AA555AA", "rojo", 25, 100, 15000, 5, 30000, 2);
	cVehiculo* vehiculo2 = new cVehiculo("BB444BB", "blanco", 48, 101, 15000, 5, 25000, 4);
	cVehiculo* vehiculo3 = new cVehiculo("CC333CC", "blanco", 150, 102, 25000, 7, 5000, 10);
	cMotocicleta* moto = new cMotocicleta("DD222DD", "gris", 20, 103, 18500, 5, 4300, 6);

	vehiculo1->imprimir();
	vehiculo2->imprimir();
	vehiculo3->CalcularTarifa();
	moto->pasosMantenimiento();
	
}