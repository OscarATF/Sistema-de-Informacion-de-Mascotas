#include "propietario.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"
#include "Mascota.h"
#include "historia.h"

using namespace std;

void agregarActualizarHistoria() {
	int id;
	int indice;
	int selec;
	system("cls");
	for (int i=0;i<cantidaddepropietarios;i++) {
		cout<<"PROPIETARIO "<<i+1<<":\n";
		cout<<"Nombre: "<<propietarios[i].nombreCompleto<<"\n";
	}
	cout<<"Seleccione el propietario de la mascota: "<<endl;
	cin>>selec;
	indice=selec-1;
	cout<<"Propietario "<<selec<<" seleccionado"<<endl;
	system("pause");
	system("cls");
	cout<<"Nombre: "<<propietarios[indice].nombreCompleto<<endl;
	cout<<"Nombre de la Mascota: "<<propietarios[indice].mascot.nombre<<endl;
	cout<<"\nHistorial clinico\n";
	cout<<"\nANTECEDENTES MEDICOS\n"<<endl
		<<"Enfermedades previas:"<<endl;
	cin.ignore();
	getline(cin,propietarios[indice].mascot.historial.antecedentes.enfermedadesPrevias);
	cout<<"\nCirugias Pasadas:"<<endl;
	getline(cin,propietarios[indice].mascot.historial.antecedentes.cirugiasPasadas);
	cout<<"\nAlergias conocidas:"<<endl;
	getline(cin,propietarios[indice].mascot.historial.antecedentes.alergiasConocidas);
	cout<<"\nVacunaciones:"<<endl;
	getline(cin,propietarios[indice].mascot.historial.antecedentes.vacunaciones);
	cout<<"\nMotivo de visita:"<<endl;
	getline(cin,propietarios[indice].mascot.historial.motivoVisita.motivo);
	cout<<"\nSintomas:"<<endl;
	getline(cin,propietarios[indice].mascot.historial.motivoVisita.sintomas);
	cout<<"\nPLAN DE SEGUIMIENTO\n"<<endl
		<<"Recomendaciones:"<<endl;
	getline(cin,propietarios[indice].mascot.historial.planSeguimiento.recomendaciones);
	cout<<"Proxima cita:"<<endl;
	getline(cin,propietarios[indice].mascot.historial.planSeguimiento.proximaCita);
	cout<<"Nota del veterinario:"<<endl;
	getline(cin,propietarios[indice].mascot.historial.notasVeterinario);
	system("pause");
	cantidadDeHistorias++;
}

void listarHistorias() {
	system("cls");
	 for (int i = 0; i <cantidaddepropietarios; ++i) {
        cout<<"Historia Clinica "<< i + 1 << ":" << endl;
        cout<<"Propietario: "<< propietarios[i].nombreCompleto << ", "  
            << propietarios[i].contacto<< endl;
        cout<<"Mascota: "<< propietarios[i].mascot.nombre<<endl;
        cout<<"\nANTECEDENTES MEDICOS\n "<<endl
			<<"Enfermedades previas: "<<propietarios[i].mascot.historial.antecedentes.enfermedadesPrevias <<endl 
            <<"\nCirugias pasadas: " <<propietarios[i].mascot.historial.antecedentes.cirugiasPasadas <<endl
            <<"\nAlergias conocidas: " << propietarios[i].mascot.historial.antecedentes.alergiasConocidas <<endl 
            <<"\nVacunaciones: "<< propietarios[i].mascot.historial.antecedentes.vacunaciones << endl;
        cout<<"\nMotivo de Visita: " << propietarios[i].mascot.historial.motivoVisita.motivo <<endl 
            <<"\nSintomas: " << propietarios[i].mascot.historial.motivoVisita.sintomas << endl;
        cout<<"\nPLAN DE SEGUIMIENTO\n " 
			<<"\nRecomendaciones: "<< propietarios[i].mascot.historial.planSeguimiento.recomendaciones <<endl 
            <<"\nProxima cita: "<< propietarios[i].mascot.historial.planSeguimiento.proximaCita << endl;
        cout<<"\nNotas del Veterinario: " << propietarios[i].mascot.historial.notasVeterinario << endl<<endl;
        cout<<"---------------------------------" << endl;
    }
    system("pause");
}




