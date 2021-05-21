#pragma once
#include <string>

using namespace std;

class cFecha
{
	int dia;
	int mes;
	int anio;
public:
	cFecha();
	cFecha(int dia, int mes, int anio);
	~cFecha();
	string toString();
	string getFecha();
};

