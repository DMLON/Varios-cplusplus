
//Hay 2 formas de hacerlo:
//1) La primera es hacer un metodo static que simplemente poblacione la lista de ciudades con ciudades random
//2)La segunda es que cada vez que se llama el constructor de Ciudad, se agrega la ciudad a la lista static,
//	de esta forma tengo que crear las ciudades EN EL MAIN
//  DEBO CONSIDERAR QUE SI SE USA EL METODO 2, DEBO TENER CUIDADO SOBRE QUIEN ELIMINA LAS CIUDADES
//  SI SETEO QUE LA LISTA NO ELIMINE, ENTONCES DEBO ELIMINAR LAS CIUDADES POR MI CUENTA EN EL MAIN
//  CASO CONTRARIO NO ES NECESARIO

//Comentar o descomentar cada define dentro de Defines.h para probarlo

#include "Defines.h"
#include "Ciudad.h"
#include <iostream>
using namespace std;

int main() {
#ifdef FORMA_1
#ifndef FORMA_2
	//Poblaciono
	Ciudad::Poblacionar_lista();
	//Obtengo una ciudad
	Ciudad* ciudad_ej = Ciudad::getLista_Ciudades().BuscarItem("Buenos Aires");

	//delete ciudad_ej;
	Ciudad::getLista_Ciudades().Listar();

	//Ejemplo si se me ocurre agregar otra lista
	Ciudad::getLista_Ciudades().AgregarItem(new Ciudad("La Plata", 546546, -52, -60));

	//En este caso si yo quisiera agregar una lista nueva debo hacerlo desde el getLista
	Ciudad::getLista_Ciudades().Listar();


#endif // !FORMA_2
#endif // FORMA_1

#ifdef FORMA_2
#ifndef FORMA_1
	//Uso un puntero para simplemente generar ciudades, acá lo estoy pisando constantemente porque yo SE que se 
	//está guardando dentro de la lista static, tener mucho cuidado con esto y COMENTARLO siempre que se haga
	//Sino uno se puede olvidar que lo está haciendo y empiezan los problemas de memoria
	//Por eso mismo yo recomiendo la forma1, es un poco más intuitiva que hacer new de la nada
	Ciudad* ptr_helper;
	ptr_helper = new Ciudad("Buenos aires", 2000000, -55, -52);
	ptr_helper = new Ciudad("Buenos aires1", 2000000, -55, -52);
	ptr_helper = new Ciudad("Buenos aires2", 2000000, -55, -52);
	ptr_helper = new Ciudad("Buenos aires3", 2000000, -55, -52);
	ptr_helper = new Ciudad("Buenos aires4", 2000000, -55, -52);
	ptr_helper = new Ciudad("Buenos aires5", 2000000, -55, -52);

	delete ptr_helper;
	//Utilizo la lista sin más
	Ciudad* ciudad_ej = Ciudad::getLista_Ciudades().BuscarItem("Buenos Aires");

	Ciudad::getLista_Ciudades().Listar();

	//En este caso si yo quisiera agregar una lista nueva debo hacerlo desde new con un puntero helper
#endif // !FORMA_1
#endif // FORMA_2

#ifdef FORMA_1
#ifdef FORMA_2
	for(int i=0;i<100;++i)
		cout << "Activa solo una forma, no actives las 2 al mismo tiempo" << endl;
	int a;
	cin>>a;
#endif // FORMA_2
#endif // FORMA_1


	/*
	cLista<Ciudad> listita(5);
	listita.AgregarItem(new Ciudad("Buenos aires", 2000000, -55, -52));


	try {
		listita.AgregarItem(new Ciudad("Buenos aires", 2000000, -55, -52));
	}
	catch (exception* ex) {
		cerr << ex->what() << endl;
	}
	catch (...) {
		cerr << "Error generico";
	}

	for (int i = 0; i < 10; ++i) {
		try {
			listita.AgregarItem(new Ciudad("Buenos aires"+to_string(i), 2000000, -55, -52));
		}
		catch (exception* ex) {
			cerr << ex->what()<< ", En pos: "<< i << endl;
		}
	}
	*/
	string a;
	cin >> a;
}
