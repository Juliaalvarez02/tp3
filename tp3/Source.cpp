#include "Includes.h"

int main() { 
	//Defino 3 vehiculos
	cVehiculo *vehiculo1 = new cVehiculo("AA555AA", "rojo", 25, 100, 1500, 5, 3000, &cFecha(1,1,1));
	cVehiculo* vehiculo2 = new cVehiculo("BB444BB", "blanco", 48, 101, 1500, 5, 2500,&cFecha(10,3,2021));
	cVehiculo* vehiculo3 = new cVehiculo("CC333CC", "blanco", 150, 102, 2500, 7, 5000, &cFecha(10, 3, 2021));

	//Defino 1 vehiculo de cada tipo
	cMotocicleta* Motocicleta = new cMotocicleta("DD222DD", "gris", 80, 103, 1850, 2, 4300, &cFecha(25, 03, 2020));
	cCamioneta* Camioneta = new cCamioneta("EE101EE", "negro", 85, 104, 1745, 5, 2000, &cFecha(02, 05, 2021));
	cTrafics* Trafic = new cTrafics("FF102FF", "azul", 90, 105, 3450, 6, 4000, &cFecha(4, 4, 2021));
	cAutomovil* Automovil = new cAutomovil("GG505GG", "gris", 75, 106, 2000, 5, 1500, &cFecha(01, 02, 2021));

	//Defino 3 alquileres
	cAlquiler* alquiler1 = new cAlquiler("Damian", 2, 4, vehiculo1, &cFecha(20, 5, 2021), &cFecha(24, 5, 2021));
	cAlquiler* alquiler2 = new cAlquiler("Pampa", 1, 10, vehiculo2, &cFecha(10, 3, 2021), &cFecha(20, 3, 2021));
	cAlquiler* alquiler3 = new cAlquiler("Flor", 0, 5, vehiculo3, &cFecha(10, 01, 2021), &cFecha(15, 01, 2021));

	//Y 3 clientes para cada alquiler
	cCliente* cliente1 = new cCliente("Damian", &cFecha(20, 5, 2021), vehiculo1);
	cCliente* cliente2 = new cCliente("Pampa", &cFecha(10, 3, 2021), vehiculo2);
	cCliente* cliente3 = new cCliente("Flor", &cFecha(10, 01, 2021), vehiculo3);

	//Hago metodos imprimir de cada vehiculo
	cout << "DATOS VEHICULOS: " << endl;
	cout << "\nVehiculo 1: " << endl;
	vehiculo1->imprimir();
	cout << "\nVehiculo 2: " << endl;
	vehiculo2->imprimir();
	cout << "\nVehiculo 3: " << endl;
	vehiculo3->imprimir();

	//Pruebo metodo pasosMantenimiento de cada tipo de vehiculo
	Motocicleta->pasosMantenimiento();
	Camioneta->pasosMantenimiento();
	Trafic->pasosMantenimiento();
	Automovil->pasosMantenimiento();

	//Imprimo datos de cada cliente
	cout << "\nCliente 1: " << endl;
	cliente1->imprimir();
	cout << "\nCliente 2: " << endl;
	cliente2->imprimir();
	cout << "\nCliente 3: " << endl;
	cliente3->imprimir();

	//Imprimo datos de alquileres
	cout << "\nAlquiler cliente 1: "<< endl;
	alquiler1->imprimir();
	cout << "Alquiler cliente 2: " << endl;
	alquiler2->imprimir();
	cout << "Alquiler cliente 3: " << endl;
	alquiler3->imprimir();

	//Pruebo metodo calcular tarifa e imprimo el monto total final 
	int TarifaFinal = alquiler1->calcularTarifa(sillasSeguridad);
	cout << "\nTarifa final vehiculo 1: " << TarifaFinal << endl;
	TarifaFinal = alquiler2->calcularTarifa(asientosRebatibles);
	cout << "Tarifa final vehiculo 2: " << TarifaFinal << endl;
	
	//Defino una empresa y le agrego los datos a las listas que tiene la empresa
	cEmpresa* empresa = new cEmpresa();
	empresa->agregarVehiculo(vehiculo1);
	empresa->agregarVehiculo(vehiculo2);
	empresa->agregarVehiculo(vehiculo3);
	empresa->agregarAlquiler(alquiler1);
	empresa->agregarAlquiler(alquiler2);
	empresa->agregarAlquiler(alquiler3);
	empresa->agregarCliente(cliente1);
	empresa->agregarCliente(cliente2);
	empresa->agregarCliente(cliente3);

	empresa->adquirirNuevosVehiculos(new cVehiculo("HH402HH", "blanco", 180, 107, 250, 4, 500, &cFecha(8, 10, 2020)));
	empresa->realizarMantenimiento(vehiculo2);
	cout << "Vehiculo 2 con fecha actualizada: " << endl;
	vehiculo2->imprimir();
	empresa->retirar_deCirculacion(vehiculo1);

	//empresa->listar(camioneta);

	//Borro memoria
	delete empresa;
}