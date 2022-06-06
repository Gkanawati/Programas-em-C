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
    struct node *dado;
    struct stack *prox;
};

typedef struct stack Pilha;

void inicializarLista(struct Lista *lista);
void inicializarPilha(Pilha *pilha);
int inserirInicio(struct Lista *lista, int dado);
int mostrar(struct Lista lista);

void concatenaListas(struct Lista *lista, struct Lista *lista2, struct Lista *lista3);
void salvaListaEmPilha(struct Lista *lista, Pilha *pilha);
int pilhaEstaVazia(Pilha *pilha);

void push(Pilha *pilha, struct node *endereco);
struct node *pop(Pilha *pilha);
struct node *encontrarPonto(Pilha *p1, Pilha *p2);

int main()
{
    Pilha p1;
    Pilha p2;

    inicializarPilha(&p1);
    inicializarPilha(&p2);

    int m, n, o, i;

    struct Lista lista;
    struct Lista lista2;
    struct Lista lista3;

    inicializarLista(&lista);
    inicializarLista(&lista2);
    inicializarLista(&lista3);

    printf("Digite um numero m para o tamanho da lista 1: ");
    scanf("%d", &m);

    printf("Digite um numero n para o tamanho da lista 2: ");
    scanf("%d", &n);

    printf("\nGerando a lista 3 de tamanho de 0 ate 15...\n");
    o = rand() % 15;

    printf("\n");

    printf("Gerando numeros aleatorios da lista 1 de 0 a 100: ");
    for (i = 0; i < m; i++)
    {
        inserirInicio(&lista, rand() % 100);
    }

    mostrar(lista);
    printf("\n");

    printf("\n");

    printf("Gerando numeros aleatorios da lista 2 de 0 a 100: ");
    for (i = 0; i < n; i++)
    {
        inserirInicio(&lista2, rand() % 100);
    }
    mostrar(lista2);
    printf("\n");

    printf("\nGerando numeros aleatorios da lista 3 de 0 a 100: ");
    for (i = 0; i < o; i++)
    {
        inserirInicio(&lista3, rand() % 100);
    }

    mostrar(lista3);

    printf("\n");

    concatenaListas(&lista, &lista2, &lista3);

    salvaListaEmPilha(&lista, &p1);
    salvaListaEmPilha(&lista2, &p2);

    struct node *resultado;
    resultado = encontrarPonto(&p1, &p2);

    printf("\nNumero da Intersecao: %d", resultado->dado);

    printf("\nEndereco da Intersecao: %p\n", resultado);

    return 0;
}

void inicializarLista(struct Lista *lista)
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

void concatenaListas(struct Lista *lista, struct Lista *lista2, struct Lista *lista3)
{
    lista->fim->prox = lista3->inicio;
    lista2->fim->prox = lista3->inicio;
}

void salvaListaEmPilha(struct Lista *lista, Pilha *pilha)
{
    struct node *aux_list = lista->inicio;

    while (aux_list != NULL)
    {
        push(pilha, aux_list);
        aux_list = aux_list->prox;
    }
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
            printf("numero:%d  endereco:%p ", aux->dado, &aux->dado);
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

int pilhaEstaVazia(Pilha *pilha)
{
    return pilha->prox == NULL ? 1 : 0;
}

void push(Pilha *pilha, struct node *endereco)
{
    Pilha *novo = (Pilha *)malloc(sizeof(Pilha));

    novo->prox = pilha->prox;
    novo->dado = endereco;
    pilha->prox = novo;

    pilha->tam++;
}

struct node *pop(Pilha *pilha)
{
    Pilha *aux = pilha->prox;
    struct node *rem = aux->dado;

    pilha->prox = pilha->prox->prox;
    free(aux);

    pilha->tam--;
    return rem;
}

struct node *encontrarPonto(Pilha *p1, Pilha *p2)
{
    struct node *end1 = pop(p1);
    struct node *end2 = pop(p2);
    struct node *tempo = end1;

    while (end1 == end2)
    {
        tempo = end1;
        end1 = pop(p1);
        end2 = pop(p2);
    }
    return tempo;
}