#include "Starks.h"

Starks::~Starks()
{
	for(int i = 0; i < ejercito.size(); i++)
	{
		delete ejercito[i];
	}
	ejercito.clear();
}
