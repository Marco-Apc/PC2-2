#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int matriz[8][4], lin, col;
    for (lin = 0; lin < 8; lin++)
    {
        printf("Informe o primeiro valor: ");
        scanf("%d%*c", &matriz[lin][0]);
        printf("Informe o segundo valor: ");
        scanf("%d%*c", &matriz[lin][1]);
        matriz[lin][2] = matriz[lin][0] + matriz[lin][1];
        matriz[lin][3] = matriz[lin][0] * matriz[lin][1];
    }
    printf("\nValor 1\tValor 2\tSoma\tMultiplicação\n");
    for (lin = 0; lin < 8; lin++)
    {
        for (col = 0; col < 4; col++)
        {
            printf("%d\t", matriz[lin][col]);
        }
        printf("\n");
    }
    return 0;
}