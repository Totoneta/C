#include <stdio.h>

int main()
{
    int ordenado[5];
    int numeros[5];
    printf("Introduzca 5 números y serán devueltos en orden.");

    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese un número: ");
        scanf("%d", &numeros[i]);
    };

    for (int j = 0; j < 5; j++)
    {
        for (int k = 1; k < 5; k++)
        {
            if (numeros[j] > numeros[k])
            {
                int temporal = numeros[k];
                numeros[k] = numeros[j];
                numeros[j] = temporal;
            };
            if (j < numeros[k])
            {
                ordenado[j];
            };
        }
    }
    printf("%d", ordenado);

    return 0;
}