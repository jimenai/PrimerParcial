#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "funcionesAuxiliares.h"
#include "ArrayPeliculas.h"
#include "defines.h"


int main()
{
    int flag = 0;
    int salir = 0;
    eGenero generos[TAM_GENEROS] ={
        {1, "Accion"},
        {2, "Comedia"},
        {3, "Drama"},
        {4, "Romance"},
        {5, "Terror"}

    };

    eActor actores[TAM_ACTORES]={   {1, "Scarlett Johansson","Argentina"},{2, "Robert Downey Jr", "EEUU"},{3, "Mark Ruffalo", "canada"},{4, "Chris Evans", "EEUU"},{5, "Chris Hemsworth" , " Argentina"},{6, "Samuel Jackson", "EEUU"},
        {7, "Gwyneth Paltrow", "Canada"},{8, "Paul Rudd",""},{9, "Bradley Cooper", "EEUU"},{10, "Josh Brolin", "Canada"}

    };

    ePelicula pelis[TAM_PELICULAS] = {{1000, "Thor",{2019,2,1},{1, "Accion"}, {2, "Robert  Downey Jr", "EEUU"}},
        {1001, "Cellular",{2013,5,1}, {1,"Accion"},{5, "Chris Hemsworth" , " Argentina"}},{1002, "Men in Black 4",{2004,4,1},{1,"Accion"},{4, "Chris Evans", "EEUU"}},
        {1003, "IronMan",{2019,5,1},{1,"Accion"},  {5, "Chris Hemsworth" , " Argentina"}},
        {1004, "13  Going on 30",{2012,2,1},{1,"Accion"},{2, "Robert  Downey Jr", "EEUU"}},
        {1005, "Lucy", {2004,3,4}, {4,"Romance"}, {3, "Mark Ruffalo", "canada"}},
        {1006, "Nace una estrella", {2014,1,1},{1,"Accion"}, {1, "Scarlett Johansson","Argentina"}},
        {1007, "¿Dime con cuantos?", {2018,9,4}, {4,"Romance"},{9, "Bradley Cooper", "EEUU"}},
        {1008, "Guardianes de la galaxia", {2010,4,4},{4, "Romance"},{4, "Chris Evans", "EEUU"}},
        {1009, "A perfect murder",  {2014,9,1},{1,"Accion"},{9, "Bradley Cooper", "EEUU"}},
        {1010, "La isla", {1995,7,3},{3,"Drama"}, {7, "Gwyneth Paltrow", "Canada"}},
        {1011, "Que paso ayer", {2005,1,3},{3,"Drama"},{1, "Scarlett Johansson","Argentina"}},
        {1012, "Home Alone 3",{2013,9,2},{2,"Comedia" }, {9, "Bradley Cooper", "EEUU"}},
        {1013, "Deadpool",{2015, 12, 7},{2,"Comedia"},{1, "Scarlett Johansson","Argentina"}},
        {1014, "Sherlock Holmes",{1997,1,2}, {1,"Accion"},{10, "Josh Brolin", "Canada"}},
        {1015, "Men in Black 3", {2015,10,1}, {1,"Accion"},{2, "Robert  Downey Jr", "EEUU"}},
        {1016, "Avengers infinity war",  {2011,2,1},{1,"Accion"},{10, "Josh Brolin", "Canada"}},
        {1017, "Grandes esperanzas", {2010,10,1}, {1,"Accion" },{10, "Josh Brolin", "Canada"}},
        {1018, "SWAT",  {2017,10,1}, {4,"Romance"},{7, "Gwyneth Paltrow", "Canada"}},
        {1019, "XxX",  {1995,7,4}, {1,"Accion"},{6, "Samuel Jackson", "EEUU"}}};

     do{
        switch(menu())
        {

        case 1:
            mostrarPeliculasConGeneroActor(pelis, TAM_PELICULAS, actores, TAM_ACTORES, generos, TAM_GENEROS);
            system("pause");
            break;

        case 2:
            mostrarPeliculaNacionalidadActorEEUU(pelis, TAM_PELICULAS, actores, TAM_ACTORES, generos, TAM_GENEROS);
            system("pause");
            break;

        case 3:
           mostrarGenerosConRespectivasPeliculas(pelis, TAM_PELICULAS, actores, TAM_ACTORES, generos, TAM_GENEROS);
            system("pause");
            break;

        case 4:
            mostrarGeneroConCantidadPelicula(pelis, TAM_PELICULAS, actores, TAM_ACTORES, generos, TAM_GENEROS);
            system("pause");
            break;

        case 5:
            //generos con menos peliculas;
            break;
        case 6:
            salir = 6;
            printf("Ha salido del programa");
            system("pause");
            break;
        default:
            printf("\n Opcion invalida\n\n");
            system("break");
        }
    }while(salir);


    return 0;



};

