#include "defines.h"

int buscarPelicula(ePelicula pelis[], int tam, int idPelicula);
//int buscarLibrePelicula(ePelicula pelis[], int tamPelicula);
int obtenerGenero(eGenero generos[], int tamGenero, int idGenero, char desc[]);
int obtenerActor(eActor actores[], int tamActores, int idActor, char desc[]);
void mostrarPelicula(eActor actores[], int tamActor, eGenero generos[], int tamGenero, ePelicula peli);
void altaPelicula(ePelicula pelis[], int tam, eActor actores[], int tamActores, eGenero generos[], int tamGeneros);
void mostrarPeliculas(ePelicula pelis[], int tam, eActor actores[], int tamActores, eGenero generos[], int tamGeneros);
void mostrarPeliculaCompleta(eActor actores[], int tamActor, eGenero generos[], int tamGenero, ePelicula peli);
void mostrarPeliculaNacionalidadActorEEUU(ePelicula pelis[], int tam, eActor actores[], int tamActores, eGenero generos[], int tamGeneros);
void mostrarPeliculasConGeneroActor(ePelicula pelis[], int tam, eActor actores[], int tamActores, eGenero generos[], int tamGeneros);
void mostrarGenerosConRespectivasPeliculas(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero);
void mostrarGeneroConCantidadPelicula(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero);
int cantidadPeliculasTerror(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero);
int cantidadPeliculasComedia(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero);
int cantidadPeliculasRomance(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero);
int cantidadPeliculasDrama(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero);
int cantidadPeliculasAccion(ePelicula pelis[], int tam, eActor actores[], int tamActor, eGenero generos[], int tamGenero);



