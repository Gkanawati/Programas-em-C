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
int inserir(struct Lista *lista, int dado);
int inserirFim(struct Lista *lista, int dado);
int mostrar(struct Lista lista);
int remover(struct Lista *lista, int dado);
int imprimeAntesDoFinal(struct Lista lista, int dado);
int menu();

int main()
{

    struct Lista lista;

    inicializar(&lista);

    inserir(&lista, 3);
    inserir(&lista, 6);
    inserir(&lista, 5);
    inserir(&lista, 1);

    printf("Lista Completa: \n");
    mostrar(lista);

    imprimeAntesDoFinal(lista, 3);
    imprimeAntesDoFinal(lista, 2);
    imprimeAntesDoFinal(lista, 1);

    remover(&lista, 5);
    remover(&lista, 6);
    remover(&lista, 1);

    printf("Lista Completa: \n");
    mostrar(lista);

    return 0;
}

int imprimeAntesDoFinal(struct Lista lista, int dado)
{
    int cont = 0;
    struct node *aux;

    printf("\nMostrando os numeros antes do final: \n");
    aux = lista.fim;
    while (dado != 0)
    {
        aux = aux->ant;
        printf("%d ", aux->dado);
        dado--;
    }

    return 1;
}

void inicializar(struct Lista *lista)
{
    lista->inicio = NULL;
    lista->fim = NULL;
}

int inserir(struct Lista *lista, int dado)
{
    struct node *novo = malloc(sizeof(struct node));

    if (novo == NULL)
        return 0;

    novo->dado = dado;

    if (lista->inicio == NULL)
    {
        novo->prox = NULL;
        novo->ant = NULL;
        lista->inicio = novo;
        lista->fim = novo;
    }
    else
    {
        struct node *aux = NULL;
        aux = lista->inicio;
        while (aux != NULL && novo->dado > aux->dado)
        {
            aux = aux->prox;
        }

        if (aux == lista->inicio)
        {
            novo->prox = lista->inicio;
            novo->ant = NULL;
            lista->inicio->ant = novo;
            lista->inicio = novo;
        }
        else if (aux == NULL)
        {
            lista->fim->prox = novo;
            novo->ant = lista->fim;
            lista->fim = novo;
            lista->fim->prox = NULL;
        }
        else
        {
            novo->prox = aux;
            aux->ant->prox = novo;
            novo->ant = aux->ant;
            aux->ant = novo;
        }
    }

    return 1;
}

int remover(struct Lista *lista, int dado)
{
    struct node *aux;

    int qtdDel = 0;
    aux = lista->inicio;

    if (aux == NULL)
    {
        return 0;
    }

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