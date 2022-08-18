#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int vetor[10] = {};
    int soma = 0;
    printf("Digite 10 algarismos: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d%*c", &vetor[i]);
        soma = soma + vetor[i];
    }
    printf("\nSomatório dos algarismos digitados: %d.", soma);
    printf("\nAlgarismos digitados: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", vetor[i]);

    printf("\n");
    return 0;
}