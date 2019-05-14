#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "funcionesAuxiliares.h"

typedef struct
{
    int idGenero;
    char descripcionGenero[10];

} eGenero;

typedef struct
{
    int dia;
    int mes;
    int anio;

} eFechaEstreno;

typedef struct
{
    int idActor;
    char nombre[51];
    char paisDeOrigen[20];

} eActor;


typedef struct
{
    int idPelicula;
    char titulo[120];
    eFechaEstreno fechaEstreno;
    eGenero genero;
    eActor actor;

} ePelicula;


int buscarPelicula(ePelicula pelis[], int tam, int idPelicula)
{

    int indice = -1;

    for(int i=0; i < tam; i++)
    {
        if(pelis[i].idPelicula == idPelicula)
        {
            indice = i;
            break;
        }
    }

    return indice;
}

int buscarLibrePelicula(ePelicula pelis[], int tamPelicula)
{

    int indice = -1;

    for(int i=0; i < tamPelicula; i++)
    {

            indice = i;
            break;
        }
        return indice;
    }


int obtenerGenero(eGenero generos[], int tamGenero, int idGenero)
{
     char desc[10];
    int todoOk = 0;

    for(int i=0; i < tamGenero; i++)    {

        if(idGenero == generos[i].idGenero)
        {

            strcpy(desc, generos[i].descripcionGenero);
            todoOk = 1;
            break;
        }
    }

    return todoOk;
}

/*
int obtenerActor(eActor actores[], int tamActores, int idActor)
{
    char desc[51];
    int todoOk = 0;

    for(int i=0; i < tamActores; i++)    {

        if(idActor == actores[i].idActor)
        {

            strcpy(desc, actores[i].idActor);
            todoOk = 1;
            break;
        }
    }

    return todoOk;
}

*/
void mostrarPelicula(eActor actores[], int tamActor, eGenero generos[], int tamGenero, ePelicula peli)
{
    printf("   %d   %s    %s     %s    \n", peli.idPelicula, peli.titulo, peli.genero.descripcionGenero,  peli.actor.nombre);
}

void mostrarPeliculasConGeneroActor(ePelicula pelis[], int tam, eActor actores[], int tamActores, eGenero generos[], int tamGeneros)
{
    int contador = 0;

    system("cls");

    printf(" ID         TITULO     GENERO   ACTOR/ACTRIZ\n");
    printf(" ------      ------     ----    ------\n");

    for(int i=0; i < tam; i++)
    {

            mostrarPelicula(actores, tamActores, generos, tamGeneros, pelis[i]);
            contador++;

    }
    printf("\n\n");

    if( contador == 0)
    {
        printf("\nNo hay peliculas que mostrar\n");
    }
}


void mostrarGeneros( eGenero generos[], int tamGeneros){

    printf("\n    Generos\n");
    printf(" id     descripcion\n\n");

    for(int i=0; i < tamGeneros; i++){
        printf("  %d      %10s\n", generos[i].idGenero, generos[i].descripcionGenero);
    }
    printf("\n\n");
}

void mostrarActores( eActor actores[], int tamActores){

    printf("\n    Actores\n");
    printf(" id     nombre\n\n");

    for(int i=0; i < tamActores; i++){
        printf("  %d      %10s\n", actores[i].idActor, actores[i].nombre);
    }
    printf("\n\n");
}


