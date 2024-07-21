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
// Actualizando la lista del menu principal
        cout << "1. Gestion de Propietario" << endl
        	<< "2. Gestión de Mascotas" << endl
        	<< "3. Gestion Inventario " << endl
        	<< "4. Salir del programa" << endl;

        cout << "\nDigite una opción: ";
        cin >> op;
        switch (op) {
            case 1:
                menuPropietario();
                break;
            case 2:
                break;
            case 3:
            	menuInventario();
                break;
            case 4:
            	cout<<"Saliendo del programa....";
            	break;
    		default:
    			cout<<"Ingrese una opción correcta";
        }
    } while (op != 4);
}

void menuPropietario() {
    int opcion;
    do {
    	system("cls");
        cout << "\nGestión de Propietarios\n\n";
        cout << "1. Agregar Propietario\n";
        cout << "2. Listar Propietarios\n";
        cout << "3. Eliminar Propietario\n";
        cout << "4. Actualizar Propietario\n";
        cout << "5. Volver al Menú Principal\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;
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
                actualizarPropietario();
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

    if (cantidaddepropietarios >= capacidadMaxima) {

	system("cls");

        cout << "No se pueden agregar más propietarios, límite alcanzado.\n";
        return;
    }
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
}

void listaDePropietarios() {
	system("cls");
    cout << "\n--- Lista de Propietarios ---\n";
    for (int i = 0; i < cantidaddepropietarios; ++i) {
        cout << "Propietario " << propietarios[i].id << ":\n";
        cout << "Nombre Completo: " << propietarios[i].nombreCompleto << "\n";
        cout << "Contacto: " << propietarios[i].contacto << "\n";
        cout << "ID Mascota: " << propietarios[i].id_Mascota << "\n";
        cout << "-----------------------------\n";
    }
    system("pause");
}


// funcion Gestion de inventario.
void menuInventario() {
    int opcion;
    do {
    	system("cls");
        cout << "\nGestión de Inventario\n\n";
        cout << "1. Agregar Producto\n";
        cout << "2. Actualizar Producto\n";
        cout << "3. Eliminar Producto\n";
        cout << "4. Listar Productos\n";
        cout << "5. Volver al Menú Principal\n";
        cout << "\nSeleccione una opción: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1:
            	RegistrarProducto();
                break;
            case 2:
                break;
            case 4:
                cout << "Volviendo al Menú Principal...\n";
                break;
            case 5:
            	Menu();
            	break;
            default:
                cout << "Opción no válida, intente de nuevo.\n";
                break;
        }
    } while (opcion != 3);
}

void RegistrarProducto() {
    if (cantidaddeproductos >= capacidadMaxima) {
        cout << "No se pueden agregar más productos, límite alcanzado.\n";
        return;
    }

    Inventario p; //para la id
    p.id_producto = cantidaddeproductos + 1;
    cout << "Ingrese nombre del producto: "; getline(cin, p.nombreDelProducto);
    cout << "Ingrese cantidad: "; cin >> p.cantidad;
    cout << "Ingrese el precio:"; cin >> p.precio;
    cin.ignore();

    productos[cantidaddeproductos] = p;
    cantidaddepropietarios++;
    cout << "\nProducto agregado exitosamente.\n\n";
    system("pause");
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

// Agregando funcion Gestion de mascotas
void menuMascotas() {
    int opcion;
    do {
    	system("cls");
        cout << "\nGestión de mascotas\n\n";
        cout << "1. Agregar Mascota\n";
        cout << "2. Actualizar número de mascotas\n";
        cout << "3. Eliminar mascotas\n";
        cout << "4. Listar Mascotas\n";
        cout << "5. Volver al Menú Principal\n";
        cout << "\nSeleccione una opción: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
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
                cout << "Opción no válida, intente de nuevo.\n";
                break;
        }
    } while (opcion != 5);
}
