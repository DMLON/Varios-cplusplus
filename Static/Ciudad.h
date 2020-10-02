#pragma once
#include <string>
#include <iostream>
#include "cLista.h"
#include "Defines.h"
using namespace std;

class Ciudad
{
	string nombre;
	int poblacion;
	float latitud;
	float longitud;
	static cLista<Ciudad> Lista_Ciudades;
	static bool Lista_Ciudades_Poblacionada;
public:
	Ciudad(string nombre,
		int poblacion,
		float latitud,
		float longitud);
	string getclave() {
		return nombre;
	}

	//Muy importante utilizar correctamente el destructor
	~Ciudad();

	string to_string();
	void Imprimir() {
		cout << to_string() << endl;
	}

	static cLista<Ciudad>& getLista_Ciudades();
	//Forma 1
#ifdef FORMA_1
#ifndef FORMA_2
	static void Poblacionar_lista();
#endif // !FORMA_2
#endif
	//Forma 2, ver constructor
};

