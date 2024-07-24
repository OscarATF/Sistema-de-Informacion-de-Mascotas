#include "propietario.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"
using namespace std;
void RegistrarPropietario() {
	system("cls");
    if (cantidaddepropietarios >= capacidadMaxima) {
        cout << "No se pueden agregar más propietarios, límite alcanzado.\n";
        return;
    } else {
	    Propietario p; //para la id
	    p.id = cantidaddepropietarios + 1;
	    cout << "Ingrese nombre completo: ";
	    cin.ignore();
	    getline(cin, p.nombreCompleto);
	    cout << "Ingrese contacto: ";
	    getline(cin, p.contacto);
	
	    propietarios[cantidaddepropietarios] = p;
	    cantidaddepropietarios++;
	    cout << "Propietario agregado exitosamente.\n";
	    system("pause");
	}
}

void listaDePropietarios() {
	system("cls");
    cout << "\n--- Lista de Propietarios ---\n";
    for (int i = 0; i < cantidaddepropietarios; ++i) {
        cout << "Propietario " << propietarios[i].id << ":\n";
        cout << "Nombre Completo: " << propietarios[i].nombreCompleto << "\n";
        cout << "Contacto: " << propietarios[i].contacto << "\n";
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