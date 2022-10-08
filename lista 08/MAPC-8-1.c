#include <stdio.h>
#include <stdlib.h>
// 1) Crie um programa que exiba os números múltiplos de 3 compreendidos entre 0 e 100.

void multiplos_de_tres(int num)
{
    if (num < 100)
    {
        printf("%d\n", num);
        num += 3;
        return multiplos_de_tres(num);
    }
}

int main()
{
    int num = 0;
    printf("MULTIPLOS DE TRES DE 0 A 100\n");
    multiplos_de_tres(num);
    return 0;
}