#include "InListException.h"


InListException::InListException(string key, bool printScreen) : 
	exception((key + ": Ya se encuentra en la lista").c_str())
{
	this->printScreen = printScreen;
	errorMessage = (key + ": Ya se encuentra en la lista").c_str();
}

const char* InListException::what()
{
	if (printScreen) {
		system("color 4");
		cout << errorMessage << endl;
		system("color 7");
	}

	return errorMessage.c_str();
}
