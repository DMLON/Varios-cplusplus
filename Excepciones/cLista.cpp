#include "cLista.h"
#include "cPaciente.h"

unsigned int ListaPacientes::getTAM()
{
	return TAM;
}

unsigned int ListaPacientes::getCA()
{
	return CA;
}


ListaPacientes::ListaPacientes(unsigned int TAM)
{
	vector = new cPaciente * [TAM];
	for (unsigned int i = 0; i < TAM; i++)
	{
		vector[i] = NULL;
	}
	this->TAM = TAM;
	CA = 0;
}

ListaPacientes::~ListaPacientes()
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


void ListaPacientes::Listar()
{

	for (unsigned int i = 0; i < CA; i++)
	{
		//vector[i]->Imprimir();// imprimir
	}
}

#include "InListException.h"
bool ListaPacientes::AgregarItem(cPaciente* item)
{

	cPaciente* i_f = BuscarItem(item->getclave());
	if (i_f == NULL)throw new InListException(item->getclave(),true);

	if (CA < TAM)
		vector[CA++] = item;
	else throw new exception("No hay tamano suficiente para agregar el item");;
	return true;
}


cPaciente* ListaPacientes::Quitar(string clave) {

	unsigned int pos = getItemPos(clave);
	if (pos >= CA)return NULL;
	return QuitarenPos(pos);

}

cPaciente* ListaPacientes::Quitar(cPaciente* item) {
	unsigned int pos = getItemPos(item->getclave());
	if (pos >= CA)return NULL;
	return QuitarenPos(pos);
}

cPaciente* ListaPacientes::QuitarenPos(unsigned int pos) {

	if (pos >= CA)throw new exception("Posicion invalida");

	cPaciente* aux = vector[pos];

	for (unsigned int i = 0; i < CA - 1; i++)
	{
		vector[i] = vector[i + 1];
	}

	vector[CA - 1] = NULL;
	CA--;
	return aux;
}



void ListaPacientes::Eliminar(string clave) {

	unsigned int pos = getItemPos(clave);

	if (pos < CA)
		Eliminar(pos);
}

void ListaPacientes::Eliminar(cPaciente* item) {

	Eliminar(item->getclave());
}

void ListaPacientes::Eliminar(unsigned int pos) {
	if (pos >= CA)return;

	cPaciente* dato = QuitarenPos(pos);

	if (dato != NULL)
		delete dato;
	else
	{
		throw new exception("no encontrado");
	}
}


cPaciente* ListaPacientes::BuscarItem(string clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (vector[i]->getclave() == clave)
			return vector[i];
	}
	return NULL;
}


cPaciente* ListaPacientes::getItem(unsigned int pos)
{
	if (pos < CA)
		return vector[pos];
	else return NULL;
}

unsigned int ListaPacientes::getItemPos(string clave)
{
	for (unsigned int i = 0; i < CA; i++)
	{
		if (vector[i]->getclave() == clave)
			return i;
	}

	return INT_MAX;
}

