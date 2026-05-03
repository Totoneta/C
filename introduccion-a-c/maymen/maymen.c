#include <stdio.h>

int main()
{

    int numeros[10];
    int mayor;
    int posicionmayor;
    int menor;
    int posicionmenor;

    printf("Introduce 10 números para armar el arreglo y luego de ingresarlos, te devolerá\nel mayor, el menor y sus posiciones en el array! \n");
    printf("Introduzca un número: \n");
    scanf("%d", &numeros[0]);
    mayor = numeros[0];
    posicionmayor = 0;
    menor = numeros[0];
    posicionmenor = 0;

    for (int i = 1; i < 10; i++)
    {
        printf("Introduzca un número: \n");
        scanf("%d", &numeros[i]);

        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
            posicionmayor = i;
        };

        if (numeros[i] < menor)
        {
            menor = numeros[i];
            posicionmenor = i;
        };
    };

    printf("El mayor número es: %d\n", mayor);
    printf("La posición del mayor número es: %d\n", posicionmayor);
    printf("El menor número es: %d\n", menor);
    printf("La posición del menor número es: %d\n", posicionmenor);

    return 0;
}
