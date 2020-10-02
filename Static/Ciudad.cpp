#include "Ciudad.h"

cLista<Ciudad> Ciudad::Lista_Ciudades;
bool Ciudad::Lista_Ciudades_Poblacionada = false;

Ciudad::Ciudad(string nombre, int poblacion, float latitud, float longitud)
{
	this-> nombre	=nombre;
	this->poblacion	=poblacion;
	this->latitud	=latitud;
	this->longitud = longitud;

	//forma 2
#ifdef FORMA_2
	Lista_Ciudades.AgregarItem(this);
#endif
}

Ciudad::~Ciudad()
{
	//Si elimino una ciudad, la saco de la lista, LA SACO, NO LA ELIMINO
	//No la elimino porque ya la estoy eliminando, estoy dentro del destructor

	//En el caso que esté eliminando la lista no es necesario llamar a quitar
	//Esta linea se ejecuta solamente si estoy eliminando una ciudad desde otro lado
	if(!Lista_Ciudades.IsDeleting())
		Lista_Ciudades.Quitar(this);
}

string Ciudad::to_string()
{
	return nombre + ", Poblacion: " + ::to_string(poblacion) + ", Lat: " + ::to_string(latitud) + ", Long:" + ::to_string(longitud);
}

cLista<Ciudad>& Ciudad::getLista_Ciudades()
{
	return Lista_Ciudades;
}

#ifdef FORMA_1
#ifndef FORMA_2
void Ciudad::Poblacionar_lista()
{
	if (!Lista_Ciudades_Poblacionada) {
		Lista_Ciudades.AgregarItem(new Ciudad("Buenos aires", 2000000, -55, -52));
		Lista_Ciudades.AgregarItem(new Ciudad("Buenos aires1", 2000000, -55, -52));
		Lista_Ciudades.AgregarItem(new Ciudad("Buenos aires2", 2000000, -55, -52));
		Lista_Ciudades.AgregarItem(new Ciudad("Buenos aires3", 2000000, -55, -52));
		Lista_Ciudades.AgregarItem(new Ciudad("Buenos aires4", 2000000, -55, -52));
		Lista_Ciudades.AgregarItem(new Ciudad("Buenos aires5", 2000000, -55, -52));
		//El bool es para que se puede llamar una sola vez al metodo
		Lista_Ciudades_Poblacionada = true;
	}
}
#endif // !FORMA_2
#endif