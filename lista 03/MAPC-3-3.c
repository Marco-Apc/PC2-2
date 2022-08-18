#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int vetor[10] = {};
    for(int i = 0; i < 10; i++){
        vetor[i] = i * 2 + 1;
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}