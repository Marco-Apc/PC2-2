#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int aux = 0;
    printf("Digite o número do dia da semana (de 1 a 7): ");
    scanf("%d", &aux);
    switch (aux)
    {
    case 1:
        printf("\nDomingo.\n");
        break;
    case 2:
        printf("\nSegunda feira.\n");
        break;
    case 3:
        printf("\nTerça feira.\n");
        break;
    case 4:
        printf("\nQuarta feira.\n");
        break;
    case 5:
        printf("\nQuinta feira.\n");
        break;
    case 6:
        printf("\nSexta feira.\n");
        break;
    case 7:
        printf("\nSábado.\n");
        break;
    default:
        printf("\nDia da semana não encontrado.\n");
    }
    return 0;
}