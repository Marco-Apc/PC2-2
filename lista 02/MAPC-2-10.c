#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num;
    printf("Tabuada de 1 a 10\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("\nTabuada de %d\n", i);
        for (int j = 1; j <= 10; j++)
        {
            num = i * j;
            printf("%d x %d = %d\n", i, j, num);
        }
    }
    return 0;
}