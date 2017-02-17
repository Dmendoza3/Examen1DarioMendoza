#include "Lannister.h"

Lannister::Lannister()
{
	jefe = "";
}

Lannister::setLannister()
{
	if(jefe != "")
        return true;

    cout << "Ingrese:"

    //Ingresar
    <<      "Jefe: ";
    cin >> jefe;
    cout << "Animal Emblema: ";
    cin >> animalEmblema;
    cout << "Lema: ";
    cin >> lema;
    cout << "Dinero: ";
    cin >> dinero;
	cout << "Fuerza Montaña: ";
	cin >> fuerzaMontana;
    cout << "Integrantes";
    cin >> integrantes;

    return false;

}

void Lannister::addEjercito()
{
    GuardiaReal ejercito;
    cout << "Ingrese:"
	
    <<      "Nombre: ";
    cin >> ejercito.nombre;
    cout << "Edad: ";
    cin >> ejercito.edad
    cout << "Tipo de soldado: ";
    cin >> ejercito.tipoSoldado;
    cout << "Ataque: ";
    cin >> ejercito.atk;
    cout << "Defensa: ";
    cin >> ejercito.def;

    ejercitos.push_back(ejercito);
}

void Lannister::removeEjercito()
{
    int i;

    cout << "Indice a eliminar";
    cin >> i;

    if(i >= ejercitos.size())
        ejercitos.remove(ejercitos.begin() + i);
    else
        cout << "No existe ese ejercito\n";
}

void Starks::listEjercitos()
{
    for(int i = 0; i < ejercitos.size(); i++)
    {
        cout <<"Ejercito " << i << ": " << ejercitos[i].nombre << endl;
    }
}

void Starks::modiEjericto()
{
    int i;

    cout << "Indice a modificar";
    cin >> i;

    if(i >= ejercitos.size()){
        PeqFamiliaisN* ejercito = &ejercitos[i];
        cout << "Ingrese:"
		
		<<      "Nombre: ";
	    cin >> ejercito.nombre;
		cout << "Edad: ";
   		cin >> ejercito.edad
   		cout << "Tipo de soldado: ";
   		cin >> ejercito.tipoSoldado;
   		cout << "Ataque: ";
   		cin >> ejercito.atk;
   		cout << "Defensa: ";
  		cin >> ejercito.def;
    }else
        cout << "No existe ese ejercito\n";
}


Lannister::~Lannister()
{
	for(int i = 0; i < ejercito.size(); i++)
	{
		delete ejercito[i];
	}
	ejercito.clear();
}
