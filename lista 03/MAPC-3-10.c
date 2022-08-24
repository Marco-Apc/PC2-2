#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "");
    int vetor[100];
    for (int i = 0; i < 100; i++)
        vetor[i] = rand() % 100;
    for (int i = 0; i < 100; i++)
        printf("%d ", vetor[i]);
    return 0;
}