#include "Mascota.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"
using namespace std;

//Funcion  de Wesley Laura 2024-119046

//Se añadió la funcion void registrar Mascotas
void RegistrarMascotas() {
system("cls");
    if (cantidadDeMascotas >= capacidadMaxima) {
        cout << "No se pueden agregar más productos, límite alcanzado.\n";
        
        return;
    }


    mascota[cantidadDeMascotas].id_mascota++;
    cin.ignore();
    cout << "\nIngrese nombre de la mascota: "; getline(cin, mascota[cantidadDeMascotas].nombre);
    cout<<"Ingrese la edad de la mascota: "; cin>> mascota[cantidadDeMascotas].edad;
    cout << "Ingrese la especie: "; cin >> mascota[cantidadDeMascotas].especie;
    cout<<"Ingrese la raza: "; cin>>mascota[cantidadDeMascotas].raza;
    cantidadDeMascotas++;
    cout << "\nMascota agregado exitosamente.\n\n";
    
    system("pause");
}
//Agregando nueva funcion de listar mascotas
// Nueva función de listar mascotas
void ListarMascotas(){
	system("cls");
	cout<<"\n---------Lista de mascotas---------\n";
	for(int i=0;i<cantidadDeMascotas;i++){
		cout<<"Mascota "<<mascota[i].id_mascota<<":\n\n";
		cout<<"Nombre: "<<mascota[i].nombre<<"\n";
		cout<<"Edad: "<<mascota[i].edad<<"\n";
		cout<<"Especie: "<<mascota[i].especie<<"\n";
		cout<<"Raza: "<<mascota[i].raza<<"\n";
		cout<<"\n-----------------------\n";
	}
	system("pause");	
}

// Nueva funcion de eliminar mascotas
 void EliminarMascotas() {
	int id_mascota;
	int mascotas;
	system("cls");
	cout<<"Lista de Mascotas:\n"<<endl;
		for (int i=0;i<cantidadDeMascotas;i++) {
			cout<<"Mascota "<<i+1<<" :\n"<<endl;
			cout<<"Nombre: "<<mascota[i].nombre<<endl<<endl;
			cout<<"\n--------------------------------------\n";
		}
			cout<<"Digite el numero de contacto que desea eliminar: ";
			cin>>mascotas;
			id_mascota=mascotas-1;
		if (id_mascota >= 0 && id_mascota < cantidadDeMascotas) {
			for (int i=id_mascota;i<cantidadDeMascotas-1;++i) {
				mascota[i]=mascota[i+1];
			}
			cantidadDeMascotas--;
			cout<<"\nMascota eliminada\n"<<endl;
		} else {
		cout<<"\nIndice no valido\n"<<endl;
		}
	system("pause");
}
//FUNCION ACTUALIZAR MASCOTA
void ActualizarMascota() {
	int id_mascota;
	int mascotas;
	system("cls");
	cout<<"Lista de Mascotas:\n"<<endl;
		for (int i=0;i<cantidadDeMascotas;i++) {
			cout<<"Mascota "<<i+1<<" :\n"<<endl;
			cout<<"Nombre: "<<mascota[i].nombre<<endl<<endl;
			cout<<"\n--------------------------------------\n";
		}
	cout<<"Digite el numero de la mascota que desea actualizar: ";
	cin>>mascotas;
	id_mascota=mascotas-1;
	cout<<"\nMascota "<<mascotas<<" seleccionado\n"<<endl;
	cout<<"Ingrese el nuevo nombre de la mascota : ";
	cin.ignore();
	getline(cin,mascota[id_mascota].nombre);
	cout << "Ingrese la nueva edad de la mascota: ";
    cin>>mascota[id_mascota].edad;
	cout<<"\n\nMascota actualizado\n"<<endl;
	system("pause");

}
//Fin de la funcion
