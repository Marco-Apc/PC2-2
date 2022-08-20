#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    char nome[20][5], sexo[1][5];
    double salario[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\nInforme o nome: ");
        gets(nome[i]);
        printf("Informe o sexo, M ou F: ");
        gets(sexo[i]);
        printf("Informe o salário: ");
        scanf("%lf%*c", &salario[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        //if (){
//
        //}
    }
    return 0;
}