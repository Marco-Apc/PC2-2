#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

// Escreva um algoritmo em linguagem C que atenda os seguintes requisitos:
// • Crie e leia a partir do teclado valores para um vetor D de inteiros de 10 elementos.
// • Imprima o vetor.
// • Pergunte ao usuário quantos elementos ele quer adicionar ao final desse vetor.
// • Leia a quantidade informada pelo usuário.
// • Imprima o valor presente em cada posição do vetor.
// • Utilize ponteiro e alocação dinâmica de memória.

int main(){
    setlocale(LC_ALL, "Portuguese");
    int *D = calloc(TAM, sizeof(int));
    int aux = 0;

    printf("Digite 10 valores:\n");

    for (int i = 0; i < TAM; i++)
        scanf("%d", &*(D + i));
    
    for (int i = 0; i < TAM; i++)
        printf("%d ", *(D + i));

    printf("\nQuantos elementos deseja adicionar: ");
    do
    {
        scanf("%d", &aux);
        if (aux < 0){
            printf("\nDigite um valor positivo: ");
        }
    } while (aux < 0);

    for (int i = TAM; i < TAM + aux; i++)
        scanf("%d", &*(D + i));
    
    D = realloc(D, sizeof(int) * (TAM + aux));

    for (int i = 0; i < TAM + aux; i++)
        printf("%d ", *(D + i));
    
    return 0;
}