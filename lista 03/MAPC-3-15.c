#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int lin, col, a[3][3], b[3][3], c[3][3];
    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("Informe o valor para A [L]: %d [C]: %d -> ", lin, col);
            scanf("%d%*c", &a[lin][col]);
        }
        
    }
    printf("\n");
    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("Informe o valor para B [L]: %d [C]: %d -> ", lin, col);
            scanf("%d%*c", &b[lin][col]);
            c[lin][col] = a[lin][col] * b[lin][col];
        }
        
    }
    printf("\n");
    for (lin = 0; lin < 3; lin++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%d\t", c[lin][col]);
        }
        printf("\n");
    }
    return 0;
}