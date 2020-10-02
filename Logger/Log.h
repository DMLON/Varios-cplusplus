#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <string>
#include <ctime>
using namespace std;
class Log
{
	string descripcion;
	time_t Timestamp;

public:
	string to_string() {
		string retornar = "";
		char* dt = ctime(&Timestamp); //Sat Jan  8 20:07:41 2011
		string tiempo = string(dt);
		retornar = tiempo.substr(0, tiempo.length()-1) + " - " + descripcion;
		return retornar;
	}
	string getclave() { return descripcion; }
	Log(string descripcion, time_t Timestamp = time(0));
};



/*
* Herencia protected
clase padre -> clase derivada
private -> privado
protected -> protected (puedo acceder)
public -> protected


*/