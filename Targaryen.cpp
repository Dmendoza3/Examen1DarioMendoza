#include "Targaryen.h"

Targaryen::~Targaryen()
{
	for(int i = 0; i < ejercito.size(); i++)
	{
		delete ejercito[i];
	}
	ejercito.clear();
}
