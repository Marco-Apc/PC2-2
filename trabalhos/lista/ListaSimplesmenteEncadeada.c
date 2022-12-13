#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 3

typedef struct no {
    int valor;
    struct no *proximo;
}tNo ;

typedef struct list {
    struct no *primeiro;
	struct no *ultimo;
	int tamanho;
} tLista;

tNo *aloca(int x) {
	tNo *noNovo = malloc(sizeof(tNo));
	if(noNovo){
        noNovo->valor = x;
        noNovo->proximo = NULL;
    }
    //printf("\nNovoNo: %p Valor: %d\n", noNovo, noNovo->valor);
	return noNovo;
}

void inserirOrdenado(tLista *lista, int valor){
	tNo *noNovo = aloca(valor);
	tNo *noAtual = lista->primeiro;
	tNo *noAnterior = NULL;
	if(lista->tamanho == 0){
		lista->primeiro = noNovo;
		lista->ultimo = noNovo;
		lista->tamanho++;
	}else{
		while(noAtual != NULL && noAtual->valor < valor){
			noAnterior = noAtual;
			noAtual = noAtual->proximo;
		}
		if(noAnterior == NULL){
			noNovo->proximo = lista->primeiro;
			lista->primeiro = noNovo;
			lista->tamanho++;
		}else{
			noNovo->proximo = noAtual;
			noAnterior->proximo = noNovo;
			lista->tamanho++;
		}
	}
}

void removerItem(tLista *lista, int valor){
	tNo *noAtual = lista->primeiro;
	tNo *noAnterior = NULL;
	if(lista->tamanho == 0){
		printf("Lista vazia!");
	}else{
		while(noAtual != NULL && noAtual->valor != valor){
			noAnterior = noAtual;
			noAtual = noAtual->proximo;
		}
		if(noAtual == NULL){
			printf("Valor não encontrado!");
		}else{
			if(noAnterior == NULL){
				lista->primeiro = noAtual->proximo;
				lista->tamanho--;
			}else{
				noAnterior->proximo = noAtual->proximo;
				lista->tamanho--;
			}
			free(noAtual);
		}
	}
}

void insere(tLista *lista, int x) {
	tNo *noNovo = aloca(x);
	printf("\nNovoNo: %p Valor: %d\n", noNovo, noNovo->valor);
	if(lista->primeiro == NULL && lista->ultimo == NULL){
		lista->primeiro = noNovo;
		lista->ultimo = noNovo;
		lista->tamanho += 1;
	} else {
		tNo *aux = lista->ultimo;
		aux->proximo = noNovo;
		lista->ultimo = noNovo;
		lista->tamanho += 1;
	}
	printf("\n-- Lista --\nPrimeiro: %p\nUltimo: %p\ntamanho: %d\n", lista->primeiro, lista->ultimo, lista->tamanho);
}

void imprime(tLista *lista) {
	if(lista->tamanho > 0) {
		tNo *aux = lista->primeiro;
		while(aux) {
			printf("Memoria: %p Valor: %d Proximo: %p\n", aux, aux->valor, aux->proximo);
			aux = aux->proximo;
		}
	}
}


int main ()
{
	setlocale(LC_ALL,"Portuguese");
	
	tLista *lista = malloc(sizeof(tLista));

	int valor;
	int opcao = -1;

	while (opcao != 0)
    {
        printf("============== TRABALHO DE LISTA ENCADEADA SIMPLES ==============\n");
        printf("           Edson Salvino, Gabriel Leal, Marco Antonio\n");
        printf("1 - Inserir ordenado\n");
        printf("2 - Exibir tamanho\n");
        printf("3 - Exibir lista\n");
        printf("4 - Remover item\n");
        printf("0 - Sair\n");
        printf("Opcao selecionada: [ ]\b\b");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("=================================================================\n");
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserirOrdenado(lista, valor);
            break;
        case 2:
            printf("=================================================================\n");
            printf("Tamanho da lista: %d\n", lista->tamanho);
            break;
        case 3:
            printf("=================================================================\n");
            imprime(lista);
            break;
        case 4:
            printf("=================================================================\n");
			printf("Digite o valor a ser removido: ");
			scanf("%d", &valor);
			removerItem(lista, valor);
            break;
        case 0:
            printf("Obrigado!\n");
            break;
        default:
            printf("\a");
            printf("Opcao invalida! Digite outra.\n");
            scanf("%*c%c");
            system("cls");
        }
    }
	
    return 0;
}
