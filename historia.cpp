#include "propietario.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"
#include "Mascota.h"
#include "historia.h"

using namespace std;

void agregarHistoria() {
	if (cantidadDeMascotas<=10) {
		cout<<"Ingrese antes una mascota y un propietario"<<endl;
		system("pause");
		return;
	} else {
	int id;
	int indice;
	system("cls");
	cout<<"Nuevo Historial clinico";
	cout<<"\nNombre de la mascota: "<<mascota[cantidadDeMascotas].nombre;
	cout<<"\nAntecedentes Medicos"<<endl
		<<"Enfermedades previas:"<<endl;
	cin>>historias[cantidadDeHistorias].antecedentes.enfermedadesPrevias;
	cout<<"\nCirugias Pasadas:"<<endl;
	cin>>historias[cantidadDeHistorias].antecedentes.cirugiasPasadas;
	cout<<"\nAlergias conocidas:"<<endl;
	cin>>historias[cantidadDeHistorias].antecedentes.alergiasConocidas;
	cout<<"\nVacunaciones:"<<endl;
	cin>>historias[cantidadDeHistorias].antecedentes.vacunaciones;
	cout<<"\nMotivo de visita:"<<endl;
	cin>>historias[cantidadDeHistorias].motivoVisita.motivo;
	cout<<"\nSintomas:"<<endl;
	cin>>historias[cantidadDeHistorias].motivoVisita.sintomas;
	cout<<"\nPlan de seguimiento"<<endl
		<<"Recomendaciones:"<<endl;
	cin>>historias[cantidadDeHistorias].planSeguimiento.recomendaciones;
	cout<<"Proxima cita:"<<endl;
	cin>>historias[cantidadDeHistorias].planSeguimiento.proximaCita;
	cout<<"Nota del veterinario:"<<endl;
	cin>>historias[cantidadDeHistorias].notasVeterinario;
	system("pause");
	cantidadDeHistorias++;
	}
}

void listarHistorias() {
	system("cls");
	 for (int i = 0; i < cantidadDeHistorias; ++i) {
        cout << "Historia Clinica " << i + 1 << ":" << endl;
        cout << "Propietario: " << propietarios[i].nombreCompleto << ", "  
             << propietarios[i].contacto << endl;
        cout << "Mascota: " << mascota[i].nombre<<endl;
        cout << "Antecedentes Médicos: " << historias[i].antecedentes.enfermedadesPrevias << ", " 
             << historias[i].antecedentes.cirugiasPasadas << ", " 
             << historias[i].antecedentes.alergiasConocidas << ", " 
             << historias[i].antecedentes.vacunaciones << endl;
        cout << "Motivo de Visita: " << historias[i].motivoVisita.motivo << ", " 
             << historias[i].motivoVisita.sintomas << endl;
        cout << "Plan de Seguimiento: " << historias[i].planSeguimiento.recomendaciones << ", " 
             << historias[i].planSeguimiento.proximaCita << endl;
        cout << "Notas del Veterinario: " << historias[i].notasVeterinario << endl;
        cout << "Facturación/Pagos: $" << historias[i].facturacionPagos << endl;
        cout << "---------------------------------" << endl;
    }
    system("pause");
}


