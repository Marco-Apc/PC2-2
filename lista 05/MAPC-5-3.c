#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int *vetor = malloc(sizeof(int) * 10);

    printf("Digite 10 valores inteiros: ");

    for (int i = 0; i < 10; i++)
        scanf("%d%*c", vetor++);
    for (int i = 0; i < 10; i++)
        vetor--;

    printf("\nValores armazenados e endereço: ");

    for (int i = 0; i < 10; i++)
    {
        printf("\n%d, %d", *vetor, vetor);
        vetor++;
    }
    free(vetor);
    
    return 0;
}