
#include "Ciudad.h"
#include "cLista.h"

int main_2() {
	//cLista<Ciudad>* Lista_ciudades = new cLista<Ciudad>();

	//Ciudad* ciudad_ptr = new Ciudad("test1", 1000, 50, 50);
	//Lista_ciudades->AgregarItem(ciudad_ptr);
	//ciudad_ptr = new Ciudad("test2", 1000, 50, 50);
	//Lista_ciudades->AgregarItem(ciudad_ptr);

	//Lista_ciudades->AgregarItem(new Ciudad("test3", 1000, 50, 50));
	//Lista_ciudades->AgregarItem(new Ciudad("test4", 1000, 50, 50));

	Ciudad::Poblacionar_lista();
	Ciudad::getLista_Ciudades().Listar();
	int a = 5; // ESTATICO
	int* a = new int(5); // DINAMICO

	//static (modificador)
	//variable estatica (sin puntero) vs dinamica (Puntero)
}