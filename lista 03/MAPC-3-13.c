#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 3

int main(){
    setlocale(LC_ALL, "");
    char nome[tam][30];
    int idade[tam], i;
    for (i = 0; i < tam; i++)
    {
        printf("Informe o nome: ");
        fgets(nome[i], 30, stdin);
        printf("Informe a idade: ");
        scanf("%d", &idade[i]);
        scanf("%c");
    }
    printf("\nMaiores de 25 anos de idade:\n");
    for (i = 0; i < tam; i++)
    {
        if (idade[i] >= 25)
        {
            printf("\nNome: %s", nome[i]);
            printf("Idade: %d", idade[i]);
        }
    }
    return 0;
}