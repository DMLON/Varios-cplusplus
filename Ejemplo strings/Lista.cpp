#include "Lista.h"
#include "cCiudad.h"
unsigned int Lista_ciudades::getTAM()
{
	return TAM;
}

unsigned int Lista_ciudades::getCA()
{
	return CA;
}
///////////

void Lista_ciudades::Redimensionalizar()
{
}



Lista_ciudades::Lista_ciudades(unsigned int TAM)
{
	vector = new cCiudad * [TAM];
	for (unsigned int i = 0; i < TAM; i++)
	{
		vector[i] = NULL;
	}
	this->TAM = TAM;
	CA = 0;
}

Lista_ciudades::~Lista_ciudades()
{
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


void Lista_ciudades::Listar()
{

	for (unsigned int i = 0; i < CA; i++)
	{
		vector[i]->Imprimir();// imprimir
	}
}


bool Lista_ciudades::AgregarItem(cCiudad* item)
{

	cCiudad* i_f = BuscarItem(item->getclave());
	if (i_f != NULL)throw new exception("Ya se encuentra en la lista");

	if (CA < TAM)
		vector[CA++] = item;
	else throw new exception("No hay tama�o suficiente para agregar el item");;
	return true;
}


bool Lista_ciudades::AgregarItemOrdenado(const cCiudad* item)
{
	/*for (unsigned int i = 0; i < CA; i++)
	{
	if (vector[i]->getclave() == clave)
	return vector[i];
	}
	*/
	return false;
}

cCiudad* Lista_ciudades::Quitar(string clave) {

	unsigned int pos = getItemPos(clave);
	if (pos >= CA)return NULL;
	return QuitarenPos(pos);

}

cCiudad* Lista_ciudades::Quitar(cCiudad* item) {
	unsigned int pos = getItemPos(item->getclave());
	if (pos >= CA)return NULL;
	return QuitarenPos(pos);
}

cCiudad* Lista_ciudades::QuitarenPos(unsigned int pos) {

	if (pos >= CA)throw new exception("Posicion invalida");

	cCiudad* aux = vector[pos];

	for (unsigned int i = 0; i < CA - 1; i++)
	{
		vector[i] = vector[i + 1];
	}

	vector[CA - 1] = NULL;
	CA--;
	return aux;
}



void Lista_ciudades::Eliminar(string clave) {

	unsigned int pos = getItemPos(clave);

	if (pos < CA)
		Eliminar(pos);
	//sino algo

}

void Lista_ciudades::Eliminar(cCiudad* item) {

	Eliminar(item->getclave());
}

void Lista_ciudades::Eliminar(unsigned int pos) {
	if (pos >= CA)return;// o Throw no pude eliminar

	cCiudad* dato = QuitarenPos(pos);

	if (dato != NULL)
		delete dato;
	else
	{
		throw new exception("no encontrado");
	}
}


cCiudad* Lista_ciudades::BuscarItem(string clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (vector[i]->getclave() == clave)
			return vector[i];
	}
	return NULL;
}


cCiudad* Lista_ciudades::getItem(unsigned int pos)
{
	if (pos < CA)
		return vector[pos];
	else return NULL;
}

unsigned int Lista_ciudades::getItemPos(string clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (vector[i]->getclave() == clave)
			return i;
	}

	return INT_MAX;
}

