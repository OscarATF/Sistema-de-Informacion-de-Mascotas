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
#endif // ESTRUCTURAS_H
