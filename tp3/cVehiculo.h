#define _CRT_SECURE_NO_WARNING
#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include "cFecha.h"
#include <chrono>
using namespace std;

class cVehiculo
{
	string patente;
	string color;
	int num_chasis;
	int num_poliza;
	cFecha *fecha_ult_mantenimiento;
	int precioXdia;
	int capacidad_pasajeros;
	unsigned int tarifaBase;
public:
	cVehiculo();
	cVehiculo(string patente, string color, int num_chasis, int num_poliza, int precio, int capacidad,
		unsigned int tarifa, cFecha* fecha_ult_mantenimiento);
	~cVehiculo();
	void cambiarFecha();
	unsigned int getTarifaBase();
	string getPatente();
	int getPrecioxDia();
	virtual void pasosMantenimiento();
	string toString();
	void imprimir();
};

