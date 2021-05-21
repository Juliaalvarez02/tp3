#pragma once
#include <string>
#define NMAX 10
using namespace std;
template <class T>

class cLista
{
protected:
	T**lista;
	unsigned int CA, tam;
public:
	cLista(unsigned int tam=NMAX);
	~cLista();
	bool agregarItem(T*item);
	T*buscaritem(T*item);
	T*quitarItem(T*item);
	T*quitarEnPos(unsigned int pos);////////////////////////////preguntar a flor
	void Eliminar(T*item);
	unsigned int getItempos(T*item);
	void eliminar(unsigned int pos);
	unsigned int getCA();
	unsigned int getTam();
};

template<class T>
inline cLista<T>::cLista(unsigned int tam)
{
	lista = new lista*[tam];
	for (unsigned int = 0; i < tam; i++) {
		lista[i] = NULL;
	}
	this->tam = tam;
	CA = 0;
}

template<class T>
inline cLista<T>::~cLista()
{
	if (lista != NULL) {
		for (unsigned int i = 0; i < CA; i++) {
			if (lista[i] != NULL) {
				delete lista[i];
			}
		}
		delete[] lista;
	}
}

template<class T>
inline bool cLista<T>::agregarItem(T * item)
{
	T*i_f = buscaritem(item);
	if (i_f != NULL) {
		throw new exception("\nya se encuentra en la lista");
	}
	if (CA < tam) {
		lista[CA++] = item;
	}
	else
		throw new exception("\nno hay tamanio para agregarlo");
	return true;
}

template<class T>
inline T * cLista<T>::buscaritem(T * item)
{
	for (unsigned int i = 0; i < CA; i++) {
		if ((*lista[i]) == (*item)) {
			return lista[i];
		}
	}
	return NULL;
}

template<class T>
inline T * cLista<T>::quitarItem(T * item)
{
	unsigned int pos = getItempos(item);
	if (pos >= CA) {
		return NULL;
	}
	else
		return quitarEnPos(pos);
}

template<class T>
inline T * cLista<T>::quitarEnPos(unsigned int pos)
{
	if (pos >= CA) {
		throw new exception("posicion invalida");
	}
	T*aux = lista[pos];
	for (unsigned int i = pos; i < CA - 1; i++) {
		lista[i] = lista[i + 1];
	}
	lista[CA - 1] = NULL;
	CA--;
	return aux;
}

template<class T>
inline void cLista<T>::Eliminar(T * item)
{
	eliminar(getItempos(item));
}

template<class T>
inline unsigned int cLista<T>::getItempos(T * item)
{
	for (unsigned int i = 0; i < CA; i++) {
		if ((*lista[i]) == (*item)) {
			return i;
		}
	}
	return INT_MAX;
}

template<class T>
inline void cLista<T>::eliminar(unsigned int pos)
{
	if (pos >= CA) {
		throw new exception("posicion invalida");
	}
	T*dato = quitarEnPos(pos);
	if (dato != NULL) {
		delete dato;
	}
	else
		throw new exception("no encontrado");
}

template<class T>
inline unsigned int cLista<T>::getCA()
{
	return CA;
}

template<class T>
inline unsigned int cLista<T>::getTam()
{
	return tam;
}