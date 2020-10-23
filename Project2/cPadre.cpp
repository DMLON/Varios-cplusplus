#include "cPadre.h"

cPadre::cPadre(int edad, string nombre)
{
	this->edad=edad;
	this->nombre=nombre;
}

cPadre::~cPadre()
{
}

bool cPadre::operator==(string clave)
{
	return nombre==clave;
}

string cPadre::to_string()
{
	return nombre + "- Edad: "+std::to_string(edad) ;
}
