#pragma once
#include "cLista.h"
#include "Log.h"
#include <iostream>
#include <string>
using namespace std;

class Logger : protected cLista<Log>
{
public:
	//Agregar
	//Listar
	//Guardar_archivo xxxx.log
	Logger(int Nmax = NMAX);
	virtual ~Logger() {

	}
	
	void Registrar(Log* log) {
		AgregarItem(log);
	}

	void Registrar(string descripcion) {
		AgregarItem(new Log(descripcion));
	}
	void Listar() {
		for (int i = 0; i < CA; ++i)
			cout << vector[i]->to_string() << endl;
	}

};

