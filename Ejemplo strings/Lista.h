#pragma once
#define NMAX 10

#include <string>
class cCiudad;
using namespace std;
class Lista_ciudades
{
protected:
	cCiudad** vector;
	unsigned int CA, TAM;


	void Redimensionalizar();
public:
	Lista_ciudades(unsigned int TAM = NMAX);
	~Lista_ciudades();

	bool AgregarItem(cCiudad* item);
	bool AgregarItemOrdenado(const cCiudad* item);

	cCiudad* Quitar(string clave);
	cCiudad* Quitar(cCiudad* item);
	cCiudad* QuitarenPos(unsigned int pos);

	void Eliminar(string clave);
	void Eliminar(cCiudad* item);
	void Eliminar(unsigned int pos);

	void Listar();
	cCiudad* BuscarItem(string clave);
	cCiudad* getItem(unsigned int pos);

	unsigned int getItemPos(string clave);

	unsigned int getCA();
	unsigned int getTAM();
};

