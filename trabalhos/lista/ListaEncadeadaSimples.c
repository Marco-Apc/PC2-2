#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *primeiro;
    int *ultimo;
    int qttd;
} Lista;

typedef struct no {
    Lista ponteiros;
    int valor;
    struct no *proximo;
} tNo, *pLista;

void inserir(pLista lista, int valor){
    if (lista->valor == NULL){
        pLista no = malloc(sizeof(tNo));
        
    }
}

int main(){
    pLista lista = malloc(sizeof(tNo));
    lista->ponteiros.primeiro = lista;
    lista->ponteiros.ultimo = NULL;
    lista->ponteiros.qttd = 0;
    lista->proximo = NULL;
    lista->valor = NULL;


    return 0;
}