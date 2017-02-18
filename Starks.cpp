#include "Starks.h"

using namespace std;

Starks::Starks()
{
	jefe = "";
}

bool Starks::setStarks()
{	
	if(jefe != "")
		return true;
	cout << "Ingrese:"
	//Ingresar
	<<		"Jefe: ";
	cin >> jefe;
	cout << "Cantidad de lobos: ";
	cin >> cantidadLobos;
	cout << "Animal Emblema: ";
	cin >> animalEmblema;
	cout << "Lema: ";
	cin >> lema;
	cout << "Guerro mas valioso: ";
	cin >> gMasValioso;
	cout << "Integrantes";
	cin >> integrantes;

	return false;
}

void Starks::addEjercito()
{
	PeqFamiliasN ejercito;
	cout << "Ingrese:"
	<<		"Nombre: ";
	cin >> ejercito.nombre;
	cout << "Simbolo: ";
	cin >> ejercito.simbolo;
	cout << "Lema: ";
	cin >> ejercito.lema;
	cout << "Cantidad de personas: ";
	cin >> ejercito.personas;
	cout << "Ataque: ";
	cin >> ejercito.atk;
	cout << "Defensa: ";
	cin >> ejercito.def;
	
	ejercitos.push_back(ejercito);
}

void Starks::removeEjercito()
{
	int i;
	
	cout << "Indice a eliminar";
	cin >> i;

	if(i < ejercitos.size())
		ejercitos.erase(ejercitos.begin() + i);
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

void Starks::modiEjercito()
{	
	int i;
	
	cout << "Indice a modificar [" << ejercitos.size() << "]";
	cin >> i;

	if(i < ejercitos.size()){
		PeqFamiliasN* ejercito = &ejercitos[i];
		cout << "Ingrese:"
		<<		"Nombre: ";
		cin >> ejercito->nombre;
		cout << "Simbolo: ";
		cin >> ejercito->simbolo;
		cout << "Lema: ";
		cin >> ejercito->lema;
		cout << "Cantidad de personas: ";
		cin >> ejercito->personas;
		cout << "Ataque: ";
		cin >> ejercito->atk;
		cout << "Defensa: ";
		cin >> ejercito->def;

	}else
		cout << "No existe ese ejercito\n";
}

double Starks::getProAtk()
{
    double totAtk = 0.0;
    for(int i = 0; i < ejercitos.size(); i++)
    {
        totAtk += ejercitos[i].atk;
    }
    
    double proAtk = totAtk / ejercitos.size();
        
    return proAtk;
}

double Starks::getProDef()
{
    double totDef = 0.0;
    for(int i = 0; i < ejercitos.size(); i++)
    {
        totDef += ejercitos[i].def;
    }
    
    double proDef = totDef / ejercitos.size();

    return proDef;
}


Starks::~Starks()
{
}
