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
        cout << "1. Propietario" << endl
        << "2. Registrar Mascota" << endl
        << "3. Eliminar Mascota" << endl
        << "5. Actualizar Información de Mascotas" << endl
        << "7. Buscar Mascota por ID" << endl
        << "8. Gestion de Inventario"<< endl
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
            case 8:
            	menuInventario();
            	break;
        }
    } while (op != 9);
}

void menuPropietario() {
    int opcion;
    do {
    	system("cls");
        cout << "\nGestión de Propietarios\n\n";
        cout << "1. Agregar Propietario\n";
        cout << "2. Listar Propietarios\n";
        cout << "3. Volver al Menu Principal\n";
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
                cout << "Volviendo al Menú Principal...\n";
                break;
            default:
                cout << "Opción no válida, intente de nuevo.\n";
                break;
        }
    } while (opcion != 3);
}

void RegistrarPropietario() {
    if (cantidaddepropietarios >= capacidadMaxima) {
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