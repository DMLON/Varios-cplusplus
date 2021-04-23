#pragma once
#include "cLista.h"
#include "cPaciente.h"

class cHospital
{
	ListaPacientes listaPacientes;

public:
	void AgregarPaciente(cPaciente* paciente) {
		//try {
			listaPacientes.AgregarItem(paciente);
		//}
		//catch (exception* ex) {
		//	/*cout << ex->what() << endl;*/
		//	// Tengo un error, yo no soy quien para manejarlo, lo tiro o ni lo agarro
		//	string error = ex->what();
		//	delete ex;
		//	ex = new exception(("Che, hubo un error al agregar paciente al hospital, vino con este error: " + error).c_str());
		//	throw ex;
		//}
	}
};

