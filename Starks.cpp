#include "Starks.h"

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
	cin >> ejercito.lema
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
		<<		"Nombre: ";
		cin >> ejercito.nombre;
		cout << "Simbolo: ";
		cin >> ejercito.simbolo;
		cout << "Lema: ";
		cin >> ejercito.lema
		cout << "Cantidad de personas: ";
		cin >> ejercito.personas;
		cout << "Ataque: ";
		cin >> ejercito.atk;
		cout << "Defensa: ";
		cin >> ejercito.def;

	}else
		cout << "No existe ese ejercito\n";
}

Starks::~Starks()
{
	for(int i = 0; i < ejercito.size(); i++)
	{
		delete ejercito[i];
	}
	ejercito.clear();
}
