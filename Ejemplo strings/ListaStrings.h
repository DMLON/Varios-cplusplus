#pragma once

#include <string>
using namespace std;
class ListaStrings
{
protected:
	string** vector;
	unsigned int CA, TAM;
public:
	ListaStrings(unsigned int TAM = 500);
	~ListaStrings();

	bool AgregarItem(string* item);

	string* QuitarenPos(unsigned int pos);

	void Listar();
	string* getItem(unsigned int pos);

	unsigned int getItemPos(string clave);

	unsigned int getCA();
	unsigned int getTAM();
};