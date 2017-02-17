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

		switch(menu)
		{
			case 1:{
				int op = 0;
				
				cout << "Familia a agregar:\n"
				<<		"1. Starks\n"
				<<		"2. Lannister\n"
				<<		"3. Targaryen\n";
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
			}//Case 1

			case 2:{
				if(starks.jefe == "" && lannister.jefe == "" && targaryen.reina == ""){
					cout << "No hay familias agregadas";
					break;
				}
				
				int op = 0;
				
				cout << "Familia a agregar ejercito:\n"
				<<		"1. Starks\n"
				<<		"2. Lannister\n"
				<<		"3. Targaryen\n";
				cin >> op;
				
				switch(op)
				{
					case 1:{
						if(starks.jefe == ""){
							cout << "Familia no agregada";
							break;
						}else{
							starks.addEjercito();
						}
						break;
					}

					case 2:{
						if(lannister.jefe == ""){
							cout << "Familia no agregada";
							break;
						}else{
							lannister.addEjercito();
						}
						break;
					}

					case 3:{
						if(targaryen.reina == ""){
							cout << "Familia no agregada";
							break;
						}else{
							targaryen.addEjercito();
						}
						break;
					}
				}
				break;
			}//Case 2

			case 3:{
				if(starks.jefe == "" && lannister.jefe == "" && targaryen.reina == ""){
					cout << "No hay familias agregadas";
					break;
				}
				
				int op = 0;
				
				cout << "Familia a listar ejercito:\n"
				<<		"1. Starks\n"
				<<		"2. Lannister\n"
				<<		"3. Targaryen\n";
				cin >> op;
				
				switch(op)
				{
					case 1:{
						if(starks.jefe == ""){
							cout << "Familia no agregada";
							break;
						}else{
							starks.listEjercitos();
						}
						break;
					}

					case 2:{
						if(lannister.jefe == ""){
							cout << "Familia no agregada";
							break;
						}else{
							lannister.listEjercitos();
						}
						break;
					}

					case 3:{
						if(targaryen.reina == ""){
							cout << "Familia no agregada";
							break;
						}else{
							targaryen.listEjercitos();
						}
						break;
					}
				}
				break;
			}
			case 4:{	
				if(starks.jefe == "" && lannister.jefe == "" && targaryen.reina == ""){
					cout << "No hay familias agregadas";
					break;
				}
				
				int op = 0;
				
				cout << "Familia a listar ejercito:\n"
				<<		"1. Starks\n"
				<<		"2. Lannister\n"
				<<		"3. Targaryen\n";
				cin >> op;
				
				switch(op)
				{
					case 1:{
						if(starks.jefe == ""){
							cout << "Familia no agregada";
							break;
						}else{
							starks.modiEjercito();
						}
						break;
					}

					case 2:{
						if(lannister.jefe == ""){
							cout << "Familia no agregada";
							break;
						}else{
							lannister.modiEjercito();
						}
						break;
					}

					case 3:{
						if(targaryen.reina == ""){
							cout << "Familia no agregada";
							break;
						}else{
							targaryen.modiEjercito();
						}
						break;
					}
				}
				break;
			}
			case 5:{
				if(starks.jefe == "" && lannister.jefe == "" && targaryen.reina == ""){
					cout << "No hay familias agregadas";
					break;
				}
				
				int op = 0;
				
				cout << "Familia a listar ejercito:\n"
				<<		"1. Starks\n"
				<<		"2. Lannister\n"
				<<		"3. Targaryen\n";
				cin >> op;
				
				switch(op)
				{
					case 1:{
						if(starks.jefe == ""){
							cout << "Familia no agregada";
							break;
						}else{
							starks.removeEjercito();
						}
						break;
					}

					case 2:{
						if(lannister.jefe == ""){
							cout << "Familia no agregada";
							break;
						}else{
							lannister.removeEjercito();
						}
						break;
					}

					case 3:{
						if(targaryen.reina == ""){
							cout << "Familia no agregada";
							break;
						}else{
							targaryen.removeEjercito();
						}
						break;
					}
				}
				break;
			}
			case 6:{
				
				break;
			}
		}
	}
	return 0;
}
