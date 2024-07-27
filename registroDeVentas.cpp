#include "registroDeVentas.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"

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