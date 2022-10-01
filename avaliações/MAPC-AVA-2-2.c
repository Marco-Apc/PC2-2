#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define TAM 100

// Escreva um algoritmo em linguagem C que atenda os seguintes requisitos:
// • Crie um vetor X de inteiros de 100 elementos.
// • Atribua valores entre 0 e 100 de forma randômica para os elementos do vetor.
// • Crie um vetor Y para armazenar todos os números maiores ou iguais a 50.
// • Utilize ponteiro e alocação dinâmica de memória.
// • Imprima os 2 vetores.

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int *X = calloc(TAM, sizeof(int));
    int aux = 0;

    for (int i = 0; i < 100; i++)
    {
        *(X + i) = rand() % 100;
        if (*(X + i) >= 50)
            aux++;
    }

    int *Y = calloc(aux, sizeof(int));

    aux -= aux;

    for (int i = 0; i < 100; i++)
    {
        if (*(X + i) >= 50){
            *(Y + aux) = *(X + i);
            aux++;
        }
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%d ", *(X + i));
    }

    printf("\n\n");

    for (int i = 0; i < aux; i++)
    {
        printf("%d ", *(Y + i));
    }
    
    return 0;
}