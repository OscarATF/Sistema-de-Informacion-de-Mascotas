#include "variablesGlobales.h"
Inventario productos[capacidadMaxima] ={
    {1, "Croquetas Pedigree Adulto", 20.00, 50},
    {2, "Alimento húmedo Cesar", 1.50, 200},
    {3, "Golosinas dentales Dentastix", 8.00, 100},
    {4, "Snacks naturales Orejas de Cerdo", 15.00, 75},
    {5, "Collar de nylon ajustable", 10.00, 150},
    {6, "Arnés de seguridad", 18.00, 80},
    {7, "Plato de acero inoxidable", 7.00, 120},
    {8, "Cama ortopédica", 35.00, 40},
    {9, "Pelota de goma Kong", 12.00, 60},
    {10, "Juguete masticable Nylabone", 10.00, 70},
    {11, "Juguete interactivo Kong Wobbler", 15.00, 50},
    {12, "Peluches con sonido", 8.00, 90},
    {13, "Champú anti-pulgas", 12.00, 100},
    {14, "Cepillo de doble cara", 8.00, 110},
    {15, "Parvovirus Canino (CPV)", 50.00, 200},
    {16, "Cortaúñas para perros", 10.00, 80},
    {17, "Suplementos vitamínicos", 20.00, 60},
    {18, "Antiparasitarios Frontline", 30.00, 40},
    {19, "Cepillo dental y pasta", 10.00, 90},
    {20, "Botiquín de primeros auxilios", 25.00, 30}
};
//Agregando datos establecidos de la estructura de mascotas
Mascota mascota[capacidadMaxima] = {
    {0, "BOBY", "Perro", "Bulldog", 3},
    {1, "RUFO", "Hámster","Rata",1},
    {2, "HARRY", "Gato","Siamés",3},
    {3, "PIPO", "Perro","Labrador retriever",2},
    {4, "SAM", "Perro","Chihuahua",3},
    {5, "DOKI", "Perro","Rottweiler", 2},
    {6, "CALVIN", "Perro","Chihuahueño",3},
    {7, "RAMBO", "Perro","Pastor alemán",5},
    {8, "RAU", "Perro","Dóberman",6},
    {9, "LUA", "Perro","Shih Tzu", 1}
};
Propietario propietarios[capacidadMaxima] = {
    {0, "Juan Perez", "912345678", mascota[0].id_mascota},
    {1, "Maria Garcia", "923456789", mascota[1].id_mascota},
    {2, "Carlos Sanchez", "934567890", mascota[2].id_mascota},
    {3, "Ana Martinez", "945678901", mascota[3].id_mascota},
    {4, "Luis Gomez", "956789012", mascota[4].id_mascota},
    {5, "Laura Diaz", "967890123", mascota[5].id_mascota},
    {6, "Pedro Rodriguez", "978901234", mascota[6].id_mascota},
    {7, "Sofia Lopez", "989012345", mascota[7].id_mascota},
    {8, "Diego Fernandez", "990123456", mascota[8].id_mascota},
    {9, "Marta Jimenez", "901234567", mascota[9].id_mascota}
};

HistoriaClinica historias[capacidadMaxima] = {
		{
            {"Diabetes", "Ninguna", "Ninguna", "Vacuna contra rabia, vacuna contra parvovirus"},
            {"Examen de rutina", "Pérdida de apetito"},
            {"Dieta balanceada, ejercicio regular", "15/08/2024"},
            {"Se recomienda seguimiento por el veterinario en 6 meses."}
        },
        {
            {"Ninguna", "Cirugía de esterilización", "Alergia a los ácaros", "Vacuna contra leucemia felina"},
            {"Revisión de piel", "Picazón excesiva"},
            {"Aplicar medicación antihistamínica", "10/08/2024"},
            {"Se recomienda cambio de dieta y revisión en 2 semanas."}
        },
        {
            {"Cardiopatía", "Ninguna", "Alergia a ciertos alimentos", "Vacunas anuales completas"},
            {"Chequeo cardiaco", "Tos persistente"},
            {"Revisar corazón, ajustar medicación", "20/08/2024"},
            {"Necesario seguimiento con especialista en cardiología veterinaria."}
        },
        {
            {"Ninguna", "Cirugía de fractura", "Ninguna", "Vacuna contra leptospirosis"},
            {"Consulta general", "Cojera en pata trasera"},
            {"Reposo, fisioterapia", "25/08/2024"},
            {"Se recomienda una revisión de la pata en 1 mes."}
        },
        {
            {"Ninguna", "Ninguna", "Alergia a alimentos", "Vacuna contra rinotraqueítis"},
            {"Problemas respiratorios", "Estornudos frecuentes"},
            {"Revisión respiratoria, cambios en dieta", "30/08/2024"},
            {"Monitorizar síntomas y ajustar dieta según sea necesario."}
        },
        {
            {"Obesidad", "Ninguna", "Ninguna", "Vacunas de rutina"},
            {"Control de peso", "Exceso de peso"},
            {"Dieta baja en calorías, más ejercicio", "05/09/2024"},
            {"Revisar progreso en 1 mes y ajustar plan si es necesario."}
        },
        {
            {"Ninguna", "Ninguna", "Ninguna", "Vacuna contra leucemia felina"},
            {"Chequeo de salud general", "Ninguno"},
            {"Recomendación de dieta y ejercicio", "15/09/2024"},
            {"Control de salud general en 6 meses."}
        },
        {
            {"Ninguna", "Cirugía ocular", "Ninguna", "Vacuna contra tos de las perreras"},
            {"Problemas oculares", "Lagrimeo excesivo"},
            {"Control de medicación ocular", "22/09/2024"},
            {"Seguir las indicaciones del tratamiento ocular."}
        },
        {
            {"Dermatitis", "Cirugía de piel", "Ninguna", "Vacuna contra panleucopenia"},
            {"Problemas dermatológicos", "Piel seca"},
            {"Aplicar cremas especiales", "30/09/2024"},
            {"Revisar condición de la piel en 2 semanas."}
        },
        {
            {"Ninguna", "Cirugía dental", "Alergia a pulgas", "Vacunas contra parvovirus y moquillo"},
            {"Chequeo dental", "Mal aliento"},
            {"Revisión dental periódica", "10/10/2024"},
            {"Control dental en 6 meses y monitorear salud bucal."}
        }
    };

Ventas ventas[capacidadMaxima] = {
    {1, 10, productos[1].precio * 10, "Pedro Martinez", "Pago en efectivo",1,"10/07/2024"},
    {2, 15, productos[2].precio * 15, "Ana Lopez", "Tarjeta de crédito",3,"10/07/2024"},
    {3, 8, productos[3].precio * 8, "Carlos Ruiz", "Transferencia bancaria",4,"11/07/2024"},
    {4, 5, productos[4].precio * 5, "Laura Sanchez", "Pago en efectivo",20,"11/07/2024"}
};



int cantidaddepropietarios = 10;
int cantidaddeproductos = 20; // cantidad de productos del inventario.
int cantidadDeMascotas=10;
int cantidadDeHistorias=10;
int cantidaddeventas=4;