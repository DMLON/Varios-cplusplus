#pragma once
#include <iostream>
#include <string>
using namespace std;

class InListException :
    public exception
{
private:
    string errorMessage;
    bool printScreen;
public:
    InListException(string key, bool printScreen = false);
    const char* what();
};

