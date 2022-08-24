#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define tam 3

typedef struct Dados
{
    char nome[30], sexo[2];
    float salario;
} dados;

int main(){
    setlocale(LC_ALL, "");
    dados info[tam];
    for (int i = 0; i < tam; i++)
    {
        printf("\nInforme o nome: ");
        fgets(info[i].nome, 30, stdin);
        printf("Informe o sexo, M ou F: ");
        fgets(info[i].sexo, 2, stdin);
        printf("Informe o salário: ");
        scanf("%f", &info[i].salario);
        scanf("%c");
    }
    printf("\nMulheres que ganham mais de R$5 mil: \n");
    for (int i = 0; i < tam; i++)
    {
        if ((strcmp(info[i].sexo, "F") == 0 || strcmp(info[i].sexo, "f") == 0) && info[i].salario >= 5000.00)
        {
            printf("\nNome: %s", info[i].nome);
            printf("Sexo: %s", info[i].sexo);
            printf("Salário: %.2f", info[i].salario);
        }        
    }
    return 0;
}