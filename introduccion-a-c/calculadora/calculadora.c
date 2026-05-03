#include <stdio.h>
#include "funciones.h"

int main(void)
{
    // Variables
    int opcion;
    float resultado;
    float numa;
    float numb;

    do
    {
        // Menú
        printf("------------------------CALCULADORA------------------------\n");
        printf("Seleccione una opción colocando el número de la misma.\n");
        printf("1 - Suma\n");
        printf("2 - Resta\n");
        printf("3 - Multiplicación\n");
        printf("4 - División\n");
        printf("0 - Para salir\n");

        // Input opción y verificación
        printf("Seleccione una opción: ");
        scanf("%i", &opcion);
        if (opcion < 0 || opcion > 4)
        {
            printf("La opción ingresada es incorrecta, ingrese unad nuevamente.\n");
            continue;
        }
        if (opcion == 0)
        {
            printf("Programa finalizado.\n");
            break;
        }

        printf("Ingrese el primer número: ");
        scanf("%f", &numa);
        printf("Ingrese el segundo número: ");
        scanf("%f", &numb);

        // Verificación de división por 0
        while (opcion == 4 && numb == 0)
        {
            printf("Ingrese el segundo número nuevamente:(no se puede dividir por 0): ");
            scanf("%f", &numb);
        };

        // Proceso de cada decisión
        if (opcion == 1) // Suma
        {
            resultado = sumar(numa, numb);
            printf("El resultado de: %.2f + %.2f = %.2f \n", numa, numb, resultado);
        }
        else if (opcion == 2) // Resta
        {
            resultado = restar(numa, numb);
            printf("El resultado de: %.2f - %.2f = %.2f \n", numa, numb, resultado);
        }
        else if (opcion == 3) // Multiplicación
        {
            resultado = multiplicar(numa, numb);
            printf("El resultado de: %.2f x %.2f = %.2f \n", numa, numb, resultado);
        }
        else if (opcion == 4) // División
        {
            resultado = dividir(numa, numb);
            printf("El resultado de: %.2f / %.2f = %.2f \n", numa, numb, resultado);
        }

    } while (opcion != 0);
};
