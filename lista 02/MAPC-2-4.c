#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    if (num >= 0 && num % 2 == 0)
    {
        printf("\nO número é par e positivo.\n");
    }
    else if (num >= 0 && num % 2 != 0)
    {
        printf("\nO número é impar e positivo.\n");
    }
    if (num < 0 && num % 2 == 0)
    {
        printf("\nO número é par e negativo.\n");
    }
    else if (num < 0 && num % 2 != 0)
    {
        printf("\nO número é impar e negativo.\n");
    }
    return 0;
}