#pragma once
#include "cLista.h"
#include "Ciudad.h"

//Declaro como EXTERN la variable global, así sabe el compilador que está definido en algun otro lado
//OTRA FORMA, es en Ciudad.h hacerlo static
extern cLista<Ciudad>* Ciudades_global;
void Poblacionar_Ciudades();