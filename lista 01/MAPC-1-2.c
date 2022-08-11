#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int a = 0, b = 0;
    int soma = 0, subtracao = 0, multiplicacao = 0, divisao = 0;
    printf("Digite dois algarismos para saber sua soma, subtracao, multiplicacao e divisao: ");
    scanf("%lf%*c%lf", &a, &b);

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;

    printf("Resultado soma: %d.\n", soma);
    printf("Resultado subtracao: %d.\n", subtracao);
    printf("Resultado multiplicacao: %d.\n", multiplicacao);
    printf("Resultado : %d.\n", divisao);

    return 0;
}