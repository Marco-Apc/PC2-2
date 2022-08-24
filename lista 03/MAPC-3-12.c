#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 3

int main(){
    setlocale(LC_ALL, "");
    int matriz[5][5], x, linha, coluna, controle = 0;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("Informe o valor da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Informe o valor de X: ");
    scanf("%d", &x);
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (matriz[i][j] == x)
            {
                controle++;
                linha = i;
                coluna = j;
            }
        }
    }
    if (linha == 0 && coluna == 0 && controle == 0)
        printf("\nValor não encontrado!");
    else
        printf("\nValor encontrado na linha %d e coluna %d", linha + 1, coluna + 1);
    return 0;
}