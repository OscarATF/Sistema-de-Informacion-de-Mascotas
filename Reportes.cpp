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
	int menor=ventas[0].precioDeVenta;
	int mayor=ventas[1].precioDeVenta;
	
	for(int i=0;i<cantidaddeventas;i++){
		
			if(mayor<ventas[i].precioDeVenta){
				mayor=ventas[i].precioDeVenta;
				
					if(menor>ventas[i].precioDeVenta){
					menor=ventas[i].precioDeVenta;
					}
			}
			
	}
	cout<<" Venta mínima: "<<menor<<endl;
	cout<<" Venta máxima: "<<mayor<<endl;
	
	system("pause");
}
		

// Funcion de venta total

void ventaTotal(){
	system("cls");
	int ventatotal=0;
	
		for(int i=0;i<cantidaddeventas;i++){
		ventatotal=ventatotal+ventas[i].precioDeVenta;
	}
	cout<<"\n";
	cout<<"Venta total de los productos: "<<ventatotal<<endl;
	system("pause");
}