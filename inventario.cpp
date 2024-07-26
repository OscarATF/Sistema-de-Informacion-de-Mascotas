#include "inventario.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"

//FUNCION REGISTRAR PRODUCTO
void RegistrarProducto() {
    if (cantidaddeproductos >= capacidadMaxima) {
        cout << "No se pueden agregar más productos, límite alcanzado.\n";
        return;
    }

    Inventario p; //para la id
    p.id_producto = cantidaddeproductos + 1;
    cin.ignore();
    system("cls");
    cout << "Ingrese nombre del producto: "; getline(cin, p.nombreDelProducto);
    cout << "Ingrese cantidad: "; cin >> p.cantidad;
    cout << "Ingrese el precio:"; cin >> p.precio;
    

    productos[cantidaddeproductos] = p;
    cantidaddeproductos++;
    cout << "\nProducto agregado exitosamente.\n\n";
    system("pause");
}
//FUNCION REGISTRAR PRODUCTO

//MOSTRAR INVENTARIO
void mostrarInventario() {
	system("cls");
    cout << "Lista de inventarios registrados:\n";
    for (int i=0;i<cantidaddeproductos;i++) {
	        cout << "ID: " << productos[i].id_producto;
			cout << "\nNombre: " << productos[i].nombreDelProducto;
			cout << "\nPrecio: " << productos[i].precio; 
			cout << "\nCantidad:" << productos[i].cantidad<< "\n\n";
	}
    system("pause");
}
//FIN DE FUNCION MOSTRAR INVENTARIO

//FUNCION ELIMINAR INVENTARIO
void eliminarInventario() {
	int indice;
	int producto;
	system("cls");
	cout<<"Lista de Productos:\n"<<endl;
		for (int j=0;j<cantidaddeproductos;j++) {
			cout<<"Productos "<<j+1<<" :\n"<<endl;
			cout<<"Nombre: "<<productos[j].nombreDelProducto<<endl<<endl;
		}
			cout<<"Digite el numero de producto que desea eliminar: ";
			cin>>producto;
			indice=producto-1;
		if (indice >= 0 && indice < cantidaddeproductos) {
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

//FIN DE ELIMINAR INVENTARIO