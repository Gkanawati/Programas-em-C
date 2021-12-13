#include <stdio.h>
#include <string.h>

struct endereco
{
    char nome[100];
    char rua[200];
    int numero;
};

int main()
{
    struct endereco *end;
    end = malloc(sizeof(struct endereco));

    fgets(end->nome, sizeof(end->nome), stdin);
    fgets(end-> rua, sizeof(end->rua), stdin);
    scanf("%d%*c", &end->numero);

    return 0;
}
