#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#include <string>

using namespace std;

struct Propietario {
    int id;
    string nombreCompleto;
    string contacto;
    int id_Mascota;
};

struct Inventario {
    int id_producto;
    string nombreDelProducto;
    float precio;
    int cantidad;
};

struct Mascota{
	int id_mascota;
	string nombre;
	string especie;
	string raza;
	int edad;
};
#endif // ESTRUCTURAS_H
