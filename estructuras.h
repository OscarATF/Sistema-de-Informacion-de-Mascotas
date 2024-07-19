#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H
#include <string>
#include "variablesGlobales.h"
//Definición del struct Propietario.
struct Propietario {
    int id;
    string nombreCompleto;
    string contacto;
    int id_mascota;
};
extern const int max =1000;
extern Propietario propietarios[max];

#endif //ESTRUCTURAS_H