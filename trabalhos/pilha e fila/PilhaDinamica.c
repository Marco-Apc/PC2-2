// GRUPO
// Marco Antônio Pires de Carvalho
// Gabriel Leal de Oliveira
// Marcelo Augusto Paixão Silva
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    int valor;
    struct no *prox;
} no;

typedef struct
{
    no *topo;
} pilha;

// INICIALIZAR A PILHA
void inicializar(pilha *ptr)
{
    ptr = NULL;
}

// EMPILHAR A PILHA
void empilhar(int valor, pilha *ptr)
{
    no *p = (no *)malloc(sizeof(no));
    if (p == NULL)
        printf("Erro! O no nao foi alocado!\n\n");
    else
    {
        p->valor = valor;
        p->prox = ptr->topo;
        ptr->topo = p;
        printf("Inserido com sucesso!\n\n");
    }
}

// DESEMPILHAR A PILHA
void desempilhar(pilha *ptr)
{
    no *p = ptr->topo;
    int aux;
    if (p == NULL)
        printf("Erro! Pilha vazia!\n\n");
    else
    {
        aux = ptr->topo;
        ptr->topo = p->prox;
        p->prox = NULL;
        free(p);
        printf("\n\n");
    }
}

// MOSTRAR TAMANHO DA PILHA
void tamanho(pilha *ptr){
    int cont = 0;
    no *p = ptr->topo;
    while(p != NULL){
        cont++;
        p = p->prox;
    }
    printf("Tamanho da pilha: %d\n\n", cont);
}

// MOSTRAR OS ITENS DA PILHA
void mostrar(pilha *ptr)
{
    no *p = ptr->topo;
    if (p == NULL)
        printf("Pilha vazia!\n\n");
    else
    {
        printf("Itens da pilha:\n\n");
        while (p != NULL)
        {
            printf("%d\n", p->valor);
            p = p->prox;
        }
        printf("\n");
    }
}

int main()
{
    setlocale(LC_ALL, "");
    pilha *point = (pilha *)malloc(sizeof(pilha));
    if (point == NULL)
        printf("Erro de alocacao do no da pilha!\n");
    else
        inicializar(point);
    int opcao;
    printf("-------------PILHA DINAMICA-------------\n");
    for (;;)
    {
        printf("1 - Empilhar\n");
        printf("2 - Desempilhar\n");
        printf("3 - Tamanho\n");
        printf("4 - Mostrar itens\n");
        printf("5 - Sair\n");
        printf("Digite a opcao: [ ]\b\b");
        scanf("%d", &opcao);
        if (opcao == 1)
        {
            int valor;
            printf("Valor a ser empilhado: ");
            scanf("%d", &valor);
            empilhar(valor, point);
        }
        else if (opcao == 2)
            desempilhar(point);
        else if (opcao == 3)
            tamanho(point);
        else if (opcao == 4)
            mostrar(point);
        else if (opcao == 5)
            return 0;
        else
            printf("Opcao invalida!\n\n");
    }
}
