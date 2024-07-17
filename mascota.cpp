#include "mascota.h"
#include <iostream>

Mascota mascotas[MAX_MASCOTAS];
int num_mascotas = 0;

void registrarMascota() {
    if (num_mascotas < MAX_MASCOTAS) {
        cout << "Ingrese nombre: "; cin >> mascotas[num_mascotas].nombre;
        cout << "Ingrese especie: "; cin >> mascotas[num_mascotas].especie;
        cout << "Ingrese raza: "; cin >> mascotas[num_mascotas].raza;
        cout << "Ingrese edad: "; cin >> mascotas[num_mascotas].edad;
        cout << "Ingrese historial médico: "; cin.ignore(); getline(cin, mascotas[num_mascotas].historial_medico);
        cout << "Ingrese vacunas: "; getline(cin, mascotas[num_mascotas].vacunas);
        cout << "Ingrese tratamientos: "; getline(cin, mascotas[num_mascotas].tratamientos);
        num_mascotas++;
        cout << "Mascota registrada exitosamente.\n";
    } else {
        cout << "Límite de mascotas alcanzado.\n";
    }
}

void buscarMascota() {
    string nombre;
    cout << "Ingrese el nombre de la mascota a buscar: "; cin >> nombre;
    for (int i = 0; i < num_mascotas; ++i) {
        if (mascotas[i].nombre == nombre) {
            cout << "Nombre: " << mascotas[i].nombre << "\nEspecie: " << mascotas[i].especie << "\nRaza: " << mascotas[i].raza
                 << "\nEdad: " << mascotas[i].edad << "\nHistorial Médico: " << mascotas[i].historial_medico
                 << "\nVacunas: " << mascotas[i].vacunas << "\nTratamientos: " << mascotas[i].tratamientos << endl;
            return;
        }
    }
    cout << "Mascota no encontrada.\n";
}

void actualizarMascota() {
    string nombre;
    cout << "Ingrese el nombre de la mascota a actualizar: "; cin >> nombre;
    for (int i = 0; i < num_mascotas; ++i) {
        if (mascotas[i].nombre == nombre) {
            cout << "Ingrese nuevos datos.\n";
            cout << "Ingrese especie: "; cin >> mascotas[i].especie;
            cout << "Ingrese raza: "; cin >> mascotas[i].raza;
            cout << "Ingrese edad: "; cin >> mascotas[i].edad;
            cout << "Ingrese historial médico: "; cin.ignore(); getline(cin, mascotas[i].historial_medico);
            cout << "Ingrese vacunas: "; getline(cin, mascotas[i].vacunas);
            cout << "Ingrese tratamientos: "; getline(cin, mascotas[i].tratamientos);
            cout << "Datos de la mascota actualizados exitosamente.\n";
            return;
        }
    }
    cout << "Mascota no encontrada.\n";
}
