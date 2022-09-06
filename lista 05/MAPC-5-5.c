#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    char *string1 = malloc(sizeof(char) * 100);
    char *string2 = malloc(sizeof(char) * 100);

    printf("Digite a primeira string: ");
    scanf("%[^\n]%*c", string1);
    printf("Digite a segunda string: ");
    scanf("%[^\n]%*c", string2);
    
    if ( strncmp(string1, string2, sizeof(string2)) >= 0 ) {
        printf("\nA segunda string ocorre dentro da primeira.");
    } else {
        printf("\nA segunda string não ocorre dentro da primeira.");
    }
    free(string1);
    free(string2);
    
    return 0;
}