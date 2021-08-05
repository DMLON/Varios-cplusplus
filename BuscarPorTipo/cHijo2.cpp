#include "cHijo2.h"

cHijo2::cHijo2(int edad, string nombre) :cPadre(edad, nombre)
{
}

void cHijo2::HacerAlgo()
{
	edad += 5;
}
