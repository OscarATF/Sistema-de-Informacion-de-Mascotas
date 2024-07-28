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
	if (cantidaddepropietarios >= capacidadMaxima) {
        cout << "No se pueden agregar más propietarios, límite alcanzado.\n";
        return;
    } else {
	    Propietario p; //para la id
	    p.id = cantidaddepropietarios + 1;
	    cout << "Ingrese nombre completo: ";
	    cin.ignore();
	    getline(cin, propietarios[cantidaddepropietarios].nombreCompleto);
	    cout << "Ingrese contacto: ";
	    getline(cin, propietarios[cantidaddepropietarios].contacto);
	 	cout << "Seleccione la mascota para el propietario:\n";
       	cout<<"\n---------Lista de mascotas---------\n";
		for(int i=0;i<cantidadDeMascotas;i++){
			cout<<"Mascota "<<i+1<<":\n";
			cout<<"Nombre: "<<mascota[i].nombre<<"\n";
    	}
        
        cout << "Ingrese el número de la mascota: ";
        cin >> seleccion;
        indice=seleccion-1;
        
        if (seleccion > 0 && seleccion <= cantidadDeMascotas) {
            propietarios[cantidaddepropietarios].mascot=mascota[indice];
	    	cout << "Propietario agregado exitosamente.\n";
	    	cantidaddepropietarios++;
	    	system("pause");
        } else {
            cout << "Selección inválida. No se pudo registrar el propietario.\n";
            return;
        }
	    
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
	cout<<"Lista de Propietarios:\n"<<endl;
		for (int j=0;j<cantidaddepropietarios;j++) {
			cout<<"Propietario "<<j+1<<" :\n"<<endl;
			cout<<"Nombre: "<<propietarios[j].nombreCompleto<<endl<<endl;
		}
			cout<<"Digite el numero de contacto que desea eliminar: ";
			cin>>propietario;
			indice=propietario-1;
		if (indice >= 0 && indice < cantidaddepropietarios) {
			for (int j=indice;j<cantidaddepropietarios-1;++j) {
				propietarios[j]=propietarios[j+1];
			}
			cantidaddepropietarios--;
			cout<<"\nPropietario eliminado\n"<<endl;
		} else {
		cout<<"\nIndice no valido\n"<<endl;
		}
	system("pause");
}

//FIN DE ELIMINAR PROPIETARIO

//FUNCION ACTUALIZAR PROPIETARIO
void actualizarPropietario() {
	int indice;
	int propietario;
	system("cls");
	cout<<"Lista de Propietarios:\n"<<endl;
		for (int i=0;i<cantidaddepropietarios;i++) {
			cout<<"Propietario "<<i+1<<" :\n"<<endl;
			cout<<"Nombre: "<<propietarios[i].nombreCompleto<<endl;
			cout<<endl;
		}
	cout<<"Digite el numero de propietario que desea actualizar: ";
	cin>>propietario;
	indice=propietario-1;
	cout<<"\nPropietario "<<propietario<<" seleccionado\n"<<endl;
	cout<<"Ingrese el nuevo nombre del propietario : ";
	cin.ignore();
	getline(cin,propietarios[indice].nombreCompleto);
	(propietarios[indice].nombreCompleto)[0]=toupper((propietarios[indice].nombreCompleto)[0]);
	cout << "Ingrese el nuevo contacto: ";
    getline(cin, propietarios[indice].contacto);
	cout<<"\n\nPropietario actualizado\n"<<endl;
	system("pause");
}
//FIN DE FUNCION ACTUALIZAR PROPIETARIO 
