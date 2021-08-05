
#include <iostream>
#include <string>
#include "Persona.h"
#include "Lista.h"
using namespace std;
#include "Funciones.h"

void main() {
	int a = 5;
	int b = 6;
	float c = 5.5;
	string j = "aa";
	string jj = "ab";

	int max_1 = Maximo<int, int>(a, b);
	float max_f = Maximo<float, int>(c, b);
	int max_2 = Maximo<int, float>(a, c);
	string max_str = Maximo<string, string>(j, jj);


	Persona* p1 = new Persona("1", "A", "B", 20);
	Persona* p2 = new Persona("2", "B", "C", 36);
	Persona* aux = NULL;

	aux = &Maximo<Persona, Persona>(*p1, *p2);

	aux = &Maximo<Persona>(*p1, *p2);

	Lista<Persona> lista(50,false);
	lista.AgregarItem(p1);
	lista.AgregarItem(p2);
	lista.AgregarItem(new Persona("8", "asda", "C", 88));


	aux = lista.BuscarItem<int>(20);

	aux = lista.BuscarItem<string>("2");

	aux = lista.BuscarItem<string>("asda");

	aux = lista.BuscarItem<cb_DNI>(cb_DNI("40395069"));

	aux = lista.BuscarItem<cb_Apellido>(cb_Apellido("C"));

	delete p1;
	delete p2;
}