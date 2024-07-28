#include "propietario.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"
#include "Mascota.h"
using namespace std;

void RegistrarPropietario() {
	system("cls");
	int indice;
	int seleccion;
	int contactoTAM;
	if (cantidaddepropietarios >= capacidadMaxima) {
        cout << "No se pueden agregar más propietarios, límite alcanzado.\n";
        return;
    } else {
	    cout << "Ingrese nombre completo: ";
	    cin.ignore();
	    getline(cin, propietarios[cantidaddepropietarios].nombreCompleto);
	    cout << "Ingrese contacto (Numero telefonico): ";
	    getline(cin, propietarios[cantidaddepropietarios].contacto);
	    //Tamano de caracteres del contacto para la validacion
	    contactoTAM=propietarios[cantidaddepropietarios].contacto.length();
	    //Validacion cantidad de numeros en el contacto
		while (contactoTAM!=9) {
	    	cout << "\nINVALIDO!!\n\nPorfavor ingrese un contacto valido: ";
	    	getline(cin, propietarios[cantidaddepropietarios].contacto);
			contactoTAM=propietarios[cantidaddepropietarios].contacto.length();	
		}
	 	cout << "\nSeleccione la mascota para el propietario:\n";
       	cout<<"\n---------Lista de mascotas---------\n";
		for(int i=0;i<cantidadDeMascotas;i++){
			cout<<"Mascota "<<i+1<<":\n";
			cout<<"Nombre: "<<mascota[i].nombre<<"\n";
			cout<<endl;
    	}
        
        cout << "Ingrese el número de la mascota: ";
        cin >> seleccion;
        while (seleccion>cantidadDeMascotas || seleccion<1) {
	    	cout << "\nINVALIDO!!\n\nPorfavor ingrese una mascota de la lista: ";
	    	cin >> seleccion;
		}
		cout<<"\nMascota "<<seleccion<<" seleccionado\n"<<endl;
        indice=seleccion-1; //indice del arreglo
        propietarios[cantidaddepropietarios].mascot=mascota[indice];
		cout << "\nPropietario agregado exitosamente.\n";
	    cantidaddepropietarios++;
	    system("pause");
	}
}

void listaDePropietarios() {
	system("cls");
    cout << "\n--- Lista de Propietarios ---\n";
    for (int i = 0; i < cantidaddepropietarios; ++i) {
        cout << "Propietario " << i+1 << ":\n";
        cout << "Nombre Completo: " <<propietarios[i].nombreCompleto << "\n";
        cout << "Contacto: " << propietarios[i].contacto << "\n";
        cout <<"Nombre de mascota: "<<propietarios[i].mascot.nombre<<endl;
		cout << "-----------------------------\n";
    }
    system("pause");
}

//FUNCION ELIMINAR PROPIETARIO
void eliminarPropietario() {
	int indice;
	int propietario;
	system("cls");
	//Imprime una lista de los propietarios existentes
	cout<<"Lista de Propietarios:\n"<<endl;
		for (int j=0;j<cantidaddepropietarios;j++) {
			cout<<"Propietario "<<j+1<<" :\n"<<endl;
			cout<<"Nombre: "<<propietarios[j].nombreCompleto<<endl<<endl;
		}
			//Seleccionar el propietario de la lista
			cout<<"Digite el numero de propietario que desea eliminar: ";
			cin>>propietario;
			indice=propietario-1; //Indice del arreglo
		if (indice >= 0 && indice < cantidaddepropietarios) {
			for (int j=indice;j<cantidaddepropietarios-1;++j) {
				propietarios[j]=propietarios[j+1];
			}
			cantidaddepropietarios--;
			cout<<"\nPropietario eliminado\n"<<endl;
		} else {
		cout<<"\nSeleccion no valida!! no se pudo eliminar el propietario\n"<<endl;
		}
	system("pause");
}

//FIN DE ELIMINAR PROPIETARIO

//FUNCION ACTUALIZAR PROPIETARIO
void actualizarPropietario() {
	int indice;
	int propietario;
	int contactoTAM;
	system("cls");
	//Imprime una lista breve de los propietarios existentes
	cout<<"Lista de Propietarios:\n"<<endl;
		for (int i=0;i<cantidaddepropietarios;i++) {
			cout<<"Propietario "<<i+1<<" :\n"<<endl;
			cout<<"Nombre: "<<propietarios[i].nombreCompleto<<endl;
			cout<<endl;
		}
	//Seleccionar el propietario de la lista
	cout<<"Digite el numero de propietario que desea actualizar: ";
	cin>>propietario;
	//Validacion para seleccion fuera de la lista
	while (propietario>cantidaddepropietarios || propietario<1) {
	    	cout<<"\nINVALIDO!!\n\nPorfavor ingrese un propietario de la lista: ";
	    	cin>>propietario;
		}
	indice=propietario-1; //Indice del arreglo
	cout<<"\nPropietario "<<propietario<<" seleccionado\n"<<endl;
	system("pause");
	system("cls");
	cout<<"Ingrese el nuevo nombre del propietario : ";
	cin.ignore();
	getline(cin,propietarios[indice].nombreCompleto);
	(propietarios[indice].nombreCompleto)[0]=toupper((propietarios[indice].nombreCompleto)[0]);
	cout << "Ingrese el nuevo contacto: ";
    getline(cin, propietarios[indice].contacto);
    //Tamano de caracteres del contacto para la validacion
	contactoTAM=propietarios[indice].contacto.length();
	    //Validacion cantidad de numeros en el contacto
		while (contactoTAM!=9) {
	    	cout << "\nINVALIDO!!\n\nPorfavor ingrese un contacto valido: ";
	    	getline(cin, propietarios[indice].contacto);
			contactoTAM=propietarios[indice].contacto.length();	
		}
	cout<<"\n\nPropietario actualizado\n"<<endl;
	system("pause");
}
//FIN DE FUNCION ACTUALIZAR PROPIETARIO 

//FUNCION PARA LISTAR PROPIETARIOS EN ORDEN ALFABETICO
void ordenAlfabetico() {
	system("cls");
	Propietario orden[cantidaddepropietarios];
	Propietario aux;
		//genera una copia para no afectar el arreglo original
		for (int i=0;i<cantidaddepropietarios;i++) {
        	orden[i] = propietarios[i];
    	}
    //Ordenamiento por metodo burbuja
	for (int i=0;i<cantidaddepropietarios-1;i++) {
		for (int j=i+1;j<cantidaddepropietarios;j++) {
			if (orden[i].nombreCompleto>orden[j].nombreCompleto) { 
				aux=orden[i];
				orden[i]=orden[j];
				orden[j]=aux;			
			}
		}
	}
	//Imprime una lista de los propietarios en orden alfabetico
	cout << "\n--- Lista de Propietarios ordenados alfabeticamente ---\n";
	for (int i=0;i<cantidaddepropietarios;i++) {
		cout << "Propietario " << i+1 << ":\n";
        cout << "Nombre Completo: " <<orden[i].nombreCompleto << "\n";
        cout << "Contacto: " << orden[i].contacto << "\n";
        cout <<"Nombre de mascota: "<<orden[i].mascot.nombre<<endl;
		cout << "-----------------------------\n";
		}
	system("pause");
}