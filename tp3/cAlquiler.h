#pragma once
#include <string>
#include "cVehiculo.h"
using namespace std;

class cAlquiler
{
	string cliente;
	cVehiculo* vehiculoalquilado;
	int cant_adicionales;
	cFecha *fecha_inicio;
	cFecha *fecha_findereserva;
	int monto_total;
public:
	cAlquiler();
	cAlquiler(string Cliente,int cant, int monto);
	~cAlquiler();
	string toString();
	void imprimir();
	cVehiculo* getVehiculo();
};

