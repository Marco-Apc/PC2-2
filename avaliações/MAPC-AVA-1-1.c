#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int organizaValores(int *A, int *B, int *C)
{
    int aux = 0;
    if ((A == B) && (A == C) && (B == C))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a = 0, b = 0, c = 0;
    int *A, *B, *C;
    A = &a;
    B = &b;
    C = &c;

    printf("Digite os valores para [A], [B] e [C], respectivamente:\n");
    scanf("%d%*c%d%*c%d", A, B, C);

    if (organizaValores(*A, *B, *C) == 1)
        printf("\nOs três valores são iguais.");
    else if (organizaValores(*A, *B, *C) == 0)
        printf("\nValores diferentes.");

    organizaValores(*A, *B, *C);

    printf("\n%d %d %d", *A, *B, *C);

    return 0;
}