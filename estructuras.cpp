#include <iostream>
#include <string>
#include "estructuras.h"
#include "variablesGlobales.h"
using namespace std; //para no usar std::cout <<"";

//Variable numeroDePropietarios
Propietario propietarios[max] = {
    {0, "Juan", "923860279", 0},
    {1, "Maria", "913846572", 1},
    {2, "Carlos", "923456789", 2},
    {3, "Ana", "912345678", 3},
    {4, "Pedro", "934567890", 4},
    {5, "Laura", "923678901", 5},
    {6, "Luis", "913789012", 6},
    {7, "Elena", "923890123", 7},
    {8, "Miguel", "934901234", 8},
    {9, "Sandra", "913012345", 9}
};

void registrarPropietario(){
	cout<<"\nREGISTRAR UN PROPIETARIO DE MASCOTA:\n";
	cin.ignore();
	cout<<"Digite el nombre: "; 
	getline(cin,propietarios[cantidadDePropietarios].nombreCompleto);
	cout<<propietarios[idPropietarios].nombreCompleto;
}