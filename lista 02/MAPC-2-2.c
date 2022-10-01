#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int aux = 0;
    printf("Digite o numero do dia da semana (de 1 a 7) e precione Enter: ");
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
        printf("\nTerca feira.\n");
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
        printf("\nSabado.\n");
        break;
    default:
        printf("\nDia da semana nao encontrado.\n");
    }
    system("pause");
    return 0;
}