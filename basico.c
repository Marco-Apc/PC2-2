#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float base, expoente, resultado;

    printf("Digite um numero para saber a raiz quadrada: ");
    scanf("%f", &base);
    resultado = sqrt(base);
    printf("\n\n%f\n\n", resultado);


    printf("Digite a base e pressione Enter e o expoente e pressione Enter: ");
    scanf("%f", &base);
    scanf("%f", &expoente);
    resultado = pow(base, expoente);
    printf("\n\n%f\n\n", resultado);

    return 0;
}