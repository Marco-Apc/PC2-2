// GRUPO
// Marco Antônio Pires de Carvalho
// Gabriel Leal de Oliveira
// Marcelo Augusto Paixão Silva
#include <stdio.h>
#include <stdlib.h>

typedef struct FilaDinamica
{
    int valor;
    struct FilaDinamica *proximo;
} * Fila;

Fila adicionarItem(int valor)
{
    Fila item = (Fila)malloc(sizeof(Fila));
    if (item == NULL)
    {
        printf("Erro\n");
        return NULL;
    }
    else
    {
        item->valor = valor;
        item->proximo = NULL;
        return item;
    }
}

Fila empilhar(int valor, Fila fila)
{
    Fila item = adicionarItem(valor);
    if (fila == NULL)
        return item;
    else
    {
        Fila aux = fila;
        while (aux->proximo != NULL)
            aux = aux->proximo;
        aux->proximo = item;
        return fila;
    }
}

Fila desempilhar(Fila fila)
{
    if (fila == NULL)
        printf("Fila vazia!\n");
    else
    {
        Fila aux;
        aux = fila;
        fila = fila->proximo;
        free(aux);
        aux = NULL;
    }
    return fila;
}

void mostrarFila(Fila fila)
{
    if (fila == NULL)
        printf("Fila vazia!\n");
    else
    {
        Fila aux = fila;
        while (aux != NULL)
        {
            printf("%d ", aux->valor);
            aux = aux->proximo;
        }
    }
}

Fila tamanho(Fila fila){
    int cont = 0;
    Fila aux = fila;
    while (aux != NULL)
    {
        cont++;
        aux = aux->proximo;
    }
    printf("Tamanho da fila: %d\n", cont);
}

int main()
{
    Fila *fila = NULL;
    int opcao = -1;
    int valor = 0;
    do
    {
        printf("====================================\n");
        printf("FILA DINAMICA\n\n");
        printf("Digite uma opcao:\n");
        printf("1 - Empilhar\n");
        printf("2 - Desempilhar\n");
        printf("3 - Mostrar itens\n");
        printf("4 - Tamanho da fila\n");
        printf("0 - Sair\n");

        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite um valor\n");
            scanf("%d", &valor);
            fila = empilhar(valor, fila);
            break;
        case 2:
            fila = desempilhar(fila);
            break;
        case 3:
            printf("Itens da fila: ");
            mostrarFila(fila);
            printf("\n");
            break;
        case 4:
            tamanho(fila);
            break;
        case 0:
            printf("Bye bye...");
            break;

        default:
            printf("Opcao invalida.");
            break;
        }
    } while (opcao != 0);

    return 0;
}