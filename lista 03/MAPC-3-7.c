#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int vetor[8];
    int soma = 0, positivos = 0;
    printf("Digite 8 valores inteiros: ");
    for (int i = 0; i < 8; i++)
    {
        scanf("%d%*c", &vetor[i]);
        soma = soma + vetor[i];
        if (vetor[i] >= 0)
            positivos++;
    }
    printf("\nNúmeros digitados:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", vetor[i]);
    }
    printf("\nSoma dos elementos: %d.", soma);
    printf("\n%d números são positivos.", positivos);
    return 0;
}