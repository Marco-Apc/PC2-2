#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int a = 0, b = 0;
    printf("Digite dois algarismos para saber sua soma: ");
    scanf("%d%*c%d", &a, &b);
    a = a + b;
    printf("Resultado: %d.\n", a);
    return 0;
}