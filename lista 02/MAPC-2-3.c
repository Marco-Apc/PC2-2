#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float nota1, nota2, nota3, nota4, aux;
    printf("Digite as 4 notas do aluno: ");
    scanf("%f%*c%f%*c%f%*c%f%*c", &nota1, &nota2, &nota3, &nota4);
    aux = nota1 + nota2 + nota3 + nota4;
    aux = aux / 4;
    if (aux >= 6)
        printf("Aprovado com %.2f pontos.\n", aux);
    else
        printf("Reprovado com %.2f pontos.\n", aux);
    return 0;
}