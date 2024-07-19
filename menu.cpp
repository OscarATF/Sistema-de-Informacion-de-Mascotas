#include <iostream>
#include <string>
#include "menu.h"
using namespace std;
int op;
//funcion menu principal
void Menu() {	
	do {
		//se limpia la consola
		system("cls");
		cout<<"\nSistema de gestión veterinaria\n\n";
		cout<<"1. Propietario"<<endl
			<<"2. Registrar Mascota"<<endl
			<<"3. Eliminar Mascota"<<endl
			<<"5. Actualizar Informacion de Mascotas"<<endl
			<<"7. Buscar Mascota por ID"<<endl
			<<"9. Salir del programa"<<endl;
		cout<<"\nDigite una opcion: ";
		cin>>op;
		switch (op){
			case 1:
				menuPropietario();
				break;
			case 2:
				break;
			case 3:
				break;
		}
	} while (op!=9);
}
//funcion mascota

void menuPropietario(){
	system("cls");
	cout<<"\n Opciones del Propietario\n\n";
	cout<<"1. Registrar Propietario\n"
		<<"2. Actualizar Datos del Propietario\n"
		<<"3. Buscar Propietario por ID\n"
		<<"4. Eliminar Propietario\n"
		<<"5. Volver al menu principal\n";
		cout<<"\nDigite una opcion: ";
	cin>>op;
	switch (op){
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			Menu();
			break;
		default:
			Menu();
	
	}
}