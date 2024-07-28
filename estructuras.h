#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#include <string>

using namespace std;

struct AntecedentesMedicos {
    string enfermedadesPrevias;
    string cirugiasPasadas;
    string alergiasConocidas;
    string vacunaciones;
};

struct MotivoVisita {
    string motivo;
    string sintomas;
};

struct PlanSeguimiento {
    string recomendaciones;
    string proximaCita;
};

struct HistoriaClinica {
    AntecedentesMedicos antecedentes;
    MotivoVisita motivoVisita;
    PlanSeguimiento planSeguimiento;
    string notasVeterinario;
};

struct Mascota{
	int id_mascota;
	string nombre;
	string especie;
	string raza;
	int edad;
	HistoriaClinica historial;
};

struct Propietario {
    string nombreCompleto;
    string contacto;
    Mascota mascot;
};

struct Inventario {
    int id_producto;
    string nombreDelProducto;
    float precio;
    int cantidad;
};


struct Ventas {
    int id;                    
    int cantidad;
	float precioDeVenta;               
    string nombreDelCliente; 
    string metodoDePago;
    int idproductoComprado;
	string fecha;
	Inventario datosdelproducto;            
};

#endif