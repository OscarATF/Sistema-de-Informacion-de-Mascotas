#ifndef MASCOTA_H
#define MASCOTA_H

#include <string>
using namespace std;

const int MAX_MASCOTAS = 100;

struct Mascota {
    string nombre;
    string especie;
    string raza;
    int edad;
    string historial_medico;
    string vacunas;
    string tratamientos;
};

extern Mascota mascotas[MAX_MASCOTAS];
extern int num_mascotas;

void registrarMascota();
void buscarMascota();
void actualizarMascota();

#endif
