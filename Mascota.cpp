#include "Mascota.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"
using namespace std;
//Se añadió la funcion void registrar Mascotas
void RegistrarMascotas() {
system("cls");
    if (cantidadDeMascotas >= capacidadMaxima) {
        cout << "No se pueden agregar más productos, límite alcanzado.\n";
        
        return;
    }

    Mascota m; //para la id
    m.id_mascota = cantidadDeMascotas + 1;
    cin.ignore();
    cout << "\nIngrese nombre de la mascota: "; getline(cin, m.nombre);
    cout<<"Ingrese la edad de la mascota: "; cin>> m.edad;
    cout << "Ingrese la especie: "; cin >> m.especie;
    cout<<"Ingrese la raza: "; cin>>m.raza;
    mascota[cantidadDeMascotas] = m;
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
		cout<<"Mascota "<<mascota[i].id_mascota<<":\n";
		cout<<"Nombre: "<<mascota[i].nombre<<"\n";
		cout<<"Edad: "<<mascota[i].edad<<"\n";
		cout<<"Especie: "<<mascota[i].especie<<"\n";
		cout<<"Raza: "<<mascota[i].raza<<"\n";
		cout<<"\n-----------------------\n";
	}
	system("pause");	
}

