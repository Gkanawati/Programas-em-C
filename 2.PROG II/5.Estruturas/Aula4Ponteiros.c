#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco
{
    char nome[100];
    char rua[200];
    int numero;
};

int main()
{
   /* 
    Modo 1 Usando Ponteiro
    
    struct endereco *end;
    end = malloc(sizeof(struct endereco));

    fgets(end->nome, sizeof(end->nome), stdin);
    strtok(end->nome, "\n");
    fgets(end-> rua, sizeof(end->rua), stdin);
    strtok(end->rua, "\n");
    scanf("%d%*c", &end->numero);

    printf("\n%s", end->nome);
    printf("\n%s", end->rua);
    printf("\n%d", end->numero); 
    
    free(end); */

    struct endereco end1;

    fgets(end1.nome, sizeof(end1.nome), stdin);
    strtok(end1.nome, "\n"); // A função strtok retira o \n do final da string que o fgets lê
    fgets(end1.rua, sizeof(end1.rua), stdin);
    strtok(end1.rua, "\n");
    scanf("%d%*c", &end1.numero);

    struct endereco *endpoint;
    endpoint = &end1;

    printf("\n%s", endpoint->nome);
    printf("\n%s", endpoint->rua);
    printf("\n%d", endpoint->numero);

    return 0;
}
