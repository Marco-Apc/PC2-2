#include <stdio.h>
#include <stdlib.h>

// 3) Crie um programa para exibir a tabuada de X (informado pelo usuário).

void tabuada(int inicio, int x)
{
    if (inicio <= 10)
    {
        printf("\n%d x %d = %d", inicio, x, (inicio * x));
        inicio++;
        return tabuada(inicio, x);
    }
}

int main()
{
    int x;
    printf("TABUADA\n");
    printf("Digite o numero da tabuada a ser exibida: ");
    scanf("%d%*c", &x);
    tabuada(1, x);
    return 0;
}