#include "Logger.h"
#include <iostream>
#include <string>

using namespace std;
int main(int argc, char* argv[]) {
	Logger logger;
	logger.Registrar("Inicializacion del programa " + string(argv[0]));
	logger.Registrar("Pude registrar!");
	logger.Listar();

}
