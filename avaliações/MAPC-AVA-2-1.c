#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

// Escreva um algoritmo em linguagem C que atenda os seguintes requisitos:
// • Crie e leia a partir do teclado valores para um vetor de inteiros de 10 elementos.
// • Crie um novo vetor.
// • Armazene no segundo vetor, os dados do primeiro vetor em ordem inversa.
// • Utilize ponteiro e alocação dinâmica de memória.
// • Imprima os 2 vetores.

int main(){
    setlocale(LC_ALL, "Portuguese");
    int *vetor1;
    vetor1 = calloc(TAM, sizeof(int));

    printf("Preencha o vetor:\n");

    for (int i = 0; i < TAM; i++)
        scanf("%d", &*(vetor1 + i));

    int *vetor2 = calloc(TAM, sizeof(int));

    for (int i = 0; i < TAM; i++)
        printf("%d ", *(vetor1 + i));

    printf("\n");
    for (int i = 1; i <= TAM; i++)
    {
        *(vetor2 + i) = *(vetor1 + TAM - i);
        printf("%d ", *(vetor2 + i));
    }
    
    return 0;
}