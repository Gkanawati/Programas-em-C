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

void inicializar(struct Lista *lista);
int inserir(struct Lista *lista, int dado);
int inserirFim(struct Lista *lista, int dado);
int mostrar(struct Lista lista);
int remover(struct Lista *lista, int dado);
int menu();

int main()
{

    int op;
    int dado;
    struct Lista lista;

    inicializar(&lista);

    do
    {
        op = menu();
        switch (op)
        {
        case 1:
            printf("Digite um numero: ");
            scanf("%d", &dado);
            if (inserir(&lista, dado))
                printf("Inserção realizado com sucesso!");
            else
                printf("Falha na inserção!");
            break;

        case 2:
            mostrar(lista);
            break;
        case 3:
            printf("Digite um numero: ");
            scanf("%d", &dado);
            printf("\n%d removidos!!!", remover(&lista, dado));
            break;
        case 4:
            printf("\nTchau!!!");
            break;
        default:
            printf("\nOpção Invalida!!!");
        }

    } while (op != 4);

    return 0;
}

int menu()
{
    int op;
    printf("\n 1 - Inserir no Inicio");
    printf("\n 2 - Mostrar Lista");
    printf("\n 3 - Remover itens");
    printf("\n 4 - Sair\n");
    scanf("%d", &op);
    return op;
}

void inicializar(struct Lista *lista)
{
    lista->inicio = NULL;
    lista->fim = NULL;
}

int inserir(struct Lista *lista, int dado)
{
    struct node *novo = malloc(sizeof(struct node));
    struct node *aux;
    struct node *ant;

    if (novo == NULL)
        return 0;

    novo->dado = dado;

    if (lista->inicio == NULL)
    {
        lista->inicio = novo;
        lista->fim = novo;
        novo->prox = NULL;
    }
    else
    {
        ant = NULL;
        aux = lista->inicio;
        while (aux != NULL && novo->dado > aux->dado)
        {
            ant = aux;
            aux = aux->prox;
        }

        if (ant == NULL)
        {
            novo->prox = lista->inicio;
            lista->inicio = novo;
        }
        else if (aux == NULL)
        {
            lista->fim->prox = novo;
            lista->fim = novo;
            lista->fim->prox = NULL;
        }
        else
        {
            ant->prox = novo;
            novo->prox = aux;
        }
    }

    return 1;
}

int remover(struct Lista *lista, int dado)
{
    struct node *aux;
    struct node *ant;
    int qtdDel = 0;

    aux = lista->inicio;
    ant = NULL;

    if (aux == NULL)
    {
        return 0;
    }

    else
    {
        while (aux != NULL)
        {
            if (aux->dado > dado)
            {
                return qtdDel;
            }
            else if (aux->dado == dado)
            {
                qtdDel++;
                if (aux == lista->inicio)
                {
                    lista->inicio = aux->prox;
                    free(aux);
                    aux = lista->inicio;
                }
                else if (aux == lista->fim)
                {
                    ant->prox = NULL;
                    lista->fim = ant;
                    free(aux);
                    aux = NULL;
                }
                else
                {
                    ant->prox = aux->prox;
                    free(aux);
                    aux = ant->prox;
                }
            }
            else
            {
                ant = aux;
                aux = aux->prox;
            }
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
    return 1;
}