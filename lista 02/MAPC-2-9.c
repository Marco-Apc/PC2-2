#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float faren, celsius;
    printf("Farenheit\tCelsius\n");
    for (int i = 40; i <= 80; i++)
    {
        faren = i;
        celsius = 5 * (faren - 32) / 9;
        printf("%.0f\t\t%.2f\n", faren, celsius);
    }
    return 0;
}