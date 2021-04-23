#include <iostream>
using namespace std;
#include <stdlib.h>
#include <time.h>

#include "Lista.h"
#include "cCiudad.h"
#include "Defines.h"
#include "ListaStrings.h"


int main()
{
	srand(time(NULL));

	//Lista de strings, e ir sacando los items
	ListaStrings listastr(N_CIUDADES_GLOBAL);
	for (int i = 0; i < N_CIUDADES_GLOBAL; ++i)
		listastr.AgregarItem(&CiudadesGlobal[i]);

	Lista_ciudades Listita(20);
	for (int i = 0; i < 20; i++)
	{
		try {
			Listita.AgregarItem(new cCiudad(
				*listastr.QuitarenPos(rand() % listastr.getCA()),
				(rand() % 360000 - 180000) / 1000.0f,
				(rand() % 360000 - 180000) / 1000.0f,
				rand() % 100000 + 100000));
		}
		catch (exception* ex) {
			cout << ex->what() << endl;
			delete ex;
		}
	}
	
	Listita.Listar();

}

//Quitar, eliminar, buscar, agregar
//GetPost
//Listar

