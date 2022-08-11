#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int a = 0, b = 0, aux = 0;
    printf("Digite dois algarismos inteiros: ");
    scanf("%d%*c%d", &a, &b);
    aux = a;
    a = b;
    b = aux;
    printf("Algarismos trocados: %d, %d.\n", a, b);
    return 0;
}