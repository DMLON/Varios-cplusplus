#include "Globals.h"

cLista<Ciudad>* Ciudades_global;
void Poblacionar_Ciudades()
{
	Ciudades_global = new cLista<Ciudad>();
	Ciudades_global->AgregarItem(new Ciudad("Buenos aires", 2000000, -55, -52));
	Ciudades_global->AgregarItem(new Ciudad("Buenos aires1", 2000000, -55, -52));
	Ciudades_global->AgregarItem(new Ciudad("Buenos aires2", 2000000, -55, -52));
	Ciudades_global->AgregarItem(new Ciudad("Buenos aires3", 2000000, -55, -52));
	Ciudades_global->AgregarItem(new Ciudad("Buenos aires4", 2000000, -55, -52));
	Ciudades_global->AgregarItem(new Ciudad("Buenos aires5", 2000000, -55, -52));
}
