#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int tam;
    int dado;
    struct stack *prox;
};

/*
Chamada das funções normalmente:
void InicializarPilha(struct stack *pilha);
int verificarVazia(struct stack *pilha);
*/

// Criar um Typedef para substituir o struct stack por Pilha
typedef struct stack Pilha;

// As chamadas e função ficam:
void InicializarPilha(Pilha *pilha);
int verificarVazia(Pilha *pilha);
int push(Pilha *pilha, int dadoRecebido);
int pop(Pilha *pilha);
int ImprimeTopo(Pilha pilha);
void ImprimePilha(Pilha pilha);
int maiorDaPilha(Pilha *pilha);

int main()
{
    Pilha pilha1;
    int remove;
    /* struct stack pilha1; */

    InicializarPilha(&pilha1);

    push(&pilha1, 5);
    ImprimePilha(pilha1);

    push(&pilha1, 11);
    ImprimePilha(pilha1);

    push(&pilha1, 18);
    ImprimePilha(pilha1);
    ImprimeTopo(pilha1);

    push(&pilha1, 10);
    push(&pilha1, 77);
    push(&pilha1, 4);

    ImprimePilha(pilha1);
    maiorDaPilha(&pilha1);

    push(&pilha1, 44);
    push(&pilha1, 99);
    push(&pilha1, 65);

    ImprimePilha(pilha1);
    maiorDaPilha(&pilha1);

    // verificar se a pilha esta vazia e retirar o topo:
    if (!verificarVazia(&pilha1))
    {
        remove = pop(&pilha1);
        printf("Removido: %d", remove);
    }
    else
    {
        printf("Pilha esta vazia! \n");
    }

    ImprimePilha(pilha1);

    if (!verificarVazia(&pilha1))
    {
        int remove = pop(&pilha1);
        printf("\nRemovido: %d", remove);
    }
    else
    {
        printf("Pilha esta vazia! \n");
    }

    ImprimePilha(pilha1);
}

// Inicializar uma nova Pilha:
void InicializarPilha(Pilha *pilha)
{
    pilha->tam = 0;
    pilha->prox = NULL;
}

int verificarVazia(Pilha *pilha)
{
    // se esta vazia retorna 1, se não retorna 0;
    return pilha->prox == NULL ? 1 : 0;
}

// Inserir um elemento no topo da Pilha
int push(Pilha *pilha, int dadoRecebido)
{
    // malloc de uma esstrutura do tipo Pilha, com tamnaho de Pilha
    Pilha *novo = (Pilha *)malloc(sizeof(Pilha));
    if (novo == NULL)
    {
        return 0;
    }

    // novo recebe o valor do dado
    novo->dado = dadoRecebido;
    // o prox do novo recebe o prox do "novo" anterior, que estava sendo apontado pela pilha
    novo->prox = pilha->prox;
    // pilha aponta para novo
    pilha->prox = novo;
    // acrescenta tamanhof
    pilha->tam++;

    return 1;
}

// Retirar o elemento do topo da pilha
int pop(Pilha *pilha)
{
    // aux recebe o endereço do elemento do topo da pilha, que a pilha estava apontando
    Pilha *aux = pilha->prox;
    // "topo" recebe o valor do dado do elemento do topo da pilha
    int topo = aux->dado;

    // a pilha recebe o endereço do penultimp valor da pilha
    pilha->prox = pilha->prox->prox; // ou aux->prox
    // exclui o ultimo elemento
    free(aux);

    pilha->tam--;

    // retorna valor excluido
    return topo;
}

int ImprimeTopo(Pilha pilha)
{
    Pilha *aux = pilha.prox;
    printf("Elemento do Topo: %d\n", aux->dado);
    return aux->dado;
}

void ImprimePilha(Pilha pilha)
{
    // aux recebe o topo da pilha
    Pilha *aux = pilha.prox;

    if (aux == NULL)
    {
        printf("\nPilha está vazia! ");
        return;
    }

    printf("\nPilha: \n");

    while (aux != NULL)
    {
        printf("%d ", aux->dado);
        // o valor prox de cada aux recebera o endereço do proximo aux
        aux = aux->prox;
    }
    printf("\n\n");
}

int maiorDaPilha(Pilha *pilha)
{
    Pilha *aux = pilha->prox;
    int maior = aux->dado;
    int i;

    printf("Valor da var maior Inst.1: %d\n", maior);

    if (aux == NULL)
    {
        printf("Pilha esta vazia");
        return;
    }

    /* while (aux != NULL)
    {
        if ((aux->dado) > maior)
        {
            maior = aux->dado;
            aux = aux->prox;
        }
    } */

    for (i = 0; i < pilha->tam; i++)
    {
        if ((aux->prox->dado) > maior)
        {
            maior = aux->prox->dado;
            aux = aux->prox;
        }
    }

    printf("Valor da var maior Inst.2: %d\n", maior);
    printf("\nMaior: ");
    printf("%d \n", aux->dado);
}