#include "Lannister.h"

Lannister::~Lannister()
{
	for(int i = 0; i < ejercito.size(); i++)
	{
		delete ejercito[i];
	}
	ejercito.clear();
}
