#include <stdio.h>
#include <stdlib.h>

struct node
{
    int dado;
    struct node *prox;
    struct node *ant;
};

struct Lista
{
    struct node *inicio;
    struct node *fim;
} Lista;

void inicializar(struct Lista *lista);
int inserirInicio(struct Lista *lista, int dado);
int inserirFim(struct Lista *lista, int dado);
int mostrar(struct Lista lista);
int mostrarDeMostrarPraFrente(struct Lista lista);
int remover(struct Lista *lista, int dado);
int menu();

int main()
{

    struct Lista lista;
    inicializar(&lista);

    inserirInicio(&lista, 3);
    inserirInicio(&lista, 4);
    inserirInicio(&lista, 5);

    inserirFim(&lista, 7);
    inserirFim(&lista, 8);
    inserirFim(&lista, 9);

    printf("Mostrar lista: \n");
    mostrar(lista);
    printf("\nMostrar de tras pra frente: \n");
    mostrarDeMostrarPraFrente(lista);

    remover(&lista, 7);
    printf("Mostrar lista: \n");
    mostrar(lista);
    printf("Mostrar de tras pra frente: \n");
    mostrarDeMostrarPraFrente(lista);

    remover(&lista, 5);
    printf("Mostrar lista: \n");
    mostrar(lista);
    printf("Mostrar de tras pra frente: \n");
    mostrarDeMostrarPraFrente(lista);

    remover(&lista, 9);
    printf("Mostrar lista: \n");
    mostrar(lista);
    printf("Mostrar de tras pra frente: \n");
    mostrarDeMostrarPraFrente(lista);

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
        novo->prox = NULL;
        novo->ant = NULL;
    }
    else
    {
        novo->prox = lista->inicio;
        lista->inicio->ant = novo;
        novo->ant = NULL;
        lista->inicio = novo;
    }

    return 1;
}

int inserirFim(struct Lista *lista, int dado)
{
    struct node *novo = malloc(sizeof(struct node));
    if (novo == NULL)
        return 0;

    novo->dado = dado;

    if (novo == NULL)
        return 0;

    if (lista->inicio == NULL)
    {
        lista->inicio = novo;
        lista->fim = novo;
        novo->prox = NULL;
        novo->ant = NULL;
    }
    else
    {
        lista->fim->prox = novo;
        novo->ant = lista->fim;
        novo->prox = NULL;
        lista->fim = novo;
    }

    return 1;
}

int remover(struct Lista *lista, int dado)
{
    struct node *aux;
    int qtdDel = 0;

    aux = lista->inicio;

    while (aux != NULL)
    {
        if (aux->dado == dado)
        {
            qtdDel++;
            if (aux == lista->inicio)
            {
                lista->inicio = aux->prox;
                if (lista->inicio != NULL)
                {
                    lista->inicio->ant = NULL;
                }
                free(aux);
                aux = lista->inicio;
            }
            else if (aux == lista->fim)
            {
                lista->fim = lista->fim->ant;
                lista->fim->prox = NULL;
                free(aux);
                aux = NULL;
            }
            else
            {
                aux->ant->prox = aux->prox;
                aux->prox->ant = aux->ant;
                struct node *aux2;
                aux2 = aux->prox;
                free(aux);
                aux = aux2;
            }
        }
        else
        {
            aux = aux->prox;
        }
    }

    return qtdDel;
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
    printf("\n");
    return 1;
}

int mostrarDeMostrarPraFrente(struct Lista lista)
{
    struct node *aux;

    if (lista.inicio == NULL)
    {
        return 0;
    }
    else
    {
        aux = lista.fim;
        while (aux != NULL)
        {
            printf("%d ", aux->dado);
            aux = aux->ant;
        }
    }
    printf("\n");
    return 1;
}