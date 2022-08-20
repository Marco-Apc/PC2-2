#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    char nome[10][30];
    printf("Digite 10 nomes: ");
    for (int i = 0; i < 10; i++)
    {
        fgets(nome[i], 30, stdin);
    }
    printf("\nNomes digitados: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s", nome[i]);
    }
    printf("\nNomes digitados na ordem inversa: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s", nome[9-i]);
    }
    return 0;
}