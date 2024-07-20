#include "menu.h"
#include "estructuras.h"
#include "variablesGlobales.h"
#include <iostream>

using namespace std;

void Menu() {
    int op;
    do {
        system("cls");
        cout << "\nSistema de gestión veterinaria\n\n";
        cout << "1. Gestion de Propietario" << endl
        << "2. Registrar Mascota" << endl
        << "3. Eliminar Mascota" << endl
        << "5. Actualizar Información de Mascotas" << endl
        << "7. Buscar Mascota por ID" << endl
        << "9. Salir del programa" << endl;
        cout << "\nDigite una opción: ";
        cin >> op;
        switch (op) {
            case 1:
                menuPropietario();
                break;
            case 2:
                break;
            case 3:
                break;
        }
    } while (op != 9);
}

void menuPropietario() {
    int opcion;
    do {
        cout << "\n--- Gestión de Propietarios ---\n";
        cout << "1. Agregar Propietario\n";
        cout << "2. Listar Propietarios\n";
        cout << "3. Eliminar Propietario\n";
        cout << "4. Actualizar Propietario";
        cout << "5. Volver al Menú Principal\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
                RegistrarPropietario();
                break;
            case 2:
                listaDePropietarios();
                break;
            case 3:
				eliminarPropietario();
                break;
            case 4:
                
                break;
            case 5:
                cout << "Volviendo al Menú Principal...\n";
                break;
            default:
                cout << "Opción no válida, intente de nuevo.\n";
        }
    } while (opcion != 5);
}

void RegistrarPropietario() {
    if (cantidaddepropietarios >= cantidadMaximaDePropietarios) {
        cout << "No se pueden agregar más propietarios, límite alcanzado.\n";
        return;
    }

    Propietario p; //para la id
    p.id = cantidaddepropietarios + 1;
    cout << "Ingrese nombre completo: ";
    getline(cin, p.nombreCompleto);
    cout << "Ingrese contacto: ";
    getline(cin, p.contacto);
    cout << "Ingrese ID de la mascota: ";
    cin >> p.id_Mascota;
    cin.ignore();

    propietarios[cantidaddepropietarios] = p;
    cantidaddepropietarios++;
    cout << "Propietario agregado exitosamente.\n";
}

void listaDePropietarios() {
    cout << "\n--- Lista de Propietarios ---\n";
    for (int i = 0; i < cantidaddepropietarios; ++i) {
        cout << "Propietario " << propietarios[i].id << ":\n";
        cout << "Nombre Completo: " << propietarios[i].nombreCompleto << "\n";
        cout << "Contacto: " << propietarios[i].contacto << "\n";
        cout << "ID Mascota: " << propietarios[i].id_Mascota << "\n";
        cout << "-----------------------------\n";
    }
}

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
