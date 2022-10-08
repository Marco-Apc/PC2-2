#include <stdio.h>
#include <stdlib.h>

// 2) Crie um programa para calcular a soma do todos os números de Z até X (informados pelo usuário).

int soma(int z, int x)
{
    if (z <= x)
    {
        return z + soma(z + 1, x);
    }
    else
        return 0;
}

int main()
{
    int x, z;
    int resultado = 0;
    printf("NUMEROS DE X ATE Z\n");
    printf("\nDigite o z: ");
    scanf("%d%*c", &z);
    printf("\nDigite o x: ");
    scanf("%d%*c", &x);
    resultado = soma(z, x);
    printf("\nResultado: %d.", resultado);

    return 0;
}