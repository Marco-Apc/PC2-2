#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    double celsius, fahrenheit;
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (9 * celsius + 160)/5;
    printf("Fahrenheit: %.2lf\n", fahrenheit);
    return 0;
}