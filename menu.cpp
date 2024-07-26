#include "menu.h"
#include "estructuras.h"
#include "variablesGlobales.h"
#include <iostream>
#include "propietario.h"
#include "Mascota.h"
#include "inventario.h"
using namespace std;
void Menu() {
    int op;
    do {
        system("cls");
        cout << "\nSistema de gestión veterinaria\n\n";
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
            	menuMascotas();
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
//FIN DE FUNCION MENU

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
// FUNCION MENU DE INVENTARIO.   DANNY YAIR LUQUE PARI 2024-119013 <----------------------
void menuInventario() {
    int opcion;
    do{
        system("cls");
        cout << "\nGestión de Inventario\n\n";
        cout << "1. Agregar Producto\n";
        cout << "2. Actualizar Producto\n";
        cout << "3. Eliminar Producto\n";
        cout << "4. Listar Productos\n";
        cout << "5. Volver al Menú Principal\n";
        cout << "\nSeleccione una opción: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
            	RegistrarProducto();
                break;
            case 2:
                break;
            case 3:
            	eliminarInventario();
            	break;
            case 4:
            	mostrarInventario();
                break;
            default:
                cout << "Opción no válida, intente de nuevo.\n";
                break;
        }
 	}while(opcion!=5);
}
//FIN DE FUNCION MENU DE INVENTARIO.

//FUNCION MENU MASCOTAS
void menuMascotas() {
    int opcion;
    do {
    	system("cls");
        cout << "\nGestión de mascotas\n\n";
        cout << "1. Agregar Mascota\n";
        cout << "2. Listar mascotas\n";
        cout << "3. Eliminar mascotas\n";
        cout << "4. Actualizar número de mascotas\n";
        cout << "5. Volver al Menú Principal\n";
        cout << "\nSeleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
            	RegistrarMascotas();
                break;
            case 2:
            	ListarMascotas();
                break;
            case 3:
				break;    
            case 4:
                break;
            case 5:
            	cout<<"Saliendo del programa.........";
            	break;
            default:
                cout << "Opción no válida, intente de nuevo.\n";
                break;
        }
    } while (opcion != 5);
}




