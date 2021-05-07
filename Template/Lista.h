#pragma once

#pragma once

#pragma once
#define NMAX 10

#include <string>

using namespace std;
template<class T>
class Lista
{
protected:
	T** vector;
	unsigned int CA, TAM;
	bool EliminarContenido;

	void Redimensionalizar();
public:
	Lista(unsigned int TAM = NMAX, bool EliminarContenido = true);
	~Lista();

	bool AgregarItem(T* item);
	bool AgregarItemOrdenado(const T* item);

	T* Quitar(string clave);
	T* Quitar(T* item);
	T* QuitarenPos(unsigned int pos);

	void Eliminar(string clave);
	void Eliminar(T* item);
	void Eliminar(unsigned int pos);

	void Listar();

	template<class C>
	T* BuscarItem(C clave);

	T* BuscarItem(T* item);
	T* getItem(unsigned int pos);
	T* operator[](unsigned int pos);


	unsigned int getItemPos(string clave);
	unsigned int getItemPos(T* item);

	unsigned int getCA();
	unsigned int getTAM();
};

template<class T>
unsigned int Lista<T>::getTAM()
{
	return TAM;
}
template<class T>
unsigned int Lista<T>::getCA()
{
	return CA;
}
///////////
template<class T>
void Lista<T>::Redimensionalizar()
{
}


template<class T>
Lista<T>::Lista(unsigned int TAM, bool EliminarContenido)
{
	this->EliminarContenido = EliminarContenido;
	vector = new T * [TAM];
	for (unsigned int i = 0; i < TAM; i++)
	{
		vector[i] = NULL;
	}

	this->TAM = TAM;
	CA = 0;


}

template<class T>
T* Lista<T>::operator[](unsigned int pos) {
	return getItem(pos);
}


template<class T>
Lista<T>::~Lista()
{
	if (vector != NULL)
	{
		if (EliminarContenido) 
		{
			for (unsigned int i = 0; i < CA; i++)
			{
				if (vector[i] != NULL)
					delete vector[i];
			}
		}
		delete[] vector;
	}


}

template<class T>
void Lista<T>::Listar()
{

	for (unsigned int i = 0; i < CA; i++)
	{
		//vector[i]->Imprimir();// SOBRECARGA DEL COUT
	}
}

template<class T>
bool Lista<T>::AgregarItem(T* item)
{

	T* i_f = BuscarItem(item);
	if (i_f != NULL)throw new exception("Ya se encuentra en la lista");

	if (CA < TAM)
		vector[CA++] = item;
	else throw new exception("No hay tama�o suficiente para agregar el item");;
	return true;
}

template<class T>
bool Lista<T>::AgregarItemOrdenado(const T* item)
{
	/*for (unsigned int i = 0; i < CA; i++)
	{
	if (vector[i]->getclave() == clave)
	return vector[i];
	}
	*/
	return false;
}
template<class T>
T* Lista<T>::Quitar(string clave) {

	unsigned int pos = getItemPos(clave);
	if (pos >= CA)return NULL;
	return QuitarenPos(pos);

}
template<class T>
T* Lista<T>::Quitar(T* item) {
	unsigned int pos = getItemPos(item);
	if (pos >= CA)return NULL;
	return QuitarenPos(pos);
}
template<class T>
T* Lista<T>::QuitarenPos(unsigned int pos) {

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
void Lista<T>::Eliminar(string clave) {

	unsigned int pos = getItemPos(clave);

	if (pos < CA)
		Eliminar(pos);
	//sino algo

}
template<class T>
void Lista<T>::Eliminar(T* item) {

	Eliminar(getItemPos(item));
}
template<class T>
void Lista<T>::Eliminar(unsigned int pos) {
	if (pos >= CA)return;// o Throw no pude eliminar

	T* dato = QuitarenPos(pos);

	if (dato != NULL)
		delete dato;
	else
	{
		throw new exception("no encontrado");
	}
}

template<class T>
template<class C>
T*  Lista<T>::BuscarItem(C clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if ((*vector[i]) == clave)
			return vector[i];
	}
	return NULL;
}

template<class T>
T* Lista<T>::BuscarItem(T* item)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if ((*vector[i]) == (*item))
			return vector[i];
	}
	return NULL;
}

template<class T>
T* Lista<T>::getItem(unsigned int pos)
{
	if (pos < CA)
		return vector[pos];
	else return NULL;
}
template<class T>
unsigned int Lista<T>::getItemPos(string clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if ((*vector[i]) == clave)
			return i;
	}

	return INT_MAX;
}

template<class T>
unsigned int Lista<T>::getItemPos(T* item)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if ((*vector[i]) == (*item))
			return i;
	}

	return INT_MAX;
}

