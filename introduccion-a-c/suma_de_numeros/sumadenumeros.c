#include <stdio.h>

int main()
{
    int numeros[10];
    int resultado = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese un numero para sumarlo: \n");
        scanf("%i", &numeros[i]);
    };

    for (int i = 0; i < 10; i++)
    {
        resultado = resultado + numeros[i];
    };
    printf("Resultado de la suma es: %i", resultado);

    return 0;
};
