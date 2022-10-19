#include <stdio.h>
#include <stdlib.h>
#define TAM 3 // define o tamanho da fila

typedef struct
{
    int primeiro;
    int ultimo;
    int itens[TAM];
} Fila;

void iniciar(Fila *fila)
{
    fila->primeiro = 0;
    fila->ultimo = -1;
}

void enfileirar(Fila *fila, int valor)
{
    if (fila->ultimo < TAM - 1)
    {
        fila->ultimo++;
        fila->itens[fila->ultimo] = valor;
        printf("Inserido com sucesso!\n");
    }
    else
        printf("Erro, fila cheia!\n");
}

void desenfileirar(Fila *fila)
{
    int auxiliar = 0;
    auxiliar = fila->itens[fila->primeiro];
    fila->primeiro++;

    // printf("Removido com sucesso!\n");
    if (fila->primeiro > (fila->ultimo) + 1)
        printf("Erro, fila vazia!\n");
}

void mostraFila(Fila *fila)
{
    if (fila->ultimo <= -1)
        printf("Fila vazia!\n");
    else
    {
        printf("Itens da fila: ");
        for (int i = fila->primeiro; i <= fila->ultimo; i++)
            printf("%d ", fila->itens[i]);
    }
}

void tamanho(Fila *fila)
{
    printf("\nO tamanho da fila eh %d\n", (fila->ultimo - fila->primeiro) + 1);
}

int main()
{
    int opcao = -1;
    int valor = 0;
    Fila fila;

    iniciar(&fila);

    while (opcao != 0)
    {

        valor = 0;

        printf("\n\nDIGITE 0 PARA SAIR\n");
        printf("Escolha uma opcao\n");
        printf("1: Enfileirar\n");
        printf("2: Desenfileirar\n");
        printf("3: Tamanho\n");
        printf("4: Itens\n");

        scanf("%d", &opcao);

        switch (opcao)
        {

        case 1:
            printf("Digite um valor para enfileirar\n");
            scanf("%d", &valor);

            enfileirar(&fila, valor);

            break;

        case 2:
            desenfileirar(&fila);
            break;

        case 3:
            tamanho(&fila);
            break;

        case 4:
            mostraFila(&fila);
            break;

        case 0:
            printf("Tchau! Ate a proxima\n");
            break;

        default:
            printf("Opcao invalida!\n");
            break;
        }
    }

    return 0;
}
