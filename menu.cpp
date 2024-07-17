#include <iostream>
#include "menu.h"
using namespace std;

void Menu() {
	int op;
	do {
		cout<<"Sistema de gestión veterinaria\n"<<endl;
		cout<<"1. Registrar Propietario"<<endl
			<<"2. Registrar Mascota"<<endl
			<<"3. Eliminar Mascota"<<endl
			<<"4. Eliminar Propietario"<<endl
			<<"5. Actualizar Informacion de Mascotas"<<endl
			<<"6. Actualizar Informacion de Propietario"<<endl
			<<"7. Buscar Mascota por ID"<<endl
			<<"8. Buscar Propietario por ID"<<endl
			<<"9. Salir del programa"<<endl;
		cout<<"\nIngrese una opcion: ";
		cin>>op;
	} while (op!=9);
}