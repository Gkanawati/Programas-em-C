#include <stdio.h>
#include <stdlib.h>

#define TAM 8

enum status
{
    LIVRE = 0,
    OCUPADO = 1,
    REMOVIDO = 2
};

typedef enum status status;

struct hash
{
    int chave;
    status st;
};

typedef struct hash hash;

int funcao_hashing(int num, int tam);
void mostrar_hash(hash tabela[], int tam);
void inserir(hash tabela[], int pos, int n, int tam);
int buscar(hash tabela[], int n, int tam);
void remover(hash tabela[], int n, int tam);

int main()
{

    hash tabela[TAM];

    int op, pos, num, i;

    // inicializa a tabela
    for (i = 0; i < TAM; i++)
    {
        tabela[i].st = LIVRE;
    }

    do
    {

        printf("\nMENU DE OPCOES\n");
        printf("\n[1] Inserir Elemento");
        printf("\n[2] Mostrar Tabela Hashing");
        printf("\n[3] Excluir Elemento");
        printf("\n[4] Sair");
        printf("\n\nDigite sua opcao: [  ]\b\b");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("\nDigite um numero: ");
            scanf("%d", &num);
            pos = funcao_hashing(num, TAM);
            inserir(tabela, pos, num, TAM);
            break;
        case 2:
            mostrar_hash(tabela, TAM);
            break;
        case 3:
            printf("\nDigite um numero: ");
            scanf("%d", &num);
            remover(tabela, num, TAM);
            break;

        case 4:
            exit(EXIT_SUCCESS);
        }

        getchar();

    } while (op != 4);

    return EXIT_SUCCESS;
}

int funcao_hashing(int num, int tam)
{
    return num % tam;
}

void mostrar_hash(hash tabela[], int tam)
{
    int i;
    for (i = 0; i < tam; i++)
    {
        if (tabela[i].st == OCUPADO)
        {
            printf("\nEntrada %d: %d", i, tabela[i].chave);
        }
    }
}
void inserir(hash tabela[], int pos, int n, int tam)
{
    int i = 0;
    while (i < tam && tabela[(pos + i) % tam].st != LIVRE && tabela[(pos + i) % tam].st != REMOVIDO)
    {
        i = i + 1;
    }

    if (i < tam)
    {
        printf("Posicao: %d", (pos + i) % tam);
        tabela[(pos + i) % tam].chave = n;
        tabela[(pos + i) % tam].st = OCUPADO;
    }
    else
    {
        printf("\nTabela Cheia !");
    }
}
int buscar(hash tabela[], int n, int tam)
{
    int i = 0;
    int pos = funcao_hashing(n, tam);

    while (i < tam && tabela[(pos + i) % tam].st != LIVRE &&
           tabela[(pos + i) % tam].chave != n)
    {
        i = i + 1;
    }

    if (tabela[(pos + i) % tam].chave == n &&
        tabela[(pos + 1) % tam].st != REMOVIDO)
    {
        return (pos + i) % tam;
    }
    else
    {
        return tam;
    }
}
void remover(hash tabela[], int n, int tam)
{
    int posicao = buscar(tabela, n, tam);

    if (posicao < tam)
    {
        tabela[posicao].st = REMOVIDO;
    }
    else
    {
        printf("\n%s", "Elemento nao existe na tabela !");
    }
}