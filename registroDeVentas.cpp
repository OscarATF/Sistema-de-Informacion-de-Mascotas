#include "registroDeVentas.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"
#include "inventario.h" // esto es para listar los productos

void registrarVentas() {
	int cantidadCaracteres;	
	system("cls");		
    if (cantidaddeventas >= capacidadMaxima) {
        cout << "No se pueden agregar más ventas, límite alcanzado.\n";
        return;
	} 
	int seleccion;
	Ventas p; 
	cout << "Ingrese nombre del cliente: ";
	cin.ignore();
	getline(cin, p.nombreDelCliente);
	do{ //Este bucle es Validacion, permitira volver a preguntar la fecha al usuario.
		cout << "Ingrese la fecha (DD/MM/YYYY): ";
	    getline(cin, p.fecha);
		cantidadCaracteres = p.fecha.length();
		
		//Esto valida
		if (p.fecha[2]!= '/' || p.fecha[5]!= '/'){ 
			cantidadCaracteres = 9; // se da 9 para volver al bucle
		}
		if(cantidadCaracteres != 10){  //Esto es para el error en el caso de que sea diferente de 10.
			cout << "\nError fecha invalida, INGRESE DE NUEVO.\n\n";
		}
	}while(cantidadCaracteres != 10);



	cout << "Ingrese el metodo de pago: ";
	getline(cin, p.metodoDePago);
	mostrarInventario();
	cout << "\nIngrese el numero del producto: "; cin >> p.idproductoComprado;
	p.datosdelproducto=productos[p.idproductoComprado-1];
	if(productos[p.idproductoComprado-1].cantidad == 0){	
	    cout << "\n| Lo lamento, producto no disponible |\n\n";
	}else{	
		cout << "Ingrese la cantidad de venta: "; cin >> p.cantidad;
		if(p.cantidad <= productos[p.idproductoComprado-1].cantidad){ 
			p.precioDeVenta = p.cantidad*p.datosdelproducto.precio;
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

void mostrarVentas(){
	system("cls");
    cout << "\n----------- Lista de Ventas -------------\n\n";
    for (int i = 0; i < cantidaddeventas; ++i) {
        cout << "Venta " << ventas[i].id << "\t\tFecha: "<<ventas[i].fecha<<":\n\n";
        cout << "Cliente: " << ventas[i].nombreDelCliente << "\n";
        cout << "Producto: " << ventas[i].datosdelproducto.nombreDelProducto << "\n";
		cout << "Precio del producto: "<< ventas[i].datosdelproducto.precio<< "\n";
        cout << "Cantidad de compra: " << ventas[i].cantidad << "\n";
        cout << "Precio cancelado: " << ventas[i].precioDeVenta << "\n";
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

