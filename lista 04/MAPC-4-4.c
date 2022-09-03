#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void converteValores(double real, double dolar, double euro, double libra)
{
    dolar = real * 2.0357;
    euro = real * 2.7149;
    libra = real * 3.2722;
    printf("\nValores convertidos:"
           "\nDólar: %.4lf"
           "\nEuro: %.4lf"
           "\nLibra: %.4lf",
           dolar, euro, libra);
}

int main()
{
    setlocale(LC_ALL, "");
    double *real = malloc(sizeof(double));
    double *dolar = malloc(sizeof(double));
    double *euro = malloc(sizeof(double));
    double *libra = malloc(sizeof(double));

    printf("Digite o valor em reais para ser convertido: ");
    scanf("%lf", real);
    converteValores(*real, *dolar, *euro, *libra);

    return 0;
}