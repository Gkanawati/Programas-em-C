#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tamanho 3

struct jogador
{
    char nome[20];
    int idade;
    int gols;
    int Bola_de_Ouro;
    int titulos;
};

void bubbleOrdenaGols(struct jogador *vetor_jogador, int tam);
void BubbleOrdenaBolasOuro(struct jogador *vetor_jogador, int tam);
void BubbleOrdenaTitulos(struct jogador *vetor_jogador, int tam);
void BubbleOrdenaNome(struct jogador *vetor_jogador, int tam);

int main()
{
    int option, i;

    struct jogador *vetor = malloc(tamanho * sizeof(struct jogador));

    strcpy(vetor[0].nome, "Cristiano Ronaldo");
    vetor[0].idade = 37;
    vetor[0].gols = 807;
    vetor[0].Bola_de_Ouro = 5;
    vetor[0].titulos = 33;

    strcpy(vetor[1].nome, "Messi");
    vetor[1].idade = 34;
    vetor[1].gols = 758;
    vetor[1].Bola_de_Ouro = 6;
    vetor[1].titulos = 39;

    strcpy(vetor[2].nome, "Neymar");
    vetor[2].idade = 30;
    vetor[2].gols = 470;
    vetor[2].Bola_de_Ouro = 0;
    vetor[2].titulos = 37;

    printf("\nSelecione o Metodo de Ordenacao: \n");
    printf("1 - Ordenar por Gols\n");
    printf("2 - Ordenar por Bolas de Ouro\n");
    printf("3 - Ordenar por Titulos\n");
    printf("4 - Ordenar por Nome\n");
    printf("\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        bubbleOrdenaGols(vetor, tamanho);
        break;

    case 2:
        BubbleOrdenaBolasOuro(vetor, tamanho);
        break;

    case 3:
        BubbleOrdenaTitulos(vetor, tamanho);
        break;

    case 4:
        BubbleOrdenaNome(vetor, tamanho);
        break;

    default:
        printf("Opcao invalida");
        break;
    }

    for (i = 0; i < tamanho; i++)
    {
        printf("----------------------------\n");
        printf("Nome: %s\n", vetor[i].nome);
        printf("Idade: %d\n", vetor[i].idade);
        printf("Bolas de Ouro: %d\n", vetor[i].Bola_de_Ouro);
        printf("Titulos: %d\n", vetor[i].titulos);
        printf("Gols: %d\n", vetor[i].gols);
    }
}

void bubbleOrdenaGols(struct jogador *vetor_jogador, int tam)
{
    int i, j;
    struct jogador aux;

    for (i = 1; i < tam; i++)
    {
        for (j = 0; j < tam - 1; j++)
        {
            if (vetor_jogador[j].gols < vetor_jogador[j + 1].gols)
            {
                aux = vetor_jogador[j];
                vetor_jogador[j] = vetor_jogador[j + 1];
                vetor_jogador[j + 1] = aux;
            }
        }
    }
}

void BubbleOrdenaBolasOuro(struct jogador *vetor_jogador, int tam)
{
    int i, j;
    struct jogador aux;

    for (i = 1; i < tam; i++)
    {
        for (j = 0; j < tam - 1; j++)
        {
            if (vetor_jogador[j].Bola_de_Ouro < vetor_jogador[j + 1].Bola_de_Ouro)
            {
                aux = vetor_jogador[j];
                vetor_jogador[j] = vetor_jogador[j + 1];
                vetor_jogador[j + 1] = aux;
            }
        }
    }
}

void BubbleOrdenaTitulos(struct jogador *vetor_jogador, int tam)
{
    int i, j;
    struct jogador aux;

    for (i = 1; i < tam; i++)
    {
        for (j = 0; j < tam - 1; j++)
        {
            if (vetor_jogador[j].titulos < vetor_jogador[j + 1].titulos)
            {
                aux = vetor_jogador[j];
                vetor_jogador[j] = vetor_jogador[j + 1];
                vetor_jogador[j + 1] = aux;
            }
        }
    }
}

void BubbleOrdenaNome(struct jogador *vetor_jogador, int tam)
{
    int i, j;
    struct jogador aux;

    for (i = 1; i < tam; i++)
    {
        for (j = 0; j < tam - 1; j++)
        {
            if (strcmp(vetor_jogador[j].nome, vetor_jogador[j + 1].nome) > 0)
            {
                aux = vetor_jogador[j];
                vetor_jogador[j] = vetor_jogador[j + 1];
                vetor_jogador[j + 1] = aux;
            }
        }
    }
}