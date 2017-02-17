#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef LANNISTER_H
#define LANNISTER_H

class Lannister
{
	public:
		string jefeFamilia;
		string animalEmblema;
		string lema;
		vector<GuardiaReal*> ejercito;
		int dinero;
		string fuerzaMontana;
		int integrantes;
		~Lannister();
};

#endif
