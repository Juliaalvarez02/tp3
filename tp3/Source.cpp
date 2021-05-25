#include "Includes.h"

int main() {
	cVehiculo *vehiculo1 = new cVehiculo("AA555AA", "rojo", 25, 100, 15000, 5, 30000, &cFecha(1,1,1));
	cVehiculo* vehiculo2 = new cVehiculo("BB444BB", "blanco", 48, 101, 15000, 5, 25000,&cFecha(10,3,2021));
	cVehiculo* vehiculo3 = new cVehiculo("CC333CC", "blanco", 150, 102, 25000, 7, 5000, &cFecha(10, 3, 2021));
	cMotocicleta* motocicleta = new cMotocicleta("DD222DD", "gris", 20, 103, 18500, 5, 4300, &cFecha(10, 3, 2021));
	cAlquiler* alquiler = new cAlquiler("Pepito", 2, 4, vehiculo1, &cFecha(20, 5, 2021), &cFecha(24, 5, 2021));

	vehiculo1->imprimir();
	vehiculo2->imprimir();
	vehiculo3->imprimir();
	motocicleta->pasosMantenimiento();
	int TarifaFinal = alquiler->calcularTarifa(sillasSeguridad);
	cout << "\nTarifa final: " << TarifaFinal << endl;
	cout << "\nDatos de alquiler: " << endl;
	alquiler->imprimir();

	cLista<cVehiculo>* listavehiculos;
	listavehiculos->agregarItem(vehiculo1);
	listavehiculos->agregarItem(vehiculo2);
	listavehiculos->agregarItem(vehiculo3);
	cout<< "Lista de vehiculos: "<<listavehiculos->toString();

	

	
}