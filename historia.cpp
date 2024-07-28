#include "propietario.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"
#include "Mascota.h"
#include "historia.h"

using namespace std;
//FUNCION PARA AGREGAR O ACTUALIZAR UN HISTORIAL
void agregarActualizarHistoria() {
	string p;
	int indice;
	int selec;
	int cantidadCaracteres;
	system("cls");
	//IMPRIME LISTA DE PROPIETARIOS EXISTENTES
	cout << "--- Lista de Propietarios ---\n";
	for (int i=0;i<cantidaddepropietarios;i++) {
		cout<<"PROPIETARIO "<<i+1<<":\n";
		cout<<"Nombre: "<<propietarios[i].nombreCompleto<<"\n";
		cout<<"Nombre de la Mascota: "<<propietarios[i].mascot.nombre<<endl;
		cout<<"---------------------------------" << endl;
	}
	//Seleccion de propietario
	cout<<"\nSeleccione un propietario con historial existente para actualizarlo o seleccione un propietario\nrecientemente agregado para añadir un historial clinico a su mascota\n";
	cout<<"\nSeleccione el propietario de la mascota: ";
	cin>>selec;
	//Validacion para seleccion fuera de la lista
	while (selec>cantidaddepropietarios || selec<1) {
	    	cout<<"\nINVALIDO!!\n\nPorfavor ingrese un propietario de la lista: ";
	    	cin>>selec;
	}
	indice=selec-1;
	cout<<"Propietario "<<selec<<" seleccionado"<<endl;
	system("pause");
	system("cls");
	//Imprime el nombre del propietario y su mascota
	cout<<"Nombre: "<<propietarios[indice].nombreCompleto<<endl;
	cout<<"Nombre de la Mascota: "<<propietarios[indice].mascot.nombre<<endl;
	//Solicita los datos correspondientes
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
	//Este bucle es Validacion, permitira volver a preguntar la fecha al usuario.
	do{ 
		cout<<"Proxima cita (DD/MM/YYYY):"<<endl;
		getline(cin,propietarios[indice].mascot.historial.planSeguimiento.proximaCita);
		p=propietarios[indice].mascot.historial.planSeguimiento.proximaCita;
		cantidadCaracteres = p.length();
		
		//Valida que la fecha contenga el caracter '/'
		if (p[2]!= '/' || p[5] != '/'){ 
			cantidadCaracteres = 9; // se da 9 para volver al bucle
		}
		if(cantidadCaracteres != 10){  //Esto es para el error en el caso de que sea diferente de 10.
			cout << "\nError fecha invalida, INGRESE DE NUEVO.\n\n";
		}
	}while(cantidadCaracteres != 10); //El bucle finaliza cuando cantidaCaracteres es 10.
	
	//continua con el registro del historial
	cout<<"Nota del veterinario:"<<endl;
	getline(cin,propietarios[indice].mascot.historial.notasVeterinario);
	// Validar la edad de la mascota
    while (true) {
        cout<<"\nPago efectuado:"<<endl;
		cin>>propietarios[indice].mascot.historial.factura;
        if (cin.fail()) {
            cin.clear(); // Limpiar el estado de error de std::cin
            cin.ignore(10000, '\n'); // Descartar la entrada inválida
            cout << "\nEntrada no válida. Por favor, ingrese un número.\n";
            cout<<"\n";
        } else {
        	while (propietarios[indice].mascot.historial.factura<0) {
        		cout<<"\nINVALIDO!! Porfavor ingrese un numero positivo:";
				cin>>propietarios[indice].mascot.historial.factura;
			}
			cout<<"\nHistorial clinico agregado\n"<<endl;
			system("pause");
			cantidadDeHistorias++;
            break;
        }   
    }
}
//FUNCION PARA IMPRIMIR UNA LISTA DE HISTORIALES
void listarHistorias() {
	system("cls");
	 for (int i = 0; i <cantidaddepropietarios; ++i) {
        cout<<"Historial Clinico "<< i + 1 << ":" << endl<<endl;
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
        cout<<"\nNotas del Veterinario: " << propietarios[i].mascot.historial.notasVeterinario << endl;
        cout<<"\nPago efetuado: " << propietarios[i].mascot.historial.factura << endl<<endl;
        cout<<"---------------------------------" << endl;
        
    }
    system("pause");
}