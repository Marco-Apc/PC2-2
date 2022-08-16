#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int a = 0, b = 0, aux = 0;
    int x, y;
    printf("Os 10 primeiros números da sequência de Fibonacci são: ");
    x = 0;
    y = 1;
    printf("%d ", x);
    printf("%d ", y);
    for (int i = 0; i < 8; i++)
    {
        aux = x + y;
        printf("%d ", aux);
        x = y;
        y = aux;
    }
    printf("\n");
    return 0;
}