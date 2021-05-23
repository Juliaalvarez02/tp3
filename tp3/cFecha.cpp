#include "cFecha.h"

cFecha::cFecha()
{
}

cFecha::cFecha(int Dia, int Mes, int Anio)
{
	dia = Dia;
	mes = Mes;
	anio = Anio;
}

cFecha::~cFecha()
{
}

string cFecha::toString()
{
	return to_string(dia) + '/' + to_string(mes) + '/' + to_string(anio);
}

int cFecha::getDia()
{
	return dia;
}

int cFecha::getMes()
{
	return mes;
}

int cFecha::getAnio()
{
	return anio;
}

