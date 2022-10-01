#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL, "Portuguese");
    FILE *ftads;

    ftads = fopen("toninho.txt", "a");

    if (!ftads)
        printf("\nDeu errado o danado do arquivo.\n");

    char str[50] = "TADS 2";

    fputs(str, ftads);

    fclose(ftads);
    
    return 0;
}