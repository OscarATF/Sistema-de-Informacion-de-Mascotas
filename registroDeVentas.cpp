#include "registroDeVentas.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"
#include "inventario.h" // esto es para listar los productos

void registrarVentas() {	
	system("cls");		
    if (cantidaddeventas >= capacidadMaxima) {
        cout << "No se pueden agregar más ventas, límite alcanzado.\n";
        return;
    } else {
    	int seleccion;
	    Ventas p; //para la id
	    p.id = cantidaddeventas + 1;
	    cout << "Ingrese nombre del cliente: ";
	    cin.ignore();
	    getline(cin, p.nombreDelCliente);
	    cout << "Ingrese la fecha: ";
	    getline(cin, p.fecha);
	    cout << "Ingrese el metodo de pago: ";
	    getline(cin, p.metodoDePago);
	    mostrarInventario();
	    cout << "\nIngrese el numero del producto: "; cin >> p.idproductoComprado;
	    if(productos[p.idproductoComprado-1].cantidad == 0){	
    		cout << "\n| Lo lamento, ya no quedan estos productos |\n\n";
		}else{	
	    	cout << "Ingrese la cantidad de venta: "; cin >> p.cantidad;
	    	if(p.cantidad <= productos[p.idproductoComprado-1].cantidad){ 
		    	cout << "Ingrese el precio de venta: "; cin >> p.precioDeVenta;
		    	productos[p.idproductoComprado-1].cantidad-=p.cantidad;
		    	ventas[cantidaddeventas] = p;
		    	cantidaddeventas++;
		    	cout << "\nLa venta a sido registrada correctamente.\n\n";
			}else{
				cout<<"\n ERROR - CANTIDAD EXCESIVA\n\n";
			}
	 	}
	system("pause");
	}
}

void mostrarVentas(){
	system("cls");
    cout << "\n----------- Lista de Ventas -------------\n\n";
    for (int i = 0; i < cantidaddeventas; ++i) {
        cout << "Venta " << ventas[i].id << "\t\tFecha: "<<ventas[i].fecha<<":\n\n";
        cout << "Producto: " << ventas[i].idproductoComprado << "\n";
        cout << "Cantidad: " << ventas[i].cantidad << "\n";
        cout << "Precio que fue vendido: " << ventas[i].precioDeVenta << "\n";
        cout << "Cliente: " << ventas[i].nombreDelCliente << "\n";
        cout << "Metodo de Pago: " << ventas[i].metodoDePago << "\n";
        cout << "-----------------------------------------\n";
    }
    system("pause");
}

//BUSCAR VENTAS POR ID
void buscarVentas(){
	int buscar;
	system("cls");
	cout<<"Digite el id la producto a buscar: "; cin>>buscar;
	cout<<"\nLISTA DE PRODUCTOS CON EL ID "<<buscar<<":"<<endl;
	cout << "-----------------------------------------\n";
	for(int i=1;i<cantidaddeventas;i++){
		if(ventas[i].idproductoComprado==buscar){
			cout << "Venta " << ventas[i].id << "\t\tFecha: "<<ventas[i].fecha<<":\n\n";
        	cout << "Producto: " << ventas[i].idproductoComprado << "\n";
        	cout << "Cantidad: " << ventas[i].cantidad << "\n";
        	cout << "Precio que fue vendido: " << ventas[i].precioDeVenta << "\n";
        	cout << "Cliente: " << ventas[i].nombreDelCliente << "\n";
        	cout << "Metodo de Pago: " << ventas[i].metodoDePago << "\n";
        	cout << "-----------------------------------------\n";
		}
	}
	system("pause");
}