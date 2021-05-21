#pragma once
#include <string>
#include <iostream>
#include <stdio.h>
#include "cFecha.h"
using namespace std;

class cVehiculo
{
	int patente;
	string color;
	int num_chasis;
	int num_poliza;
	cFecha fecha_ult_mantenimiento;
	int precioXdia;
	int capacidad_pasajeros;
	unsigned int tarifa_base;
	unsigned int cantdias_alquilado;
public:
	cVehiculo();
	cVehiculo(int patente, string color, int num_chasis, int num_poliza, cFecha fecha, int precio, int capacidad, unsigned int tarifa, unsigned int cant);
	~cVehiculo();
	int CostoFinal();
};

