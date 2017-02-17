#include <iostream>
#include <string>
#include <vector>

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
		vector<Dohtraki> ejercito;
		int barcos;

		bool setTargaryen();
        void addEjercito();
        void removeEjercito();
        void listEjercitos();
        void modiEjericto();

		~Targaryen();
};

#endif
