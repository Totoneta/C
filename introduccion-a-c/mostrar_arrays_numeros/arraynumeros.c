#include <stdio.h>

void main()
{
    int resultado;
    int numeros[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Introduzca 1 número: \n");
        scanf("%d", &numeros[i]);
    };
    for (int i = 0; i < 5; i++)
    {
        printf("Número %i, posición: %i\n", numeros[i], i);
    };
}
