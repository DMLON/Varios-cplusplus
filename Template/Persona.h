#pragma once
#include <iostream>
#include <string>
#include "clavesBusqueda.h"

using namespace std;

class Persona
{
	int Edad;
	string DNI;
	string Nombre;
	string Apellido;

public:
	Persona(string DNI, string Nombre, string Apellido, int Edad);
	bool operator>(Persona& persona2) {
		return this->Edad > persona2.Edad;
	}
	Persona& operator=(Persona& otro) {
		this->Edad = otro.Edad;
		this->DNI = otro.DNI;
		this->Apellido = otro.Apellido;
		this->Nombre = otro.Nombre;
	}

	bool operator==(string clave) { 
		if (clave == DNI)
			return true;
		if (clave == Nombre)
			return true;
		if (clave == Apellido)
			return true;
		return false;
	}


	bool operator==(int clave) {
		return Edad == clave;
	}
	bool operator==(Persona& persona) { return DNI == persona.DNI; }
	bool operator==(cb_DNI& DNI) { return this->DNI == DNI.DNI; }
	bool operator==(cb_Apellido& Apellido) { return this->Apellido == Apellido.Apellido; }

};


