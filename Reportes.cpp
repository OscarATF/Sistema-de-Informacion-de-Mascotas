#include <iostream>
#include "registroDeVentas.h"
#include "estructuras.h"
#include "variablesGlobales.h"
#include "Reportes.h"
#include "inventario.h"
#include "propietario.h"
#include "historia.h"
#include "Mascota.h"

using namespace std;

//Wesley Laura 2024-119046
//Funcion de ventas mínima y máxima

void minmax(){
	system("cls");
	float menor=ventas[0].precioDeVenta;
	float mayor=ventas[1].precioDeVenta;
	
	for(int i=0;i<cantidaddeventas;i++){
		
		if(mayor<ventas[i].precioDeVenta){
			mayor=ventas[i].precioDeVenta;		
		}
		
		if(menor>ventas[i].precioDeVenta){
			menor=ventas[i].precioDeVenta;
		}		
	}
	cout<<"\n----------REPORTE DE LAS VENTAS DE LA VETERINARIA--------\n\n";
	cout<<" Venta mínima: s/"<<menor<<endl;
	cout<<"\n";
	cout<<" Venta máxima: s/"<<mayor<<endl;
	cout<<"\n";
	system("pause");
}
		

// Funcion de venta total

void ventaTotal(){
	system("cls");
	float ventatotal=0;
	
		for(int i=0;i<cantidaddeventas;i++){
		ventatotal=ventatotal+ventas[i].precioDeVenta;
	}
	cout<<"\n----------REPORTE DE LAS VENTAS DE LA VETERINARIA--------\n\n";
	cout<<"\n";
	cout<<"Venta total de los productos: s/"<<ventatotal<<endl;
	cout<<"\n";
	system("pause");
}

void ventaTotalHistorial() {
	system("cls");
	float ventatotal2=0;
	
		for(int i=0;i<cantidadDeHistorias;i++){
		ventatotal2=ventatotal2+propietarios[i].mascot.historial.factura;
	}
	cout<<"\n----------REPORTE DE LOS PAGOS DEL HISTORIAL CLINICO--------\n\n";
	cout<<"\n";
	cout<<"Pago total del historial clinico: s/"<<ventatotal2<<endl;
	cout<<"\n";
	system("pause");
}