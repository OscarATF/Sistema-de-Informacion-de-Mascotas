#include "menu.h"
#include "estructuras.h"
#include "variablesGlobales.h"
#include <iostream>
#include "propietario.h"
#include "Mascota.h"
#include "inventario.h"
#include "historia.h"
#include "registroDeVentas.h"
#include "Reportes.h"
using namespace std;

//Menu principal
void Menu() {
    int op;
    do {
        system("cls");
        cout << "\nSistema de gestión veterinaria\n\n";
        cout << "1. Gestión de Mascotas" << endl
        	<< "2. Gestion de Propietario" << endl
        	<< "3. Gestion Inventario " << endl
        	<< "4. Historial clinico " << endl
        	<< "5. Registro de Ventas " << endl
        	<< "6. Reportes de las ventas " << endl
        	<< "7. Salir del programa" << endl;
        cout << "\nDigite una opción: ";
        cin >> op;
        switch (op) {
            case 1:
                menuMascotas();
                break;
            case 2:
            	menuPropietario();
                break;
            case 3:
            	menuInventario();
                break;
            case 4:
            	menuHistorial();
                break;
			case 5:
				menuVentas();
				break;
			case 6:
				menuReportes();
				break; 
            case 7:
            	cout<<"\nSaliendo del programa....";
            	break;
    		default:
    			cout<<"Ingrese una opción correcta";
        }
    } while (op != 7);
}

//Menu de gestion de propietarios
void menuPropietario() {
    int opcion;
    do {
    	system("cls");
        cout << "\nGestión de Propietarios\n\n";
        cout << "1. Agregar Propietario\n";
        cout << "2. Listar Propietarios\n";
        cout << "3. Listar Propietarios en orden alfabetico\n";
        cout << "4. Eliminar Propietario\n";
        cout << "5. Actualizar Propietario\n";
        cout << "6. Volver al Menú Principal\n";
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
            	ordenAlfabetico();
            	break;
            case 4:
				eliminarPropietario();
                break;
            case 5:
                actualizarPropietario();
                break;
            case 6:
                cout << "Volviendo al Menú Principal...\n";
                break;
            default:
                cout << "Opción no válida, intente de nuevo.\n";
        }
    } while (opcion != 6);
}
// Funcion de menu de gestion de inventario.   DANNY YAIR LUQUE PARI 2024-119013 <----------------------
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
            	actualizarInventario();
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

//FUNCION MENU MASCOTAS
void menuMascotas() {
    int opcion;
    do {
    	system("cls");
        cout << "\nGestión de mascotas\n\n";
        cout << "1. Agregar Mascota\n";
        cout << "2. Listar mascotas\n";
        cout << "3. Eliminar mascotas\n";
        cout << "4. Actualizar mascotas\n";
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
            	EliminarMascotas();
				break;    
            case 4:
            	ActualizarMascota();
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

void menuHistorial() {
int opcion;
    do {
    	system("cls");
        cout << "\nHistorial clinico\n\n";
        cout << "1. Agregar o actualziar historial clinico\n";
        cout << "2. Listar historiales clinicos\n";
        cout << "3. Volver al Menú Principal\n";
        cout << "\nSeleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
            	agregarActualizarHistoria();
                break;
            case 2:
            	listarHistorias();
                break;
            case 3:
            	cout<<"\nVolviendo al menu principal\n";
				break;    
            default:
                cout << "Opción no válida, intente de nuevo.\n";
                break;
        }
    } while (opcion != 3);
}

//Menu de registro de ventas 
void menuVentas(){
	int opcion;
    do {
    	system("cls");
        cout << "\nRegistro de Ventas\n\n";
        cout << "1. Agregar ventas\n";
        cout << "2. Listar ventas\n";
        cout << "3. Buscar ventas\n";
        cout << "4. Volver al Menú Principal\n";
        cout << "\nSeleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
            	registrarVentas();
                break;
            case 2:
            	mostrarVentas();
                break;
            case 3:
            	buscarVentas();
				break;    
            case 4:
            	break;
            default:
                cout << "Opción no válida, intente de nuevo.\n";
                break;
        }
    } while (opcion != 4);
}

//Wesley Laura 2024-119046
//MENU DE REPORTE DE VENTAS
void menuReportes(){
	int opcion;
    do {
    	system("cls");
        cout << "\n------------REPORTES DE VENTAS-----------\n\n";
        cout << "1. Venta mínima y máxima\n";
        cout << "2. Total de ventas\n";
        cout << "3. Regresar al menú principal\n";
        cout << "\nSeleccione una opción:  ";
        cin >> opcion;
        switch (opcion) {
            case 1:
            	minmax();
                break;
            case 2:
            	ventaTotal();
                break;
            case 3:
				break;    
            default:
                cout << "Opción no válida, intente de nuevo.\n";
                break;
        }
    } while (opcion != 3);
}
