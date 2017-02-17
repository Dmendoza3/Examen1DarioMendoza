#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef TARGARYEN_H
#define TARGARYEN_H

class Targaryen
{
	public:
		string reina;
		string animalEmblema;
		string lema;
		int dragones;
		vector<Dohtraki*> ejercito;
		int barcos;
		~Targaryen();
};

#endif
