#include "Ciudad.h"

Ciudad::Ciudad(string nombre, int poblacion, float latitud, float longitud)
{
	this-> nombre	=nombre;
	this->poblacion	=poblacion;
	this->latitud	=latitud;
	this->longitud = longitud;
}

string Ciudad::to_string()
{
	return nombre + ", Poblacion: " + ::to_string(poblacion) + ", Lat: " + ::to_string(latitud) + ", Long:" + ::to_string(longitud);
}
