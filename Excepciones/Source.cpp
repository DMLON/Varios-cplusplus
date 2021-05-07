
#include <iostream>
#include <string>
#include "cHospital.h"
#include <windows.h>   // WinApi header

#include "InListException.h"

using namespace std;


class A {
protected:
	int a;
	virtual void test() { cout << "hola"; };
};

class B : public A {
	int b;
	
};

class C : public A {
	int c;
};

class D : public A {
	int d;
};


int main() {

	cHospital* hospital = new cHospital();
	try {
		hospital->AgregarPaciente(new cPaciente("40395069"));
	}
	catch (exception* e) {
		system("color 2");
		//0 = Black 8 = Gray
		//1 = Blue 9 = Light Blue
		//2 = Green a = Light Green
		//3 = Aqua b = Light Aqua
		//4 = Red c = Light Red
		//5 = Purple d = Light Purple
		//6 = Yellow e = Light Yellow
		//7 = White f = Bright White
		cout << e->what() << endl;
		delete e;
	}

	A* a1 = new B();
	A* a2 = new C();
	A* a3 = new D();

	int adsas = (int)0.5;

	if (dynamic_cast<B*>(a1) != NULL) {
		B* aux = dynamic_cast<B*>(a1);
		cout << "Era B";
	}
	if (dynamic_cast<C*>(a1) != NULL) {
		C* aux = dynamic_cast<C*>(a1);
		cout << "Era C";
	}
	if (dynamic_cast<D*>(a1) != NULL) {
		D* aux = dynamic_cast<D*>(a1);
		cout << "Era D";
	}
}