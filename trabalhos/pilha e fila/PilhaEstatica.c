#include <stdio.h>
#include <stdlib.h>

// PILHA ESTATICA - VETORES

#define MAX 4

typedef struct
{
    int elementos[MAX]; // PILHA ESTATICA
    int topo;
} TPilha;

// CRIAR PILHA
TPilha *criar_pilha()
{
    TPilha *ppilha;

    ppilha = calloc(1, sizeof(TPilha)); // ALOCACAO DA MEMORIA
    if (ppilha == NULL)
        exit(1);

    ppilha->topo = 0;

    return ppilha;
}

// EMPILHAR ELEMENTO
void empilhar(TPilha *ppilha, int valor)
{
    int i = ppilha->topo;
    if (ppilha->topo < MAX)
    {
        ppilha->elementos[i] = valor;
        ppilha->topo = ppilha->topo + 1;
    }
    else
        printf("Erro, pilha cheia!\n");
}

// DESEMPILHAR ELEMENTO
int desempilhar(TPilha *ppilha)
{
    int i;
    if (ppilha->topo <= 0)
    {
        printf("Erro, pilha vazia!\n");
        return 0;
    }
    else
    {
        ppilha->topo = ppilha->topo - 1;
        i = ppilha->topo;
        return ppilha->elementos[i];
    }
}

// MOSTRAR ITENS DA PILHA
void mostraPilha(TPilha *ppilha)
{
    if (ppilha->topo <= 0)
        printf("Pilha vazia!\n");
    else
    {
        printf("Itens da pilha: ");
        for (int i = ppilha->topo - 1; i >= 0; i--)
            printf("%d ", ppilha->elementos[i]);
    }
}

// MENSURAR TAMANHO DA PILHA
int tamanho(TPilha *ppilha)
{
    return ppilha->topo;
}

// DESTRUIR PILHA
void destruir_pilha(TPilha *ppilha)
{
    free(ppilha);
}

int main(void)
{
    int op = -1;
    int valor;
    int i;
    TPilha *ppilha;

    ppilha = criar_pilha();

    printf("\n------ PILHA ESTATICA -------");

    do
    {
        printf("\n1 - Empilhar");
        printf("\n2 - Desempilhar");
        printf("\n3 - Tamanho da pilha");
        printf("\n4 - Mostrar itens da pilha");
        printf("\n0 - Sair");
        printf("\nDigite a opcao: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\nDigite o valor: ");
            scanf("%d", &valor);
            empilhar(ppilha, valor);
            break;
        case 2:
            valor = desempilhar(ppilha);
            printf("\nValor: %d \n", valor);
            break;
        case 3:
            valor = tamanho(ppilha);
            printf("\nTamanho: %d\n", valor);
            break;
        case 4:
            mostraPilha(ppilha);
            break;
        }

    } while (op != 0);

    destruir_pilha(ppilha);

    return 0;
}