#include "registroDeVentas.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"

void registrarVentas() {
	system("cls");
    if (cantidaddeventas >= capacidadMaxima) {
        cout << "No se pueden agregar más ventas, límite alcanzado.\n";
        return;
    } else {
	    Ventas p; //para la id
	    p.id = cantidaddeventas + 1;
	    cout << "Ingrese nombre del cliente: ";
	    cin.ignore();
	    getline(cin, p.nombreDelCliente);
	    cout << "Ingrese la fecha: ";
	    getline(cin, p.fecha);
	    cout << "Ingrese el metodo de pago: ";
	    getline(cin, p.metodoDePago);
    	cout << "Ingrese la cantidad de venta: "; cin >> p.cantidad;
    	cout << "Ingrese el precio de venta: "; cin >> p.precioDeVenta;

    ventas[cantidaddeventas] = p;
    cantidaddeventas++;
    cout << "\nLa venta a sido registrada correctamente.\n\n";
    system("pause");
	}
}

void mostrarVentas(){
	system("cls");
    cout << "\n----------- Lista de Ventas -------------\n\n";
    for (int i = 0; i < cantidaddeventas; ++i) {
        cout << "Venta " << ventas[i].id << "\t\tFecha: "<<ventas[i].fecha<<":\n";
        cout << "Cliente: " << ventas[i].nombreDelCliente << "\n";
        cout << "Metodo de Pago: " << ventas[i].metodoDePago << "\n";
        cout << "-----------------------------------------\n";
    }
    system("pause");
}

