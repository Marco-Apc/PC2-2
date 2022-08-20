#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int vetor[20] = {};
    int XQualquer = 0, controle = 0;
    printf("Digite 20 algarismos: ");
    for (int i = 0; i < 20; i++)
        scanf("%d%*c", &vetor[i]);
    printf("\nDigite um X qualquer: ");
    scanf("%d%*c", &XQualquer);
    for (int i = 0; i < 20; i++)
    {
        if (XQualquer == vetor[i]){
            printf("\n%d encontrado na posição %d.\n", XQualquer, i);
            controle++;
        }
    }
    if (!controle){
        printf("\n%d não encontrado.\n", XQualquer);
    }
    return 0;
}