void altaPelicula(ePelicula pelis[], int tam, eActor actores[], int tamActores, eGenero generos[], int tamGeneros)
{
    int idPelicula;
    int indice;
    int esta;
        printf("Ingrese indice de la pelicula:" );
        scanf("%d", &idPelicula);

        esta = buscarPelicula(pelis, tam, idPelicula);

        if( esta != -1)
        {
            printf("Existe la pelicula en el sistema");
            mostrarPelicula(actores, tamActores, generos, tamGeneros, pelis[esta]);
        }
        else
        {
            pelis[indice].idPelicula = idPelicula;

            printf("Ingrese titulo: ");
            fflush(stdin);
            gets(pelis[indice].titulo);

            printf("Ingrese fecha de estreno dd/mm/aaaa: ");
            scanf("%d %d %d", &pelis[indice].fechaEstreno.dia, &pelis[indice].fechaEstreno.mes, &pelis[indice].fechaEstreno.anio);

            mostrarGeneros(generos, tamGeneros);

            printf("Ingrese id del genero: ");
            scanf("%d", &pelis[indice].genero.idGenero);

            mostrarActores(actores, tamActores);

            printf("Ingrese id del actor: ");
            scanf("%d", &pelis[indice].actor.idActor);


            printf("Alta pelicula exitosa!!!\n\n");

        }
}

void ordenarPeliculasPorAnio(ePelicula pelis[], int tam){
    int anio;
    int i, j;

    for(j = 0; j < tam-1; j++)
    {
        for(i = 0; i < tam-1; i++){

                if(pelis[i].fechaEstreno.anio > pelis[i+1].fechaEstreno.anio){

                   anio =  pelis[i].fechaEstreno.anio;
                   pelis[i].fechaEstreno.anio =  pelis[i+1].fechaEstreno.anio;
                    pelis[i].fechaEstreno.anio = pelis[i+1].fechaEstreno.anio;
                }
            }

        }
    }

void ordenarActoresPorPais(ePelicula pelis[], int tam){
    char pais[20];
    int i, j;

    for(j = 0; j < tam-1; j++)
    {
        for(i = 0; i < tam-1; i++){

                if(strcmp(pelis[i].actor.nombre, pelis[i+1].actor.nombre) > 0){

                    strcpy(pais, pelis[i].actor.nombre);
                    strcpy(pelis[i].actor.nombre,pelis[i+1].actor.nombre);
                    strcpy(pelis[i+1].actor.nombre,pais );
                }
            }

        }
    }


void mostrarPeliculaNacionalidadActorEEUU(ePelicula pelis[], int tam, eActor actores[], int tamActores, eGenero generos[], int tamGeneros){
     printf(" ID         TITULO     GENERO   ACTOR/ACTRIZ    FECHA ESTRENO\n");
    printf(" ------      ------     ----    ------         --------\n");
    for(int i =0; i<tam; i++){
        if(stricmp(pelis[i].actor.paisDeOrigen, "EEUU")== 0){

        mostrarPeliculaCompleta(actores, tamActores, generos, tamGeneros, pelis[i]);
    }
}
}

void mostrarPeliculaCompleta(eActor actores[], int tamActor, eGenero generos[], int tamGenero, ePelicula peli)
{
    printf("   %d   %s    %s     %s    %d/%d/%d\n", peli.idPelicula, peli.titulo, peli.genero.descripcionGenero,  peli.actor.nombre, peli.fechaEstreno.dia, peli.fechaEstreno.mes, peli.fechaEstreno.anio);
}


void mostrarGenerosConRespectivasPeliculas(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero){
    mostrarPeliculasDrama(pelis, tam, actores, tamActor, generos, tamGenero);
    mostrarPeliculasnAccion(pelis, tam, actores, tamActor, generos, tamGenero);
    mostrarPeliculasnComedia(pelis, tam, actores, tamActor, generos, tamGenero);
    mostrarPeliculasRomance(pelis, tam, actores, tamActor, generos, tamGenero);
    mostrarPeliculasTerror(pelis, tam, actores, tamActor, generos, tamGenero);
}

void mostrarPeliculasTerror(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero){
    printf("\n\nTerror \n");
    int flag = 0;
    for(int i = 0; i < tam; i++){
        if(stricmp(pelis[i].genero.descripcionGenero, "Terror") == 0){
           printf("%s\n", pelis[i].titulo);
           flag = 1;
        }
    }
    if(flag == 0){
        printf("No hay peliculas de terror para mostrar");
    }
}

