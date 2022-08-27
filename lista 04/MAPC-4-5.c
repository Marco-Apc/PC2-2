#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

double calculaTrapezio(double b, double B, double h){
    double A = 0;
    A = (b + B) * h / 2;
    printf("\nA área do trapézio é de %.2lf.", A);
}

int main(){
    setlocale(LC_ALL, "");
    double baseMenor = 0;
    double baseMaior = 0;
    double altura = 0;

    printf("Digite o valor da base menor: ");
    scanf("%lf%*c", &baseMenor);
    printf("Digite o valor da base maior: ");
    scanf("%lf%*c", &baseMaior);
    printf("Digite o valor da altura: ");
    scanf("%lf%*c", &altura);

    calculaTrapezio(baseMenor, baseMaior, altura);
    
    return 0;
}