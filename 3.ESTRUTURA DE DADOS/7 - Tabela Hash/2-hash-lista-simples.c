#include <stdio.h>
#include <stdlib.h>
#define TAM 8

struct hash
{
    int chave;
    struct hash *prox;
};

typedef struct hash hash;

void inserir(hash *tabela[], int pos, int n);
int funcao_hashing(int num, int tam);
void mostrar_hash(hash *tabela[], int tam);
void excluir_hash(hash *tabela[], int num, int tam);

int main()
{

    hash *tabela[TAM];

    int op, pos, num, i;

    /*inicializa a tabela*/
    for (i = 0; i < TAM; i++)
    {
        tabela[i] = NULL;
    }

    do
    {

        printf("\nMENU DE OPCOES\n");
        printf("\n[1] Inserir Elemento");
        printf("\n[2] Mostrar Tabela Hashing");
        printf("\n[3] Excluir Elemento");
        printf("\n[4] Sair");
        printf("\n\nDigite sua opcao: [ ]\b\b");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\nDigite um numero: ");
            scanf("%d", &num);
            pos = funcao_hashing(num, TAM);
            inserir(tabela, pos, num);
            break;
        case 2:
            mostrar_hash(tabela, TAM);
            getchar();
            break;
        case 3:
            printf("\nDigite um numero: ");
            scanf("%d", &num);
            excluir_hash(tabela, num, TAM);
            break;

        case 4:
            exit(EXIT_SUCCESS);
        }

        getchar();

    } while (op != 4);

    return EXIT_SUCCESS;
}

void inserir(hash *tabela[], int pos, int n)
{
    hash *novo;
    novo = (hash *)malloc(sizeof(hash));
    novo->chave = n;
    novo->prox = tabela[pos];
    tabela[pos] = novo;
}
int funcao_hashing(int num, int tam)
{
    return num % tam;
}
void mostrar_hash(hash *tabela[], int tam)
{
    hash *aux;
    int i, j;

    for (i = 0; i < tam; i++)
    {
        aux = tabela[i];
        j = i;
        while (aux != NULL)
        {
            if (i != j)
            {
                printf("[%d]: %d ", i, aux->chave);
            }
            else
            {
                printf("\n[%d]: %d ", i, aux->chave);
            }
            j++;
            aux = aux->prox;
        }
    }
}
void excluir_hash(hash *tabela[], int num, int tam)
{
    int pos = funcao_hashing(num, tam);
    hash *aux;

    if (tabela[pos] != NULL)
    {
        if (tabela[pos]->chave == num)
        {
            aux = tabela[pos];
            tabela[pos] = tabela[pos]->prox;
            free(aux);
        }
        else
        {
            aux = tabela[pos]->prox;
            hash *ant = tabela[pos];
            while (aux != NULL && aux->chave != num)
            {
                ant = aux;
                aux = aux->prox;
            }
            if (aux != NULL)
            {
                ant->prox = aux->prox;
                free(aux);
            }
            else
            {
                printf("Numero nao encontrado!");
            }
        }
    }
    else
    {
        printf("Numero nao encontrado!");
    }
}