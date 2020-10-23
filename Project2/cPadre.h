#pragma once
#include <string>
using namespace std;
class cPadre
{
protected:
	int edad;
	string nombre;
public:
	cPadre(int edad, string nombre);
	virtual ~cPadre();
	virtual void HacerAlgo()=0;
	bool operator==(string clave);
	virtual string to_string();
};

