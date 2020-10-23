#include <iostream>
#include "cLista.h"
#include "cHijo1.h"
#include "cHijo2.h"
using namespace std;
int main() {
	cListaT<cPadre> lista;
	lista.AgregarItem(new cHijo1(5, "a"));
	lista.AgregarItem(new cHijo2(5, "b"));
	lista.AgregarItem(new cHijo1(1, "c"));
	lista.AgregarItem(new cHijo2(8, "d"));
	lista.AgregarItem(new cHijo1(77, "e"));


	cPadre* ptr = lista.BuscarPorTipo<cHijo1>(1);
	if (ptr != NULL) {
		ptr->HacerAlgo();
		cout << ptr->to_string();
	}
}