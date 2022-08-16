#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int x, y, aux;
    printf("Digite dois números inteiros positivos: ");
    scanf("%d%*c%d%*c", &x, &y);
    aux = x;
    for (int i = 1; i < y; i++)
    {
        x = x * aux;
    }
    printf("\n%d elevado a %d = %d.\n", aux, y, x);
    return 0;
}