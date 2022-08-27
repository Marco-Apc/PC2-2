#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double soma(double a, double b){
    return a + b;
}
double subtracao(double a, double b){
    return a - b;
}
double multiplicacao(double a, double b){
    return a * b;
}
double divisao(double a, double b){
    return a / b;
}

int main()
{
    setlocale(LC_ALL, "");
    int comando = 0;
    double a = 0, b = 0;
    printf("Digite dois números: ");
    scanf("%lf%*c%lf", &a, &b);
    printf("O que deseja fazer:"
           "\n[1] - Soma"
           "\n[2] - Subtração"
           "\n[3] - Multiplicação"
           "\n[4] - Divisão");

    printf("\n");
    do
    {
        scanf("%d", &comando);
        if (comando < 1 || comando > 4)
            printf("\nComando inválido, digite novamente: ");
    } while (comando < 1 || comando > 4);
    switch (comando)
    {
    case 1:
        printf("\nResultado: %.2lf", soma(a, b));
        break;
    case 2:
        printf("\nResultado: %.2lf", subtracao(a, b));
        break;
    case 3:
        printf("\nResultado: %.2lf", multiplicacao(a, b));
        break;
    case 4:
        printf("\nResultado: %.2lf", divisao(a, b));
        break;
    default:
        break;
    }
    return 0;
}