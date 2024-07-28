#include "menu.h"
#include "estructuras.h"
#include "variablesGlobales.h"
#include "propietario.h"
#include "Mascota.h"
#include "inventario.h"
#include "historia.h"
#include "registroDeVentas.h"
#include "Reportes.h"
#include <iostream>
#include <windows.h>
using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

//Menu principal
void Menu() {
    int op;
    do {
        system("cls");
        SetConsoleTextAttribute(hConsole, 7);
        cout << "\nSISTEMA DE GESTION VETERINARIA\n\n";
        cout << "MENU PRINCIPAL\n\n";
        SetConsoleTextAttribute(hConsole,13);// color de fuente púrpura claro
        cout << "1. Gestión de Mascotas" << endl;
        SetConsoleTextAttribute(hConsole, 9);
        cout << "2. Gestion de Propietario" << endl;
        SetConsoleTextAttribute(hConsole, 3);
        cout << "3. Historial clínico " << endl;
        SetConsoleTextAttribute(hConsole, 10);
        cout << "4. Gestión de inventario " << endl;
        SetConsoleTextAttribute(hConsole, 6);
        cout << "5. Registro de Ventas " << endl;
        SetConsoleTextAttribute(hConsole, 12);//color de fuente rojo claro
        cout << "6. Reportes de las ventas " << endl;
         SetConsoleTextAttribute(hConsole, 7);//color blanco
        cout << "7. Salir del programa" << endl;
        cout<<"\n";
       while (true) {
        cout << "Selecione una opción: "; cin >> op;
        if (cin.fail()) {
            cin.clear(); // Limpiar el estado de error de std::cin
            cin.ignore(10000, '\n'); // Descartar la entrada inválida
            cout << "\nEntrada no válida. Por favor, ingrese un número.\n";
            cout<<"\n";
        } else {
            break;
        }
    }
        switch (op) {
            case 1:
                menuMascotas();
                break;
            case 2:
            	menuPropietario();
                break;
            case 3:
            	menuHistorial();
                break;
            case 4:
            	menuInventario();
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
    			cout<<"ERROR\n";
    			system("pause");
        }
    } while (op != 7);
}

//Menu de gestion de propietarios
void menuPropietario() {
    int opcion;
    do {
    	system("cls");
    	SetConsoleTextAttribute(hConsole, 9);
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
        SetConsoleTextAttribute(hConsole, 10);
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
 	SetConsoleTextAttribute(hConsole, 7);
}

//FUNCION MENU MASCOTAS
void menuMascotas() {
    int opcion;
    do {
    	system("cls");
    	SetConsoleTextAttribute(hConsole,13);// color de fuente púrpura claro
        cout << "\nGestión de mascotas\n\n";
        cout << "1. Agregar Mascota\n";
        cout << "2. Listar mascotas\n";
        cout << "3. Actualizar mascota\n";
        cout << "4. Eliminar mascota\n";
        cout << "5. Volver al Menú Principal\n";
		cout<<"\n";
        while (true) {
        cout << "Selecione una opción: "; cin >> opcion;
        if (cin.fail()) {
            cin.clear(); // Limpiar el estado de error de std::cin
            cin.ignore(10000, '\n'); // Descartar la entrada inválida
            cout << "\nEntrada no válida. Por favor, ingrese un número.\n";
            cout<<"\n";
        } else {
            break;
        }
    }

        switch (opcion) {
            case 1:
            	RegistrarMascotas();
                break;
            case 2:
            	ListarMascotas();
                break;
            case 3:
            	ActualizarMascota();
				break;    
            case 4:
            	EliminarMascotas();
                break;
            case 5:
            	cout<<"Saliendo del programa.........";
            	break;
            default:
                cout <<"\nERROR";
                sleep(1);
                break;
        }
    } while (opcion != 5);
}

void menuHistorial() {
int opcion;
    do {
    	system("cls");
    	SetConsoleTextAttribute(hConsole, 3);
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
    	SetConsoleTextAttribute(hConsole, 6);
        cout << "\nRegistro de Ventas\n\n";
        cout << "1. Agregar ventas\n";
        cout << "2. Listar ventas\n";
        cout << "3. Buscar ventas\n";
        cout << "4. Volver al Menú Principal\n";
        while (true) {
        cout << "Selecione una opción: "; cin >> opcion;
        if (cin.fail()) {
            cin.clear(); // Limpiar el estado de error de std::cin
            cin.ignore(10000, '\n'); // Descartar la entrada inválida
            cout << "\nEntrada no válida. Por favor, ingrese un número.\n";
            cout<<"\n";
        } else {
            cin.ignore(10000, '\n'); // Descartar cualquier entrada adicional
            break;
        }
    }
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
    SetConsoleTextAttribute(hConsole, 7);
}

//Wesley Laura 2024-119046
//MENU DE REPORTE DE VENTAS
void menuReportes(){
	int opcion;
    do {
    	system("cls");
    	SetConsoleTextAttribute(hConsole, 12);//color de fuente rojo claro
        cout << "\n------------REPORTES DE VENTAS-----------\n\n";
        cout << "1. Venta mínima y máxima\n";
        cout << "2. Total de ventas\n";
        cout << "3. Total de ventas en historial clinico\n";
        cout << "4. Regresar al menú principal\n";
        cout<<"\n";
        while (true) {
        cout << "Selecione una opción: "; cin >> opcion;
        if (cin.fail()) {
            cin.clear(); // Limpiar el estado de error de std::cin
            cin.ignore(10000, '\n'); // Descartar la entrada inválida
            cout << "\nEntrada no válida. Por favor, ingrese un número.\n";
            cout<<"\n";
        } else {
            break;
        }
    }
        switch (opcion) {
            case 1:
            	minmax();
                break;
            case 2:
            	ventaTotal();
                break;
            case 3:
            	ventaTotalHistorial();
				break;
			case 4:
				break;     
            default:
                cout<<"\nERROR";
    			sleep(1);
                break;
        }
    } while (opcion != 4);
}
