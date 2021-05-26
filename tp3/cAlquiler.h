#pragma once
#include <string>
#include "cVehiculo.h"
#define precioCasco 50
#define preciosilla 25
#define precioPortaEquipaje 70
#define precioAsientosRebatibles 20
using namespace std;

typedef enum { cascos = 1, sillasSeguridad, portaEquipaje, asientosRebatibles }adicionales;

class cAlquiler
{
	string cliente;
	cVehiculo* vehiculoalquilado;
	int cant_adicionales;
	cFecha *fecha_inicio;
	cFecha *fecha_findereserva;
	int monto_total;
	int cant_dias_alquilado;
	adicionales adicional;
public:
	cAlquiler();
	cAlquiler(string Cliente,int cantAd,int cantDias, cVehiculo* vehiculoalquilado, cFecha* fecha_inicio, cFecha* fecha_findereserva);
	~cAlquiler();
	string toString();
	void imprimir();
	cVehiculo* getVehiculo();
	int calcularTarifa();
};

