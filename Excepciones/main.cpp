
#include <iostream>
#include <string>
#include "cHospital.h"
#include <windows.h>   // WinApi header

#include "InListException.h"

using namespace std;


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

}