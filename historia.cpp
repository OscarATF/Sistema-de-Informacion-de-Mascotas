#include "propietario.h"
#include <iostream>
#include "estructuras.h"
#include "variablesGlobales.h"
#include "Mascota.h"
#include "historia.h"

using namespace std;

void listarHistorias() {
	system("cls");
	 for (int i = 0; i < cantidadDeHistorias; ++i) {
        cout << "Historia Clinica " << i + 1 << ":" << endl;
        cout << "Propietario: " << propietarios[i].nombreCompleto << ", "  
             << propietarios[i].contacto << endl;
        cout << "Mascota: " << mascota[propietarios[i].id_Mascota].nombre<<endl;
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