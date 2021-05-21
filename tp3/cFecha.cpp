#include "cFecha.h"

cFecha::cFecha()
{
}

cFecha::cFecha(int dia, int mes, int anio)
{
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
}

cFecha::~cFecha()
{
}

string cFecha::toString()
{
	return to_string(dia) + '/' + to_string(mes) + '/' + to_string(anio);
}

string cFecha::getFecha()
{
	return toString();
}