#include <stdio.h>
#include <stdlib.h>

struct node
{
    int dado;
    struct node *prox;
};

struct Lista
{
    struct node *inicio;
    struct node *fim;
} Lista;

struct stack
{
    int tam;
    int dado;
    struct stack *prox;
};

typedef struct stack Pilha;

void inicializar(struct Lista *lista);
int inserirInicio(struct Lista *lista, int dado);
int mostrar(struct Lista lista);

void inicializarPilha(Pilha *pilha);
int estaVazia(Pilha *pilha);
int push(Pilha *pilha, int dado);
int pop(Pilha *pilha);
int imprimeTopo(Pilha pilha);
void imprimeTudo(Pilha pilha);
int main()
{
    int op, m, n, i;
    int dado;
    struct Lista lista;
    struct Lista lista2;

    Pilha p1;
    Pilha p2;

    inicializar(&lista);
    inicializar(&lista2);

    printf("Digite um numero m para o tamanho da lista 1:\n");
    scanf("%d", &m);

    printf("Digite um numero n para o tamanho da lista 2:\n");
    scanf("%d", &n);

    printf("Gerando numeros aleatorios da lista 1 de 0 a 100:\n");
    for (i = 0; i < m; i++)
    {
        inserirInicio(&lista, rand() % 100);
    }

    mostrar(lista);

    printf("\n");

    printf("Gerando numeros aleatorios da lista 2 de 0 a 100:\n");
    for (i = 0; i < n; i++)
    {
        inserirInicio(&lista2, rand() % 100);
    }

    mostrar(lista2);

    // inserindo por push na Pilha
    for (i = 0, i < n; i++)
    {
        push(&p1, lista[i]);
    }

    return 0;
}

void inicializar(struct Lista *lista)
{
    lista->inicio = NULL;
    lista->fim = NULL;
}

int inserirInicio(struct Lista *lista, int dado)
{
    struct node *novo = malloc(sizeof(struct node));

    if (novo == NULL)
        return 0;

    novo->dado = dado;

    if (lista->inicio == NULL)
    {
        lista->inicio = novo;
        lista->fim = novo;
        lista->fim->prox = NULL;
    }
    else
    {
        novo->prox = lista->inicio;
        lista->inicio = novo;
    }

    return 1;
}

int mostrar(struct Lista lista)
{
    struct node *aux;

    if (lista.inicio == NULL)
    {
        return 0;
    }
    else
    {
        aux = lista.inicio;
        while (aux != NULL)
        {
            printf("%d ", aux->dado);
            aux = aux->prox;
        }
    }
    return 1;
}

void inicializarPilha(Pilha *pilha)
{
    pilha->tam = 0;
    pilha->prox = NULL;
}

int estaVazia(Pilha *pilha)
{
    return pilha->prox == NULL ? 1 : 0;
}

int push(Pilha *pilha, int dado)
{
    Pilha *novo = (Pilha *)malloc(sizeof(Pilha));
    if (novo == NULL)
        return 0;

    novo->dado = dado;
    novo->prox = pilha->prox;
    pilha->prox = novo;

    pilha->tam++;

    return 1;
}

int pop(Pilha *pilha)
{
    Pilha *aux = pilha->prox;
    int rem = aux->dado;

    pilha->prox = pilha->prox->prox;
    free(aux);

    pilha->tam--;
    return rem;
}

int imprimeTopo(Pilha pilha)
{

    Pilha *aux = pilha.prox;

    return aux->dado;
}

void imprimeTudo(Pilha pilha)
{

    Pilha *aux = pilha.prox;

    if (aux == NULL)
    {
        printf("\nPilha esta vazia !");
        return;
    }

    printf("\nPilha\n");

    while (aux != NULL)
    {
        printf("%d  ", aux->dado);
        aux = aux->prox;
    }
    printf("\n");
}