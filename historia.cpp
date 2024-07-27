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
        cout << "Antecedentes Médicos "
			<<"Enfermedades previas:\n "<<historias[i].antecedentes.enfermedadesPrevias <<endl 
            <<"Cirugias pasadas:\n" << historias[i].antecedentes.cirugiasPasadas <<endl
            <<"Alergias conocidas:\n" << historias[i].antecedentes.alergiasConocidas <<endl 
            <<"Vacunaciones:\n"<< historias[i].antecedentes.vacunaciones << endl;
        cout << "Motivo de Visita:\n " << historias[i].motivoVisita.motivo <<endl 
            <<"Sintomas:\n" << historias[i].motivoVisita.sintomas << endl;
        cout << "Plan de Seguimiento\n " 
			<<"Recomendaciones:\n"<< historias[i].planSeguimiento.recomendaciones <<endl 
            <<"Proxima cita:\n" << historias[i].planSeguimiento.proximaCita << endl;
        cout << "Notas del Veterinario:\n " << historias[i].notasVeterinario << endl<<endl;
        cout << "---------------------------------" << endl;
    }
    system("pause");
}

void actualizarHistoria() {
	int indice;
	int historial;
	system("cls");
	cout<<"Actualizar Historial clinico";
		cout<<"\n---------Lista de mascotas---------\n";
	for(int i=0;i<cantidadDeMascotas;i++){
		cout<<"Mascota "<<i+1<<":\n\n";
		cout<<"Nombre: "<<mascota[i].nombre<<"\n";
}
cout<<"Digite el numero de mascota que desea actualizar el historial: ";
	cin>>historial;
	indice=historial-1;
	cout<<"\nAntecedentes Medicos"<<endl
		<<"Enfermedades previas:"<<endl;
	cin>>historias[indice].antecedentes.enfermedadesPrevias;
	cout<<"\nCirugias Pasadas:"<<endl;
	cin>>historias[indice].antecedentes.cirugiasPasadas;
	cout<<"\nAlergias conocidas:"<<endl;
	cin>>historias[indice].antecedentes.alergiasConocidas;
	cout<<"\nVacunaciones:"<<endl;
	cin>>historias[indice].antecedentes.vacunaciones;
	cout<<"\nMotivo de visita:"<<endl;
	cin>>historias[indice].motivoVisita.motivo;
	cout<<"\nSintomas:"<<endl;
	cin>>historias[indice].motivoVisita.sintomas;
	cout<<"\nPlan de seguimiento"<<endl
		<<"Recomendaciones:"<<endl;
	cin>>historias[indice].planSeguimiento.recomendaciones;
	cout<<"Proxima cita:"<<endl;
	cin>>historias[indice].planSeguimiento.proximaCita;
	cout<<"Nota del veterinario:"<<endl;
	cin>>historias[indice].notasVeterinario;
	system("pause");
}


