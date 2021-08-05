#include "ListaStrings.h"

unsigned int ListaStrings::getTAM()
{
	return TAM;
}

unsigned int ListaStrings::getCA()
{
	return CA;
}
///////////


ListaStrings::ListaStrings(unsigned int TAM)
{
	vector = new string * [TAM];
	for (unsigned int i = 0; i < TAM; i++)
	{
		vector[i] = NULL;
	}
	this->TAM = TAM;
	CA = 0;
}

ListaStrings::~ListaStrings()
{
	if (vector != NULL)
	{
		delete[] vector;
	}


}


bool ListaStrings::AgregarItem(string* item)
{
	if (CA < TAM)
		vector[CA++] = item;
	else throw new exception("No hay tamaño suficiente para agregar el item");;
	return true;
}

string* ListaStrings::QuitarenPos(unsigned int pos) {

	if (pos >= CA)throw new exception("Posicion invalida");

	string* aux = vector[pos];

	for (unsigned int i = 0; i < CA - 1; i++)
	{
		vector[i] = vector[i + 1];
	}

	vector[CA - 1] = NULL;
	CA--;
	return aux;
}


string* ListaStrings::getItem(unsigned int pos)
{
	if (pos < CA)
		return vector[pos];
	else return NULL;
}

unsigned int ListaStrings::getItemPos(string clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (*vector[i] == clave)
			return i;
	}

	return INT_MAX;
}

