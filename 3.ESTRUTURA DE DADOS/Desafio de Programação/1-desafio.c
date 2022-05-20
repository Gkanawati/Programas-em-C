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
int inserirInicio(struct Lista *lista, int dado);
int inserirFim(struct Lista *lista, int dado);
int mostrar(struct Lista lista);
int remover(struct Lista *lista, int dado);
int menu();

int main()
{

    int op, selectLista;
    int dado;
    struct Lista lista;
    struct Lista lista2;
    struct Lista lista3;

    inicializar(&lista);
    inicializar(&lista2);
    inicializar(&lista3);

    // printf("Inicializando Lista 1... \n\n");
    // printf("Inicializando Lista 2... \n\n");

    do
    {
        selectLista = menu1();
        switch (selectLista)
        {
        case 1:
            do
            {
                op = menu();
                switch (op)
                {
                case 1:
                    printf("Digite um numero: ");
                    scanf("%d", &dado);
                    if (inserirInicio(&lista, dado))
                        printf("Insercao realizado com sucesso!");
                    else
                        printf("Falha na insercao!");
                    break;
                case 2:
                    printf("Digite um numero: ");
                    scanf("%d", &dado);
                    if (inserirFim(&lista, dado))
                        printf("Insercao realizado com sucesso!");
                    else
                        printf("Falha na insercao!");
                    break;
                case 3:
                    mostrar(lista);
                    break;
                case 4:
                    printf("Digite um numero: ");
                    scanf("%d", &dado);
                    printf("\n%d removidos!!!", remover(&lista, dado));
                    break;
                case 5:
                    break;
                default:
                    printf("\nOpcao Invalida!!!");
                }

            } while (op != 5);
            break;
        case 2:
            do
            {
                op = menu();
                switch (op)
                {
                case 1:
                    printf("Digite um numero: ");
                    scanf("%d", &dado);
                    if (inserirInicio(&lista2, dado))
                        printf("Insercao realizado com sucesso!");
                    else
                        printf("Falha na insercao!");
                    break;
                case 2:
                    printf("Digite um numero: ");
                    scanf("%d", &dado);
                    if (inserirFim(&lista2, dado))
                        printf("Insercao realizado com sucesso!");
                    else
                        printf("Falha na insercao!");
                    break;
                case 3:
                    mostrar(lista2);
                    break;
                case 4:
                    printf("Digite um numero: ");
                    scanf("%d", &dado);
                    printf("\n%d removidos!!!", remover(&lista2, dado));
                    break;
                case 5:
                    break;
                default:
                    printf("\nOpcao Invalida!!!");
                }

            } while (op != 5);
            break;
        case 3:
            do
            {
                op = menu();
                switch (op)
                {
                case 1:
                    printf("Digite um numero: ");
                    scanf("%d", &dado);
                    if (inserirInicio(&lista3, dado))
                        printf("Insercao realizado com sucesso!");
                    else
                        printf("Falha na insercao!");
                    break;
                case 2:
                    printf("Digite um numero: ");
                    scanf("%d", &dado);
                    if (inserirFim(&lista3, dado))
                        printf("Insercao realizado com sucesso!");
                    else
                        printf("Falha na insercao!");
                    break;
                case 3:
                    mostrar(lista3);
                    break;
                case 4:
                    printf("Digite um numero: ");
                    scanf("%d", &dado);
                    printf("\n%d removidos!!!", remover(&lista3, dado));
                    break;
                case 5:
                    break;
                default:
                    printf("\nOpcao Invalida!!!");
                }

            } while (op != 5);
            break;
        default:
            break;
        }
    } while (selectLista != 4);

    return 0;
}

int menu1()
{
    int option;
    printf("\n 1 - Entrar no menu da Lista 1.");
    printf("\n 2 - Entrar no menu da Lista 2.");
    printf("\n 3 - Entrar no menu da Lista 3.");
    printf("\n 4 - Sair.\n");
    scanf("%d", &option);

    return option;
}

int menu()
{
    int op;
    printf("\n 1 - Inserir no Inicio");
    printf("\n 2 - Inserir no Fim");
    printf("\n 3 - Mostrar Lista");
    printf("\n 4 - Remover itens");
    printf("\n 5 - Sair para Menu Inicial\n");
    scanf("%d", &op);
    return op;
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

int inserirFim(struct Lista *lista, int dado)
{
    struct node *novo = malloc(sizeof(struct node));

    if (novo == NULL)
    {
        return 0;
    }

    novo->dado = dado;

    if (lista->inicio == NULL)
    {
        lista->inicio = novo;
        lista->fim = novo;
        lista->fim->prox = NULL;
    }
    else
    {
        lista->fim->prox = novo;
        lista->fim = novo;
        lista->fim->prox = NULL;
    }

    return 1;
}

// funcao que remove todas as posições que forem igual à entrada enviada
int remover(struct Lista *lista, int dado)
{
    struct node *aux;
    struct node *ant;
    int qtdDel = 0;

    aux = lista->inicio;
    ant = NULL;

    while (aux != NULL)
    {
        if (aux->dado == dado)
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
            // removendo um elementno intermediario:
            // apenas precisa organizar os elementos intermediários
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