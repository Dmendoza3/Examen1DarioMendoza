#include <iostream>
#include <string>
#include <vector>
#include "Dohtraki.h"

using namespace std;

#ifndef TARGARYEN_H
#define TARGARYEN_H

class Targaryen
{
	public:
		Targaryen();
		string reina;
		string animalEmblema;
		string lema;
		int dragones;
		vector<Dohtraki> ejercitos;
		int barcos;

		bool setTargaryen();
        void addEjercito();
        void removeEjercito();
        void listEjercitos();
        void modiEjercito();
	
		double getProAtk();
        double getProDef();	

		~Targaryen();
};

#endif
