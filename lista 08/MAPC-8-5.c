#include <stdio.h>
#include <stdlib.h>

// 5) Crie um programa para exibir a sequência de Fibonacci até Z (informado pelo usuário).

void fibonacci(int primeiro, int segundo, int z)
{
    int aux;
    if (segundo <= z){
        printf("%d ", segundo);
        aux = primeiro;
        primeiro = segundo;
        segundo += aux;
        fibonacci(primeiro, segundo, z);
    }
}
int main()
{
    int z;
    printf("FIBONACCI\n");
    printf("Digite quantos algarismos deseja saber: ");
    scanf("%d%*c", &z);
    fibonacci(0, 1, z);

    return 0;
}