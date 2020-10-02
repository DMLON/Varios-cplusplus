#pragma once
#include <string>
#include <iostream>
using namespace std;

class Ciudad
{
	string nombre;
	int poblacion;
	float latitud;
	float longitud;
public:
	Ciudad(string nombre,
		int poblacion,
		float latitud,
		float longitud);
	string getclave() {
		return nombre;
	}

	string to_string();
	void Imprimir() {
		cout << to_string() << endl;
	}
};

