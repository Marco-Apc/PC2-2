#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

int main(){
    setlocale(LC_ALL, "");
    int *vetor = calloc(TAM, sizeof(int));
    int aux = 0;

    printf("Digite 10 algarismos: ");

    for (int i = 0; i < TAM; i++)
    {
        scanf("%d%*c", vetor);
        vetor++;
    }
    vetor -= TAM;

    printf("\nDigite quantos valores quer adicionar ao vetor: ");
    do
    {
        scanf("%d%*c", &aux);
        if (aux < 0){
            printf("Valor inválido, digite novamente: ");
        }
    } while (aux < 0);

    vetor = realloc(vetor, TAM + aux);    
    vetor += TAM;

    printf("\nDigite os novos valores: ");
    for (int i = 0; i < aux; i++)
    {
        scanf("%d%*c", vetor);
        vetor++;
    }

    vetor -= TAM + aux;

    printf("\nValores:\n");
    for (int i = 0; i < TAM + aux; i++)
    {
        printf("\n%d", *vetor);
        vetor++;
    }

    vetor -= TAM + aux;

    free(vetor);
    
    return 0;
}