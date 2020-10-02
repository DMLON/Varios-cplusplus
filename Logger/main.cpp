#include "Logger.h"
#include <iostream>
#include <string>

using namespace std;
int main(int argc, char* argv[]) {
	Logger logger;
	logger.Registrar("Inicializacion del programa " + string(argv[0]));
	logger.Registrar("Pude registrar!");
	//cLista<Log> listaLogs;

	//listaLogs.AgregarItem(new Log("Funciona bien"));

	//listaLogs.AgregarItem(new Log("Funciona bien jeje"));

	//for (int i = 0; i < listaLogs.getCA(); ++i) {
	//	cout << listaLogs.getItem(i)->to_string()<<endl;
	//}
	logger.Listar();

}
