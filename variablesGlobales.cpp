#include "variablesGlobales.h"

// Inicialización de los propietarios preestablecidos
Propietario propietarios[capacidadMaxima] = {
    {1, "Juan Perez", "912345678", 101},
    {2, "Maria Garcia", "923456789", 102},
    {3, "Carlos Sanchez", "934567890", 103},
    {4, "Ana Martinez", "945678901", 104},
    {5, "Luis Gomez", "956789012", 105},
    {6, "Laura Diaz", "967890123", 106},
    {7, "Pedro Rodriguez", "978901234", 107},
    {8, "Sofia Lopez", "989012345", 108},
    {9, "Diego Fernandez", "990123456", 109},
    {10, "Marta Jimenez", "901234567", 110}
};

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
    {15, "Toallitas húmedas Pet Wipes", 5.00, 200},
    {16, "Cortaúñas para perros", 10.00, 80},
    {17, "Suplementos vitamínicos", 20.00, 60},
    {18, "Antiparasitarios Frontline", 30.00, 40},
    {19, "Cepillo dental y pasta", 10.00, 90},
    {20, "Botiquín de primeros auxilios", 25.00, 30}
};
//Agregando datos establecidos de la estructura de mascotas
Mascota mascota[capacidadMaxima] = {
    {1, "BOBY", "Perro", "Bulldog", 3},
    {2, "RUFO", "Hámster","Rata",1},
    {3, "HARRY", "Gato","Siamés",3},
    {4, "PIPO", "Perro","Labrador retriever",2},
    {5, "SAM", "Perro","Chihuahua",3},
    {6, "DOKI", "Perro","Rottweiler", 2},
    {7, "CALVIN", "Perro","Chihuahueño",3},
    {8, "RAMBO", "Perro","Pastor alemán",5},
    {9, "RABU", "Perro","Dóberman",6},
    {10, "LUA", "Perro","Shih Tzu", 1}
};

int cantidaddepropietarios = 10;
int cantidaddeproductos = 20; // Inicializar el número de propietarios
int cantidadDeMascotas=10;