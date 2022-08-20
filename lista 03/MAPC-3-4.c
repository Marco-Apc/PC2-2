#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num[10] = {}, num5[10] = {};
    printf("Digite 10 números: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d%*c", &num[i]);
        num5[i] = num[i] * 5;
    }
    printf("\nNúmeros digitados: \tNúmeros digitados multiplicados por 5:\n");
    for (int i = 0; i < 10; i++)
        printf("%d\t\t\t%d\n", num[i], num5[i]);
    printf("\n");
    return 0;
}