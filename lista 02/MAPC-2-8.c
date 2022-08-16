#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int num;
    for (int i = 0; i <= 100; i++)
    {
        num += i;
        ++i;
    }
    printf("%d\n", num);
    return 0;
}