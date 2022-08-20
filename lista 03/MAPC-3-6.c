#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int vetor[10] = {};
    int controle = 0;
    printf("Digite 10 algarismos: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d%*c", &vetor[i]);
        if (vetor[i] % 2 == 0)
            controle++;
    }
    printf("\nQuantidade de algarismos pares: %d.", controle);
    printf("\nAlgarismos pares: ");
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] % 2 == 0)
            printf("\n%d", vetor[i]);
    }
    return 0;
}