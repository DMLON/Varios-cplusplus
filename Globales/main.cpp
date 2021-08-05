#include "Globals.h"

int main() {
	Poblacionar_Ciudades();
	Ciudad* c1 = Ciudades_global->BuscarItem("Buenos aires");
	delete c1;
}