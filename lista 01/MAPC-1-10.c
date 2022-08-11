#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    double valorCompra, prestacao;
    printf("Digite o valor da compra: ");
    scanf("%lf", &valorCompra);
    prestacao = valorCompra / 5;
    printf("Valor das prestações divididas em 5 meses: %.2lf\n", prestacao);
    return 0;
}