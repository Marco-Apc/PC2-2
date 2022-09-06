#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void trocaValores(int *A, int *B){
    int aux = 0;
    aux = *A;
    *A = *B;
    *B = aux;
}

int main(){
    setlocale(LC_ALL, "");
    int *A = malloc(sizeof(int));
    int *B = malloc(sizeof(int));

    printf("Digite o primeiro algarismo: ");
    scanf("%d%*c", A);
    printf("Digite o segundo algarismo: ");
    scanf("%d%*c", B);

    trocaValores(A, B);

    printf("Algarismos \"trocados\":\n");
    printf("%d\n", *A);
    printf("%d\n", *B);

    free(A);
    free(B);
    return 0;
}