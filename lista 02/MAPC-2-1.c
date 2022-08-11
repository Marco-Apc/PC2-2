#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int a = 0, b = 0;
    printf("Digite dois algarismos para saber qual é o menor: ");
    scanf("%d%*c%d", &a, &b);
    if (a > b)
        printf("\nO algarismo %d é maior.\n", a);
    else if (b < a)
        printf("\nO algarismo %d é maior.\n", b);
    else 
        printf("\nOs algarismos são iguais.\n");
    return 0;
}