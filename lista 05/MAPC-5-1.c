#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    char caracter, *p_caracter;
    int inteiro, *p_inteiro;
    float real, *p_real;

    p_caracter = &caracter;
    p_inteiro = &inteiro;
    p_real = &real;

    printf("Digite um caracter: ");
    scanf("%c%*c", p_caracter);
    printf("Digite um inteiro: ");
    scanf("%d%*c", p_inteiro);
    printf("Digite um real: ");
    scanf("%f%*c", p_real);

    printf("Antes da modificacao: \n");
    printf("Caracter: %c\n", caracter);
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);

    *p_caracter += 5;
    *p_inteiro += 5;
    *p_real += 5;

    printf("Depois da modificacao (Adicionado 5 em todas as variaveis): \n");
    printf("Caracter: %c\n", *p_caracter);
    printf("Inteiro: %d\n", *p_inteiro);
    printf("Real: %.2f\n", *p_real);
    
    return 0;
}