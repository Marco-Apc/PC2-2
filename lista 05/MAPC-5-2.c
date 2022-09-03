#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void trocaValores(int *A, int *B){
    int aux = 0;
    aux = A;
    A = B;
    B = aux;
}

int main(){
    setlocale(LC_ALL, "");
    int *A = malloc(sizeof(int));
    int *B = malloc(sizeof(int));

    printf("Digite a primeira frase: ");
    scanf("%d%*c", A);
    printf("Digite a segunda frase: ");
    scanf("%d%*c", B);

    trocaValores(A, B);

    printf("Frases \"trocadas\":\n");
    printf("%s\n", A);
    printf("%s\n", B);

    free(A);
    free(B);
    return 0;
}