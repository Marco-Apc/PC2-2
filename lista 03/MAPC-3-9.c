#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 3

int main(){
    setlocale(LC_ALL, "");
    int vetor[20], resultadoMultiplicacao[20];
    for (int i = 0; i < tam; i++)
    {
        printf("Informe um número: ");
        scanf("%d", &vetor[i]);
        resultadoMultiplicacao[i] = i * vetor[i];
    }
    for (int i = 0; i < tam; i++)
        printf("O resultado da multiplicação do número %d pelo seu índice %d é %d.\n", vetor[i], i, resultadoMultiplicacao[i]);
    return 0;
}