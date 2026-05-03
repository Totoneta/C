#include <stdio.h>

int main()
{   
    int edad;
    char nombre;
    float altura;

    printf("Coloque su edad: ");
    scanf("%i", &edad);

    printf("Coloque la inicial de su nombre: ");
    scanf(" %c", &nombre);

    printf("Coloque su laatura: ");
    scanf("%f", &altura);

    printf("La edad es %i\n", edad);
    printf("La altura es %4f\n", altura);
    printf("El nombre es %c\n", nombre);

    return 0;
}