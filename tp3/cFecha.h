#pragma once
#include <string>

using namespace std;

class cFecha
{
	friend class cVehiculo;
	int dia;
	int mes;
	int anio;
public:
	cFecha();
	cFecha(int Dia, int Mes, int Anio);
	~cFecha();
	string toString();
	int getDia();
	int getMes();
	int getAnio();
};

