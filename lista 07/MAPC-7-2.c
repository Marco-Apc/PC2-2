#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int TAM = 0;
    printf("Digite quantos algarismos deseja guardar: ");
    scanf("%d%*c", &TAM);
    
    int *vetor = calloc(TAM, sizeof(int));

    printf("\nDigite os algarismos: ");
    for (int i = 0; i < TAM; i++)
    {
        scanf("%d%*c", vetor);
        vetor++;
    }

    vetor--;

    printf("\nAlgarismos em ordem inversa: ");
    for (int i = 0; i < TAM; i++)
    {
        printf("\n%d", *vetor);
        vetor--;
    }

    free(vetor);

    return 0;
}