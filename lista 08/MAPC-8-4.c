#include <stdio.h>
#include <stdlib.h>

// 4) Crie um programa para calcular fatorial de Y (informado pelo usuário).

int fatorial(int y)
{
    if (y == 0)
        return 1;
    else
        return y * fatorial(y - 1);
}

int main(){
    int y;
    printf("FATORIAL\n");
    printf("\nDigite um numero: ");
    scanf("%d%*c", &y);
    int resultado = fatorial(y);
    printf("\nResultado: %d.\n", resultado);

    return 0;
}