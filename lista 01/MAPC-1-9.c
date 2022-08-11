#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    double deposito;
    printf("Digite o valor depositado: ");
    scanf("%lf", &deposito);
    deposito = deposito + (deposito * 0.007);
    printf("Valor final: %.2lf", deposito);
    return 0;
}