void mostrarPeliculasDrama(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero){
    printf("Drama: \n");
    int flag = 0;
    for(int i = 0; i < tam; i++){
        if(stricmp(pelis[i].genero.descripcionGenero, "Drama") == 0){
           printf("%s\n", pelis[i].titulo);
            flag = 1;
        }
    }
    if(flag == 0){
        printf("No hay peliculas de drama para mostrar");
    }
}

void mostrarPeliculasRomance(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero){
    printf("\n\nRomance: \n");
    int flag = 0;
    for(int i = 0; i < tam; i++){
        if(stricmp(pelis[i].genero.descripcionGenero, "Romance") == 0){
           printf("%s\n", pelis[i].titulo);
            flag = 1;
        }
    }
    if(flag == 0){
        printf("No hay peliculas de Romance para mostrar");
    }

}

void mostrarPeliculasnComedia(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero){
    printf("\n\nComedia: \n");
    int flag = 0;
    for(int i = 0; i < tam; i++){
        if(stricmp(pelis[i].genero.descripcionGenero, "Comedia") == 0){
           printf("%s\n", pelis[i].titulo);
            flag = 1;
        }
    }
    if(flag == 0){
        printf("No hay peliculas de comedia para mostrar");
    }
}

void mostrarPeliculasnAccion(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero){
    printf("\n\nAccion: \n");
    int flag = 0;
    for(int i = 0; i < tam; i++){
        if(stricmp(pelis[i].genero.descripcionGenero, "Accion") == 0){
           printf("%s\n", pelis[i].titulo);
           flag = 1;
        }
    }
    if(flag == 0){
        printf("No hay peliculas de accion para mostrar");
    }

}

int cantidadPeliculasAccion(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero){
    int contador = 0;
    for(int i = 0; i < tam; i++){
        if(stricmp(pelis[i].genero.descripcionGenero, "Accion") == 0){
            contador++;
        }
    }
    return contador;
}

int cantidadPeliculasDrama(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero){
    int contador = 0;
    for(int i = 0; i < tam; i++){
        if(stricmp(pelis[i].genero.descripcionGenero, "Drama") == 0){
            contador++;
        }
    }
    return contador;
}

int cantidadPeliculasRomance(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero){
    int contador = 0;
    for(int i = 0; i < tam; i++){
        if(stricmp(pelis[i].genero.descripcionGenero, "Romance") == 0){
            contador++;
        }
    }
    return contador;
}

int cantidadPeliculasComedia(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero){
    int contador = 0;
    for(int i = 0; i < tam; i++){
        if(stricmp(pelis[i].genero.descripcionGenero, "Comedia") == 0){
            contador++;
        }
    }
    return contador;
}

int cantidadPeliculasTerror(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero){
    int contador = 0;
    for(int i = 0; i < tam; i++){
        if(stricmp(pelis[i].genero.descripcionGenero, "Terror") == 0){
            contador++;
        }
    }
    return contador;
}


void mostrarGeneroConCantidadPelicula(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero){
    int cantAccion, cantDrama, cantRomance, cantTerror, cantComedia;
    cantAccion = cantidadPeliculasAccion(pelis,tam, actores, tamActor, generos, tamGenero);
    printf("\n\nAccion: %d \n", cantAccion);
    cantDrama = cantidadPeliculasDrama(pelis,tam, actores, tamActor, generos, tamGenero);
    printf("\n\Drama: %d \n", cantDrama);
    cantRomance = cantidadPeliculasRomance(pelis,tam, actores, tamActor, generos, tamGenero);
    printf("\n\Romance: %d \n", cantRomance);
    cantComedia = cantidadPeliculasComedia(pelis,tam, actores, tamActor, generos, tamGenero);
    printf("\n\Comedia: %d \n", cantComedia);
    cantTerror = cantidadPeliculasTerror(pelis,tam, actores, tamActor, generos, tamGenero);
    printf("\n\Terror: %d \n", cantTerror);

}



