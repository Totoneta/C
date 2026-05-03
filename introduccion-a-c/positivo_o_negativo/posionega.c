#include <stdio.h>

void main()
{
    int contadornegativos = 0;
    int contadorpositivos = 0;
    int contadorneutro = 0;
    int numeros[10];

    printf("Bienvenido a '¿Es positivo o negativo?\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese un número: \n");
        scanf("%i", &numeros[i]);
        if (numeros[i] < 0)
        {
            contadornegativos = contadornegativos + 1;
        }
        else if (numeros[i] > 0)
        {
            contadorpositivos = contadorpositivos + 1;
        }
        else
        {
            contadorneutro = contadorneutro + 1;
        };
    };

    printf("Números positivos: %i\n", contadorpositivos);
    printf("Números negativos: %i\n", contadornegativos);
    printf("Número cero: %i\n", contadorneutro);

    printf("Los números ingresados son: \n");
    for (int j = 0; j < 10; j++)
    {
        printf("%i, ", numeros[j]);
    };
}
