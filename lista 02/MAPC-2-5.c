#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float x, y, z, aux;
    printf("Digite os 3 lados do triângulo: ");
    scanf("%f%*c%f%*c%f%*c", &x, &y, &z);
    aux = x + y;
    if (aux > z)
    {
        aux = aux - z;
        if (aux == y)
        {
            printf("\nO triângulo e equilátero.\n");
        }
        else
        {
            printf("\nO triângulo e isósceles.\n");
        }
    }
    else
    {
        printf("\nNão é um triângulo.\n");
    }
    return 0;
}