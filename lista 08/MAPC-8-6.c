#include <stdio.h>
#include <stdlib.h>

// 6) Crie um programa para exibir Y^X(informados pelo usuário).

int potencia(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * potencia(x, y - 1);
}

int main()
{
    int x, y;
    int resultado = 0;
    printf("POTÊNCIA DE X^Y\n");
    printf("\nDigite o x: ");
    scanf("%d%*c", &x);
    printf("\nDigite o y: ");
    scanf("%d%*c", &y);
    resultado = potencia(x, y);
    printf("\nResultado: %d.", resultado);

    return 0;
}