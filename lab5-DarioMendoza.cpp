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
		cout << "\t1. Agregar Familia\n"
		<<		"\t2. Agregar ejercito\n"
		<<		"\t3. Listar ejercito\n"
		<< 		"\t4. Modificar ejercito\n"
		<<		"\t5. Eliminar ejercito\n"
		<<		"\t6. Simulacion de batalla\n"
		<<		"\t0. Salir";
		
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
				
				cout << "Familia a modificar ejercito:\n"
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
				
				cout << "Familia a eliminar ejercito:\n"
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
				int familia1;
				int familia2;

				int proAtk1, proAtk2;
				int proDef1, proDef2;

				string famName1, famName2;

				cout << "Primera familia: \n"
				<<		"1. Starks\n"
				<<		"2. Lannister\n"
				<<		"3. Targaryen\n";

				cin >> familia1;
				
				do{
					cout << "Seguna familia:";
					cin >> familia2;
				}while(familia1 == familia2);
				
				if(familia1 < 1 && familia1 > 3 && familia2 < 1 && familia2 > 3)
					break;
				
				switch(familia1)
				{
					case 1:{
						proAtk1 = starks.getProAtk();
						proDef1 = starks.getProDef();
						famName1 = "Starks";
						break;
					}
					case 2:{
						proAtk1 = lannister.getProAtk();
						proDef1 = lannister.getProDef();
						famName1 = "Lannister";
						break;
					}
					case 3:{
						proAtk1 = targaryen.getProAtk();
						proDef1 = targaryen.getProDef();
						famName1 = "Targaryen";
						break;
					}
				}

				switch(familia2)
				{
					case 1:{	
						proAtk2 = starks.getProAtk();
						proDef2 = starks.getProDef();
						famName2 = "Starks";
						break;
					}
					case 2:{
						proAtk2 = lannister.getProAtk();
						proDef2 = lannister.getProDef();
						famName2 = "Lannister";
						break;
					}
					case 3:{
						proAtk2 = targaryen.getProAtk();
						proDef2 = targaryen.getProDef();
						famName2 = "Targaryen";
						break;
					}
				}
				
				int turn = 1;
				while(proDef1 > 0 && proDef2 > 0)
				{
					if(turn == 1)
					{
						proDef2 -= proAtk1;
						cout << "Familia " << famName1 << " ataca causando " << proAtk1  << endl;
						cout << "Familia " << famName2 << " le resta " << proDef2 << " Defensa" << endl;
						turn = 2;
					} else {	
						proDef1 -= proAtk2;
						cout << "Familia " << famName2 << " ataca causando " << proAtk2  << endl;
						cout << "Familia " << famName1 << " le resta " << proDef1 << " Defensa" << endl;
						turn = 1;
					}
					cout << endl << "_____________________________________"<< endl;
				}

				if(proDef1 < 0)
				{
					cout << "Gana la familia " << famName2;
				}
				
				if(proDef2 < 0)
				{
					cout << "Gana la familia " << famName1;
				}
				cout << endl;
				break;
			}
		}
	}
	return 0;
}
