#define _CRT_SECURE_NO_WARNING
#pragma once
#include <string>
#include <iostream>
#include <stdio.h>
#include <ctime>
#include "cFecha.h"
using namespace std;

typedef enum{cascos = 1, sillasSeguridad, portaEquipaje, asientosRebatibles}adicionales;

class cVehiculo
{
	int patente;
	string color;
	int num_chasis;
	int num_poliza;
	cFecha *fecha_ult_mantenimiento;
	int precioXdia;
	int capacidad_pasajeros;
	unsigned int tarifa_base;
	unsigned int cantdias_alquilado;
	//unsigned int precioAdicional;
public:
	cVehiculo();
	cVehiculo(int patente, string color, int num_chasis, int num_poliza, int precio, int capacidad, 
		unsigned int tarifa, unsigned int cant);
	~cVehiculo();
	int CalcularTarifa();
	cFecha* cambiarFecha();
	unsigned int getPrecioAdicional();
	int getPatente();
	int getPrecio();
	int getDia();
	int getMes();
	int getAnio();
	virtual int agregarAdicionales();
};

