#ifndef DEFINES_H
    #define DEFINES_H
    #include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_GENEROS 5
#define  TAM_PELICULAS 20
#define  TAM_ACTORES 10


typedef struct
{
    int idGenero;
    char descripcionGenero[10];

}eGenero;

typedef struct
{

    int anio;
    int mes;
    int dia;

}eFechaEstreno;

typedef struct
{
    int idActor;
    char nombre[51];
    char paisDeOrigen[20];

}eActor;


typedef struct
{
    int idPelicula;
    char titulo[120];
    eFechaEstreno fechaEstreno;
    eGenero genero;
    eActor actor;

}ePelicula;


#endif // DEFINES_H


