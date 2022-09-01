#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "");
    double ladoA = 0, ladoB = 0;
    double hipotenusa = 0;

    printf("Digite os dois lados de um triângulo: ");
    scanf("%lf%*c%lf", &ladoA, &ladoB);

    ladoA = ladoA * ladoA;
    ladoB = ladoB * ladoB;
    hipotenusa = ladoA + ladoB;

    printf("\nÉ um triângulo retângulo de hipotenusa %.2lf.", sqrt(hipotenusa));

    return 0;
}