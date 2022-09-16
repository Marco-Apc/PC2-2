#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct Registro
{
    unsigned long long int matricula;
    char nome[40];
} registro;


int main(){
    setlocale(LC_ALL, "Portuguese");
    registro regis, *reg;
    reg = &regis;

    printf("Digite o número da matrícula: ");
    scanf("%ld%*c", &reg->matricula);

    if (reg->matricula % 2 == 0)
        printf("\nNúmero de matrícula par.");
    else 
        printf("\nNúmero de matrícula ímpar.");

    printf("\nDigite o nome completo: ");
    fgets(reg->nome, 40, stdin);

    for (int i = strlen(reg->nome); i >= 0; i--)
        printf("%c", reg->nome[i]);
    
    printf("\n%s", reg->nome);
    return 0;
}