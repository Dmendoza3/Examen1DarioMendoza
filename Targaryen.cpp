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
    cin >> ejercito.nombreCaballo;
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

    if(i < ejercitos.size())
        ejercitos.erase(ejercitos.begin() + i);
    else
        cout << "No existe ese ejercito\n";
}

void Targaryen::listEjercitos()
{
    for(int i = 0; i < ejercitos.size(); i++)
    {
        cout <<"Ejercito " << i << ": " << ejercitos[i].nombre << endl;
    }
}

void Targaryen::modiEjercito()
{
    int i;

    cout << "Indice a modificar";
    cin >> i;

    if(i < ejercitos.size()){
		Dohtraki* ejercito = &ejercitos[i];
		
		cout << "Ingrese:"
 	  	<<      "Nombre: ";
   		cin >> ejercito->nombre;
    	cout << "Jefe: ";
    	cin >> ejercito->jefe;
   		cout << "Nombre del caballo: ";
    	cin >> ejercito->nombreCaballo;
    	cout << "Color del caballo: ";
    	cin >> ejercito->colorCaballo;
    	cout << "Ataque: ";
    	cin >> ejercito->atk;
    	cout << "Defensa: ";
    	cin >> ejercito->def;
	

    }else
        cout << "No existe ese ejercito\n";
}

double Targaryen::getProAtk()
{
	double totAtk = 0.0;
	for(int i = 0; i < ejercitos.size(); i++)
	{
		totAtk += ejercitos[i].atk;
	}
	
	double proAtk = totAtk / ejercitos.size();
		
	return proAtk;
}

double Targaryen::getProDef()
{
	
	double totDef = 0.0;
	for(int i = 0; i < ejercitos.size(); i++)
	{
		totDef += ejercitos[i].def;
	}
	
	double proDef = totDef / ejercitos.size();
		
	return proDef;
}

Targaryen::~Targaryen()
{
}
