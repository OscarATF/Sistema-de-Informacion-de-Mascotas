#include "propietario.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"
#include "Mascota.h"
#include "historia.h"

using namespace std;

void agregarHistoria() {
	int id;
	int indice;
	int selec;
	system("cls");
	for (int i=0;i<cantidaddepropietarios;i++) {
		cout<<"Propietario "<<i+1<<":\n";
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
	cout<<"\nNuevo Historial clinico\n";
	cout<<"\nAntecedentes Medicos"<<endl
		<<"Enfermedades previas:"<<endl;
	cin.ignore();
	getline(cin,historias[indice].antecedentes.enfermedadesPrevias);
	cout<<"\nCirugias Pasadas:"<<endl;
	getline(cin,historias[indice].antecedentes.cirugiasPasadas);
	cout<<"\nAlergias conocidas:"<<endl;
	getline(cin,historias[indice].antecedentes.alergiasConocidas);
	cout<<"\nVacunaciones:"<<endl;
	getline(cin,historias[indice].antecedentes.vacunaciones);
	cout<<"\nMotivo de visita:"<<endl;
	getline(cin,historias[indice].motivoVisita.motivo);
	cout<<"\nSintomas:"<<endl;
	getline(cin,historias[cantidadDeHistorias].motivoVisita.sintomas);
	cout<<"\nPlan de seguimiento\n"<<endl
		<<"Recomendaciones:"<<endl;
	getline(cin,historias[cantidadDeHistorias].planSeguimiento.recomendaciones);
	cout<<"Proxima cita:"<<endl;
	getline(cin,historias[cantidadDeHistorias].planSeguimiento.proximaCita);
	cout<<"Nota del veterinario:"<<endl;
	getline(cin,historias[cantidadDeHistorias].notasVeterinario);
	system("pause");
	cantidadDeHistorias++;
}

void listarHistorias() {
	system("cls");
	 for (int i = 0; i < cantidadDeHistorias; ++i) {
        cout << "Historia Clinica " << i + 1 << ":" << endl;
        cout << "Propietario: " << propietarios[i].nombreCompleto << ", "  
             << propietarios[i].contacto << endl;
        cout << "Mascota: " << propietarios[i].mascot.nombre<<endl;
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
		cout<<"\n---------Lista de Historial---------\n";
	for(int i=0;i<cantidadDeHistorias;i++){
		cout << "Historia Clinica " << i + 1 << ":" << endl;
		cout << "Propietario: " << propietarios[i].nombreCompleto << ", "  
             << propietarios[i].contacto << endl;
        cout << "Mascota: " << propietarios[i].mascot.nombre<<endl<<endl;
}
cout<<"Digite el numero de historia que desea actualizar: ";
	cin>>historial;
	indice=historial-1;
	cout<<"\nAntecedentes Medicos\n"<<endl
		<<"Enfermedades previas:"<<endl;
	cin.ignore();
	getline(cin,historias[indice].antecedentes.enfermedadesPrevias);
	cout<<"\nCirugias Pasadas:"<<endl;
	getline(cin,historias[indice].antecedentes.cirugiasPasadas);
	cout<<"\nAlergias conocidas:"<<endl;
	getline(cin,historias[indice].antecedentes.alergiasConocidas);
	cout<<"\nVacunaciones:"<<endl;
	getline(cin,historias[indice].antecedentes.vacunaciones);
	cout<<"\nMotivo de visita:"<<endl;
	getline(cin,historias[indice].motivoVisita.motivo);
	cout<<"\nSintomas:"<<endl;
	getline(cin,historias[indice].motivoVisita.sintomas);
	cout<<"\nPlan de seguimiento"<<endl
		<<"Recomendaciones:"<<endl;
	getline(cin,historias[indice].planSeguimiento.recomendaciones);
	cout<<"Proxima cita:"<<endl;
	getline(cin,historias[indice].planSeguimiento.proximaCita);
	cout<<"Nota del veterinario:"<<endl;
	getline(cin,historias[indice].notasVeterinario);
	system("pause");
}


