#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 3

int main(){
    setlocale(LC_ALL, "");
    int vetor[tam], maior = 0, menor = 0;
    int controleMaior = 0, controleMenor = 0;
    for (int i = 0; i < tam; i++)
    {
        printf("Informe o %dº número: ", i+1);
        scanf("%d", &vetor[i]);
        if (i == 0){
            maior = vetor[i];
            menor = vetor[i];
        }
        if (vetor[i] > maior){
            maior = vetor[i];
            controleMaior = i;
        }
        if (vetor[i] < menor){
            menor = vetor[i];
            controleMenor = i;
        }
    }
    printf("O maior número é %d e está na posição %d do vetor.\n", maior, controleMaior);
    printf("O menor número é %d e está na posição %d do vetor.\n", menor, controleMenor);

    return 0;
}