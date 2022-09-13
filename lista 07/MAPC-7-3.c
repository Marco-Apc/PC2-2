#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(){
    int *vetor = calloc(TAM, sizeof(int));
    int aux = 0;

    printf("Digite 10 algarismos: ");
    for (int i = 0; i < TAM; i++)
        scanf("%d%*c", &*(vetor + i));

    printf("Digite quantos algarismos deseja adicionar: ");
    do
    {
        scanf("%d%*c", &aux);
        if (aux < 0)
            printf("Valor inválido, digite um valor positivo: ");
    } while (aux < 0);

    vetor = realloc(vetor, (TAM + aux) * sizeof(int));
    // O grande problema era o realloc que estava alocando em espaço diferente do desejado
    // foi só dizer que era do tamanho int usando o sizeof(int) que resolveu o problema

    printf("Digite os algarismos: ");
    for (int i = TAM; i < TAM + aux; i++)
        scanf("%d%*c", &*(vetor + i));
    
    printf("Algarismos digitados: ");
    for (int i = 0; i < TAM + aux; i++)
        printf("%d ", *(vetor + i));

    free(vetor);
    
    return 0;
}