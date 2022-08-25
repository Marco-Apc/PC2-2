#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int NT = 0;
    char NMAT[13] = {};
    char CPF[12] = {};
    char SX[2] = {};
    printf("Digite o nota do aluno: ");
    scanf("%d%*c", &NT);
    printf("Digite a matrícula do aluno: ");
    fgets(NMAT, 13, stdin);
    scanf("%*c");
    printf("Digite o cpf do aluno: ");
    fgets(CPF, 12, stdin);
    scanf("%*c");
    printf("Digite o sexo do aluno: ");
    fgets(SX, 2, stdin);
    scanf("%*c");
    printf("\nNota: %d\nMatrícula: %s\nCPF: %s\nSexo: %s.", NT, NMAT, CPF, SX);    
    return 0;
}