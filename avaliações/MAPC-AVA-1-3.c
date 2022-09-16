#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int vetor[12];
    int *p_vetor;
    int aux = 0, posicao = 0;
    printf("Digite a matrícula: ");
    for (int i = 0; i < 12; i++)
    {
        scanf("%d%*c", &vetor[i]);
    }
    p_vetor = &vetor;
    for (int i = 0; i < 12; i++)
    {
        if (*(p_vetor + i) < aux || *(p_vetor + i) == 0){
            aux = *(p_vetor + i);
            posicao = i;
        }
    }
    printf("\nMenor valor: %d\nPosição: %d\n", aux, posicao + 1);
    
    return 0;
}