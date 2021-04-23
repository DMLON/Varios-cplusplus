#pragma once
#include <string>
using namespace std;
class cPaciente
{
	string DNI;
public: 
	cPaciente(string DNI);
	string getclave() { return DNI; };
};

