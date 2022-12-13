#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// estrutura da arvore binaria
typedef struct arvore
{
    int valor;
    struct arvore *esquerda;
    struct arvore *direita;
} tArvore;

// funcao para criar um novo no
tArvore *criarNo(int valor)
{
    tArvore *novoNo = (tArvore *)malloc(sizeof(tArvore));
    novoNo->valor = valor;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

// funcao para inserir um novo no na arvore
tArvore *inserirNo(tArvore *raiz, int valor)
{
    if (raiz == NULL)
    {
        raiz = criarNo(valor);
    }
    else if (valor < raiz->valor)
    {
        raiz->esquerda = inserirNo(raiz->esquerda, valor);
    }
    else if (valor > raiz->valor)
    {
        raiz->direita = inserirNo(raiz->direita, valor);
    }
    return raiz;
}

// funcao para imprimir a arvore em ordem
void imprimirArvore(tArvore *raiz)
{
    if (raiz != NULL)
    {
        imprimirArvore(raiz->esquerda);
        printf("%d ", raiz->valor);
        imprimirArvore(raiz->direita);
    }
}

// funcao para buscar um valor na arvore
tArvore *buscarValor(tArvore *raiz, int valor)
{
    if (raiz == NULL)
    {
        return NULL;
    }
    else if (raiz->valor == valor)
    {
        return raiz;
    }
    else if (valor < raiz->valor)
    {
        return buscarValor(raiz->esquerda, valor);
    }
    else
    {
        return buscarValor(raiz->direita, valor);
    }
}

// funcao para excluir no da arvore
tArvore *excluirNo(tArvore *raiz, int valor)
{
    if (raiz == NULL)
    {
        return NULL;
    }
    else if (valor < raiz->valor)
    {
        raiz->esquerda = excluirNo(raiz->esquerda, valor);
    }
    else if (valor > raiz->valor)
    {
        raiz->direita = excluirNo(raiz->direita, valor);
    }
    else
    {
        if (raiz->esquerda == NULL && raiz->direita == NULL)
        {
            free(raiz);
            raiz = NULL;
        }
        else if (raiz->esquerda == NULL)
        {
            tArvore *aux = raiz;
            raiz = raiz->direita;
            free(aux);
        }
        else if (raiz->direita == NULL)
        {
            tArvore *aux = raiz;
            raiz = raiz->esquerda;
            free(aux);
        }
        else
        {
            tArvore *aux = raiz->esquerda;
            while (aux->direita != NULL)
            {
                aux = aux->direita;
            }
            raiz->valor = aux->valor;
            aux->valor = valor;
            raiz->esquerda = excluirNo(raiz->esquerda, valor);
        }
    }
    return raiz;
}

// funcao para liberar a memoria alocada
void liberarArvore(tArvore *raiz)
{
    if (raiz != NULL)
    {
        liberarArvore(raiz->esquerda);
        liberarArvore(raiz->direita);
        free(raiz);
    }
}

// funcao principal
int main()
{
    setlocale(LC_ALL, "Portuguese");
    tArvore *raiz = NULL;
    int opcao = -1, valor;
    do
    {
        printf("\nARVORE BINARIA\n\n");
        printf("1 - Inserir valor na arvore\n");
        printf("2 - Excluir valor da arvore\n");
        printf("3 - Buscar valor na arvore\n");
        printf("4 - Imprimir arvore\n");
        printf("0 - Sair\n\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Valor: ");
            scanf("%d", &valor);
            raiz = inserirNo(raiz, valor);
            break;
        case 2:
            printf("Valor: ");
            scanf("%d", &valor);
            raiz = excluirNo(raiz, valor);
            break;
        case 3:
            printf("Valor: ");
            scanf("%d", &valor);
            tArvore *resultado = buscarValor(raiz, valor);
            if (resultado == NULL)
            {
                printf("Valor não encontrado");
            }
            else
            {
                printf("Valor encontrado");
            }
            break;
        case 4:
            imprimirArvore(raiz);
            break;
        case 0:
            liberarArvore(raiz);
            break;
        default:
            printf("Opção inválida");
            break;
        }
    } while (opcao != 0);

    return 0;
}