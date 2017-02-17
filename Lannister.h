#include <iostream>
#include <string>
#include <vector>
#include "GuardiaReal.h"

using namespace std;

#ifndef LANNISTER_H
#define LANNISTER_H

class Lannister
{
	public:
		Lannister();		

		string jefe;
		string animalEmblema;
		string lema;
		vector<GuardiaReal> ejercitos;
		int dinero;
		string fuerzaMontana;
		int integrantes;

		bool setLannister();
        void addEjercito();
        void removeEjercito();
        void listEjercitos();
        void modiEjercito();

		~Lannister();
};

#endif
