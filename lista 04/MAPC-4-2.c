#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 4

int main(){
    setlocale(LC_ALL, "");
    int vetor[tam];
    int controle = 0;
    printf("Preencha um vetor de 15 posições: ");
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &vetor[i]);
        if (vetor[i] == 30)
            controle++;
    }
    if (controle > 0)
    {
        for (int i = 0; i < tam; i++)
        {
            if (vetor[i] == 30)
                printf("\nExiste na %dº posição.", i+1);
        }
        
    }
    return 0;
}