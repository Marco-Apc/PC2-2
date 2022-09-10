#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 7

int main(){
    setlocale(LC_ALL, "");
    int *vetor1 = calloc(TAM, sizeof(int));
    printf("Digite 7 algarismos: ");

    for (int i = 0; i < TAM; i++)
    {
        scanf("%d%*c", vetor1);
        vetor1++;
    }

    vetor1 -= TAM;
    int *vetor2 = calloc(TAM, sizeof(int));

    for (int i = 0; i < TAM; i++)
    {
        *vetor2 = *vetor1 * 2;
        printf("\nValor antes: %d\nValor depois: %d\n", *vetor1, *vetor2);
        vetor1++;
        vetor2++;
    }

    vetor1 -= TAM;
    vetor2 -= TAM;

    free(vetor1);
    free(vetor2);
    
    return 0;
}