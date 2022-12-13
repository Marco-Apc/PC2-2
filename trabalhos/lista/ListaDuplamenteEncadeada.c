#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no {
    int valor;
    struct no *anterior;
    struct no *proximo;
}tNo ;

typedef struct list {
    struct no *primeiro;
	struct no *ultimo;
	int tamanho;
} tLista;

// Função que aloca um novo nó
tNo *aloca(tLista *lista, int valor){
    tNo *novoNo = malloc(sizeof(tNo));
    if(novoNo){
        novoNo->valor = valor;
        novoNo->anterior = lista->ultimo;
        novoNo->proximo = NULL;
    }
    return novoNo;
}

// Função que insere um novo nó na lista de forma ordenada
void insereOrdenado(tLista *lista, int valor){
    tNo *noNovo = aloca(lista, valor);
    if(lista->primeiro == NULL && lista->ultimo == NULL){
        lista->primeiro = noNovo;
        lista->ultimo = noNovo;
        lista->tamanho += 1;
    } else {
        tNo *aux = lista->primeiro;
        while(aux->proximo != NULL && aux->valor < valor){
            aux = aux->proximo;
        }
        if(aux->valor < valor){
            aux->proximo = noNovo;
            lista->ultimo = noNovo;
            lista->tamanho += 1;
        } else {
            if(aux->anterior == NULL){
                lista->primeiro = noNovo;
                noNovo->proximo = aux;
                noNovo->anterior = NULL;
                lista->tamanho += 1;
            } else {
                aux->anterior->proximo = noNovo;
                noNovo->proximo = aux;
                aux->anterior = noNovo;
                lista->tamanho += 1;
            }
        }
    }
}

// Função que imprime a lista
void exibirLista(tLista *lista) {
	if(lista->tamanho > 0) {
		tNo *aux = lista->primeiro;
		while(aux != NULL) {
			printf("\nMemoria: %p \nValor: %d \nAnterior: %p \nProximo: %p\n\n", aux, aux->valor, aux->anterior, aux->proximo);
			aux = aux->proximo;
		}
	}
}

// Função que remove um nó da lista
void removerItem(tLista *lista, int valor){
    tNo *aux = lista->primeiro;
    while (aux->proximo != NULL && aux->valor != valor)
        aux = aux->proximo;

    if (aux->valor == valor){
        if (aux->anterior == NULL){
            lista->primeiro = aux->proximo;
            aux->proximo->anterior = NULL;
        }
        else if (aux->proximo == NULL){
            lista->ultimo = aux->anterior;
            aux->anterior->proximo = NULL;
        }
        else {
            aux->anterior->proximo = aux->proximo;
            aux->proximo->anterior = aux->anterior;
        }
        free(aux);
        lista->tamanho -= 1;
    }
}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao = -1;
    int valor = NULL;

    tLista *lista = malloc(sizeof(tLista));

    lista->primeiro = NULL;
    lista->ultimo = NULL;
    lista->tamanho = 0;


    do{
        printf("LISTA DUPLAMENTE ENCADEADA\n\n");
        printf("1 - Inserir item\n");
        printf("2 - Exibir lista\n");
        printf("3 - Exibir tamanho da lista\n");
        printf("4 - Remover item\n");
        printf("0 - Sair\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor a ser inserido: ");
            scanf("%d", &valor);
            insereOrdenado(lista, valor);
            break;
        case 2:
            printf("Lista:\n");
            exibirLista(lista);
            break;
        case 3:
            printf("Tamanho da lista: %d\n", lista->tamanho);
            break;
        case 4:
            printf("Digite o valor a ser removido: ");
            scanf("%d", &valor);
            removerItem(lista, valor);
            break;
        case 0:
            printf("\nAte a proxima pessoal!\n");
            break;
        default:
            printf("Opcao invalida!");
            break;
        }
    } while (opcao != 0);

    return 0;
}