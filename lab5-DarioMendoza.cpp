#include "Starks.h"
#include "Lannister.h"
#include "Targaryen.h"

using namespace std;

int main()
{
	Starks starks;
	Lannister lannister;
	Targaryen targaryen;
	
	int menu = 1;
	while (menu != 0)
	{
		cout << "1. Agregar Familia\n"
		<<		"2. Agregar ejercito\n"
		<<		"3. Listar ejercito\n"
		<< 		"4. Modificar ejercito\n"
		<<		"5. Eliminar ejercito\n"
		<<		"6. Simulacion de batalla\n"
		<<		"0. Salir";
		
		cin >> menu;

		switch(op)
		{
			case 1:{
				int op = 0;
				
				cout << "Familia a agregar:\n"
				<<		"1. Starks\n"
				<<		"2. Lannister\n"
				<<		"3. Targaryen\n"
				cin >> op;
			
				switch(op)
				{
					case 1:{
						if(starks.setStarks())
							cout << "Familia ya esta agregada";
						
						break;
					}
					case 2:{	
						if(lannister.setLannister())
							cout << "Familia ya esta agregada";

						break;
					}
					case 3:{
						
						if(targaryen.setTargaryen())
							cout << "Familia ya esta agregada";
						
						break;
					}
				}
				break;
			}
			case 2:{
				
				break;
			}
			case 3:{
				
				break;
			}
			case 4:{
				
				break;
			}
			case 5:{
				
				break;
			}
			case 6:{
				
				break;
			}
		}
	}
	return 0;
}
