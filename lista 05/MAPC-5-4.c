#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int *vetor = malloc(sizeof(int) * 5);

    for (int i = 0; i < 5; i++){
        scanf("%d%*c", vetor);
        vetor++;
    }

    for (int i = 0; i < 5; i++){
        vetor--;
    }

    for (int i = 0; i < 5; i++)
    {
        if (*vetor % 2 == 0) {
            printf("\n%d", *vetor);
        }
        vetor++;
    }
    free(vetor);
    
    return 0;
}