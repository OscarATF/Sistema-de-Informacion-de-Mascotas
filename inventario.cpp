#include "inventario.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"
#include "registroDeVentas.h"

//FUNCION REGISTRAR PRODUCTO
void RegistrarProducto() {
	//Comprueba si se pasa de la capacidad maxima
    if (cantidaddeproductos >= capacidadMaxima) {
        cout << "No se pueden agregar más productos, límite alcanzado.\n";
        return;
    }

    Inventario inv;
    inv.id_producto = cantidaddeproductos + 1;
    cin.ignore();
    system("cls"); //limpia la pantalla
    cout << "Ingrese nombre del producto: "; getline(cin, inv.nombreDelProducto);
    cout << "Ingrese cantidad: "; cin >> inv.cantidad;
    cout << "Ingrese el precio: S/"; cin >> inv.precio;
    productos[cantidaddeproductos] = inv;
    cantidaddeproductos++;
    cout << "\nProducto agregado exitosamente.\n\n";
    system("pause");
}

//FUNCION PARA MOSTRAR INVENTARIO
void mostrarInventario() {
	system("cls");
    cout << "Lista de productos registrados:\n";
    for (int i=0;i<cantidaddeproductos;i++) {
	        cout << "ID: " << productos[i].id_producto;
			cout << "\nNombre: " << productos[i].nombreDelProducto;
			cout << "\nCantidad:" << productos[i].cantidad;
			cout << "\nPrecio: S/" << productos[i].precio<< "\n\n";
			cout << "----------------------------------------------\n";
	}
    system("pause");
}


//FUNCION PARA ELIMINAR INVENTARIO
void eliminarInventario() {
	int indice;
	int producto;
	system("cls");
	cout<<"Lista de Productos:\n"<<endl;
		for (int j=0;j<cantidaddeproductos;j++) {
			cout<<"Productos "<<j+1;
			cout<<" | Nombre: "<<productos[j].nombreDelProducto<<endl;
			cout<<"---------------------------------------------------------------";
			cout<<endl;
		}
			cout<<"Digite el numero de producto que desea eliminar: ";
			cin>>producto;
			indice=producto-1;
		if (indice >= 0 && indice < cantidaddeproductos) { //verifica que el indice este en la cantidad de productos
			for (int j=indice;j<cantidaddeproductos-1;++j) {
				productos[j]=productos[j+1];
			}
			cantidaddeproductos--;
			cout<<"\nEl producto fue eliminado\n"<<endl;
		} else {
		cout<<"\nIndice no valido\n"<<endl;
		}
	system("pause");
}

//FUNCION ACTUALIZAR INVENTARIO
void actualizarInventario() {
	int indice;
	int producto;
	system("cls");
	cout<<"Lista de Propietarios:\n"<<endl;
		for (int i=0;i<cantidaddeproductos;i++) {
			cout<<"Producto "<<i+1<<" :\n"<<endl;
			cout<<"Nombre: "<<productos[i].nombreDelProducto<<endl;
			cout<<"Cantidad: "<<productos[i].cantidad<<endl;
			cout<<"Precio: S/"<<productos[i].precio<<endl;
			cout<<endl;
		}
	cout<<"Digite el numero de producto que desea actualizar: ";
	cin>>producto;
	indice=producto-1;
	cout<<"\nProducto "<<producto<<" ha sido seleccionado\n";
	system("pause");
	system("cls");
	cout<<"NOMBRE: "<<productos[indice].nombreDelProducto<<endl<<endl;
	cout << "Ingrese la nueva cantidad: ";
    cin >> productos[indice].cantidad;
	cout << "Ingrese el nuevo precio: S/";
    cin >> productos[indice].precio;
	cout<<"\nLos nuevos datos del producto fueron actualizados\n"<<endl;
	system("pause");

}
