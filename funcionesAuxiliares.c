int menu()
{
    int opcion;

    system("cls");
    printf("  *** ABM Peliculas ***\n\n");
    printf("1- Todas las peliculas con genero y actor\n");
    printf("2-Pelicula cuya nacionalidad actor sea EEUU\n");
    printf("3-Por cada genero el titulo de las peliculas que pertenecen a ese genero\n");
    printf("4-Por cada genero cantidad de peliculas\n");
    printf("5-El/los generos con menos peliculas\n\n");
    printf("6- Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

