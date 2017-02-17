#include "Targaryen.h"

Targaryen::Targaryen()
{
	reina = "";
}

bool Targaryen::setTargaryen()
{
    if(reina != "")
        return true;

    cout << "Ingrese:"
    //Ingresar
    <<      "Reina: ";
    cin >> reina;
    cout << "Animal Emblema: ";
    cin >> animalEmblema;
    cout << "Lema: ";
    cin >> lema;
    cout << "Guerro mas valioso: ";
    cin >> gMasValioso;
    cout << "Dragones: ";
    cin >> dragones;
	cout << "Barcos:";
	cin >> barcos;

    return false;
}

void Targaryen::addEjercito()
{
    Dohtraki ejercito;
    cout << "Ingrese:"
    <<      "Nombre: ";
    cin >> ejercito.nombre;
    cout << "Jefe: ";
    cin >> ejercito.jefe;
    cout << "Nombre del caballo: ";
    cin >> ejercito.nombreCaballo
    cout << "Color del caballo: ";
    cin >> ejercito.colorCaballo;
    cout << "Ataque: ";
    cin >> ejercito.atk;
    cout << "Defensa: ";
    cin >> ejercito.def;
    
    ejercitos.push_back(ejercito);
}

void Targaryen::removeEjercito()
{
    int i;

    cout << "Indice a eliminar";
    cin >> i;

    if(i >= ejercitos.size())
        ejercitos.remove(ejercitos.begin() + i);
    else
        cout << "No existe ese ejercito\n";
}

Targaryen::listEjercitos()
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
		Dohtraki* ejercito = &ejercitos[i];
		
		cout << "Ingrese:"
 	  	<<      "Nombre: ";
   		cin >> ejercito.nombre;
    	cout << "Jefe: ";
    	cin >> ejercito.jefe;
   		cout << "Nombre del caballo: ";
    	cin >> ejercito.nombreCaballo
    	cout << "Color del caballo: ";
    	cin >> ejercito.colorCaballo;
    	cout << "Ataque: ";
    	cin >> ejercito.atk;
    	cout << "Defensa: ";
    	cin >> ejercito.def;
	

    }else
        cout << "No existe ese ejercito\n";
}

Targaryen::~Targaryen()
{
}
