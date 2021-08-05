#pragma once
#define NMAX 10

#include <string>
class cPaciente;
using namespace std;
class ListaPacientes
{
protected:
	cPaciente** vector;
	unsigned int CA, TAM;

public:
	ListaPacientes(unsigned int TAM = NMAX);
	~ListaPacientes();

	bool AgregarItem(cPaciente* item);

	cPaciente* Quitar(string clave);
	cPaciente* Quitar(cPaciente* item);
	cPaciente* QuitarenPos(unsigned int pos);

	void Eliminar(string clave);
	void Eliminar(cPaciente* item);
	void Eliminar(unsigned int pos);

	void Listar();
	cPaciente* BuscarItem(string clave);
	cPaciente* getItem(unsigned int pos);

	unsigned int getItemPos(string clave);

	unsigned int getCA();
	unsigned int getTAM();
};

