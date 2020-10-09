#pragma once

#include <string>
#include <iostream>
using namespace std;

class cCiudad {
	string Nombre;
	float latitud;
	float longitud;
	unsigned int Poblacion;
public:
	cCiudad(string nombre,float latitud, float longitud, int Poblacion) {
		Nombre = nombre;
		this->latitud = latitud;
		this->longitud = longitud;
		this->Poblacion = Poblacion;
	}
	string getclave() { return Nombre; }
	void Imprimir() {
		cout << Nombre << " - Latitud: " << latitud << " Longitud: " << longitud << " Poblacion:" << Poblacion << endl;
	}
};