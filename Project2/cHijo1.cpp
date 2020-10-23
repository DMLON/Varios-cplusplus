#include "cHijo1.h"

cHijo1::cHijo1(int edad, string nombre):cPadre(edad,nombre)
{
}

void cHijo1::HacerAlgo()
{
	nombre += "batatita";
}
