#pragma once
#include <string>
#include "cFecha.h"
#include "cVehiculo.h"
using namespace std;

class cCliente
{
	string nombre;
	cFecha fechadealquiler;
	cVehiculo vehiculo_alquilado;
public:
	cCliente();
	cCliente(string nombre, cFecha fecha, cVehiculo vehiculo);
	~cCliente();
};

