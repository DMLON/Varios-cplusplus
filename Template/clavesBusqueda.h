#pragma once

#include <string>
using namespace std;
class cb_DNI {
	friend class Persona;
	string DNI;
public:
	cb_DNI(string DNI) { this->DNI = DNI; }
};


class cb_Apellido {
	friend class Persona;
	string Apellido;
public:
	cb_Apellido(string clave) { this->Apellido = clave; }
};