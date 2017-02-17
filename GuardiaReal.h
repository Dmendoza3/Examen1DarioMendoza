#include <iostream>
#include <string>

using namespace std;

#ifndef GUARDIA_H
#define GUARDIA_H

class GuardiaReal
{
	public:
		GuardiaReal();
		string nombre;
		int edad;
		char tipoSoldado;
		double atk;
		double def;
};

#endif
