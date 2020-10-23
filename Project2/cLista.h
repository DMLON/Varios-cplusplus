#pragma once
#define NMAX 10

#include <string>

using namespace std;

template<class T>
class cListaT
{
protected:
	T** vector;
	unsigned int CA, TAM;
	bool eliminado = false;
	T* BuscarItem(T* obj);

public:
	cListaT(unsigned int TAM = NMAX);
	~cListaT();

	bool AgregarItem(T* item);

	T* Quitar(T* item);
	T* QuitarenPos(unsigned int pos);
	bool IsDeleting();
	void Eliminar(string clave);

	void Listar();
	T* BuscarItem(string clave);
	T* getItem(unsigned int pos);

	unsigned int getItemPos(string clave);

	unsigned int getCA();
	unsigned int getTAM();

	template<class B>
	T* BuscarPorTipo(string clave);

	//Devuelve el primer objeto (+offset) que sea del tipo buscado
	template<class B>
	T* BuscarPorTipo(int offset=0);
};

template<class T>
unsigned int cListaT<T>::getTAM()
{
	return TAM;
}
template<class T>
unsigned int cListaT<T>::getCA()
{
	return CA;
}

template<class T>
cListaT<T>::cListaT(unsigned int TAM)
{
	vector = new T * [TAM];
	for (unsigned int i = 0; i < TAM; i++)
	{
		vector[i] = NULL;
	}

	this->TAM = TAM;
	CA = 0;

}
template<class T>
cListaT<T>::~cListaT()
{
	eliminado = true;
	if (vector != NULL)
	{
		for (unsigned int i = 0; i < CA; i++)
		{
			if (vector[i] != NULL)
				delete vector[i];
		}
		delete[] vector;
	}


}

template<class T>
void cListaT<T>::Listar()
{

	for (unsigned int i = 0; i < CA; i++)
	{
		vector[i]->imprimir();
	}
}

template<class T>
bool cListaT<T>::AgregarItem(T* item)
{

	T* i_f = BuscarItem(item);
	if (i_f != NULL)throw new exception("Ya se encuentra en la lista");

	if (CA < TAM)
		vector[CA++] = item;
	else throw new exception("No hay tama�o suficiente para agregar el item");;
	return true;
}

template<class T>
T* cListaT<T>::Quitar(T* item) {
	unsigned int pos = getItemPos(item);
	if (pos >= CA)return NULL;
	return QuitarenPos(pos);
}
template<class T>
T* cListaT<T>::QuitarenPos(unsigned int pos) {

	if (pos >= CA)throw new exception("Posicion invalida");

	T* aux = vector[pos];

	for (unsigned int i = 0; i < CA - 1; i++)
	{
		vector[i] = vector[i + 1];
	}

	vector[CA - 1] = NULL;
	CA--;
	return aux;
}


template<class T>
inline bool cListaT<T>::IsDeleting()
{
	return eliminado;
}

template<class T>
void cListaT<T>::Eliminar(string clave) {

	unsigned int pos = getItemPos(clave);

	if (pos < CA)
		Eliminar(pos);


}

template<class T>
T* cListaT<T>::BuscarItem(T* obj)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (vector[i] == obj)
			return vector[i];
	}
	return NULL;
}

template<class T>
T* cListaT<T>::BuscarItem(string clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (*vector[i] == clave)
			return vector[i];
	}
	return NULL;
}

template<class T>
T* cListaT<T>::getItem(unsigned int pos)
{
	if (pos < CA)
		return vector[pos];
	else return NULL;
}
template<class T>
unsigned int cListaT<T>::getItemPos(string clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (*vector[i] == clave)
			return i;
	}

	return INT_MAX;
}

template<class T>
template<class B>
inline T* cListaT<T>::BuscarPorTipo(string clave)
{
	for (int i = 0; i < CA; ++i) {
		if (dynamic_cast<B*>(vector[i]) != NULL) {
			if (*vector[i] == clave)
				return vector[i];
		}
	}
	return NULL;
}

template<class T>
template<class B>
inline T* cListaT<T>::BuscarPorTipo(int offset)
{
	int contador=0;
	for (int i =0; i < CA; ++i) {
		if (dynamic_cast<B*>(vector[i]) != NULL) {
			if(contador==offset)
				return vector[i];
			contador++;
		}
	}
	return NULL;
}
