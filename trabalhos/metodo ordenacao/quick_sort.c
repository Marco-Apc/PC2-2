#include <stdio.h>
#include <stdlib.h>

// quick sort comentado passo a passo
void quick_sort(int *v, int esq, int dir) {
    // variaveis auxiliares
    int i, j, x, y;
    // define o pivo
    i = esq;
    j = dir;
    x = v[(esq + dir) / 2];
    // enquanto a esquerda for menor que a direita
    while(i <= j) {
        // enquanto o valor da esquerda for menor que o pivo
        while(v[i] < x && i < dir) {
            // incrementa a esquerda
            i++;
        }
        // enquanto o valor da direita for maior que o pivo
        while(v[j] > x && j > esq) {
            // decrementa a direita
            j--;
        }
        // se a esquerda for menor ou igual a direita
        if(i <= j) {
            // troca os valores
            y = v[i];
            v[i] = v[j];
            v[j] = y;
            i++;
            j--;
        }
    }
    // se a esquerda for menor que a direita
    if(j > esq) {
        // chama a funcao para a esquerda
        quick_sort(v, esq, j);
    }
    // se a direita for maior que a esquerda
    if(i < dir) {
        // chama a funcao para a direita
        quick_sort(v, i, dir);
    }
}

int main(){
    // variaveis auxiliares
    int i, n;
    // le o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    // aloca o vetor
    int *v = (int *) malloc(n * sizeof(int));
    // le os valores do vetor
    printf("Digite os valores do vetor: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    // chama a funcao de ordenacao
    quick_sort(v, 0, n - 1);
    // imprime o vetor ordenado
    printf("Vetor ordenado: ");
    for(i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("fim");
    // libera o vetor
    free(v);
    return 0;
}