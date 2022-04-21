#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char nome[30];
    float n1, n2, media;
};

void media(struct aluno *a, int n);
void ler(struct aluno[], int n);
void imprime(struct aluno *a, int n);

int main(int argc, char *argv[])
{
    int n;
    printf("Digite qtos alunos: ");
    scanf("%d", &n);
    // struct aluno a[n];
    struct aluno *a;
    a = malloc(sizeof(struct aluno) * n);
    ler(a, n);
    media(a, n);
    imprime(a, n);
    return 0;
}

void ler(struct aluno x[], int n)
{
    int c;
    for (c = 0; c < n; c++)
    {

        printf("nome: ");
        fflush(stdin);
        gets(x[c].nome);
        printf("Digite a nota 1: ");
        scanf("%f", &x[c].n1);
        printf("Digite a nota 2: ");
        scanf("%f", &x[c].n2);
    }
}
void media(struct aluno *a, int n)
{
    int c;
    for (c = 0; c < n; c++)
    {
        a[c].media = (a[c].n1 + a[c].n2) / 2;
    }
}

void imprime(struct aluno a[], int n)
{
    int c;
    for (c = 0; c < n; c++)
    {

        printf("Nome: %s ", a[c].nome);
        printf("Media: %.2f \n", a[c].media);
    }
}