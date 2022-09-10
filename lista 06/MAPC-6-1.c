#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int x, *px;
    px = &x;
    printf("Digite um algarismo inteiro: ");
    scanf("%d%*c", px);
    *px = *px / 5;
    
    return 0;
}