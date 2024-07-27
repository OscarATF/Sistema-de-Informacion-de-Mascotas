#ifndef VARIABLES_GLOBALES_H
#define VARIABLES_GLOBALES_H

#include "estructuras.h"

const int capacidadMaxima = 1000;

extern Propietario propietarios[capacidadMaxima];
extern int cantidaddepropietarios;

extern Inventario productos[capacidadMaxima];
extern int cantidaddeproductos;

extern Mascota mascota[capacidadMaxima];
extern int cantidadDeMascotas;

extern HistoriaClinica historias[capacidadMaxima];
extern int cantidadDeHistorias;

extern Ventas ventas[capacidadMaxima];
extern int cantidaddeventas;
extern int c;
#endif // VARIABLES_GLOBALES_H
