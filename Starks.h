#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef STARKS_H
#define STARKS_H

class Starks
{
	public:
		Starks();
		string jefe;
		int cantidadLobos;
		string animalEmblema;
		string lema;
		vector<PeqFamiliaisN> ejercitos;
		string gMasValioso;
		int integrantes;

		bool setStarks();
		void addEjercito();
		void removeEjercito();
		void listEjercitos();
		void modiEjericto();
		
		~Starks();
};

#endif
