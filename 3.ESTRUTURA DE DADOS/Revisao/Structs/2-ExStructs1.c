#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char nome[50];
    float n1, n2, media;
};

void ler(struct aluno[], int n);
void media(struct aluno *a, int n);
void imprime(struct aluno *a, int n);

int main()
{
    int n;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
    struct aluno *a;
    a = malloc(sizeof(struct aluno) * n);
    ler(a, n);
    media(a, n);
    imprime(a, n);

    return 0;
}

void ler(struct aluno x[], int n)
{
    int cont;
    for (cont = 0; cont < n; cont++)
    {
        printf("Nome: ");
        fflush(stdin);
        gets(x[cont].nome);
        printf("Digite a 1a Nota: ");
        scanf("%f", &x[cont].n1);
        printf("Digite a 2a Nota: ");
        scanf("%f", &x[cont].n2);
    }
}

void media(struct aluno *a, int n)
{
    int count;
    for (count = 0; count < n; count++)
    {
        a[count].media = (a[count].n1 + a[count].n2) / 2;
    }
}

void imprime(struct aluno a[], int n)
{
    int count;
    for (count = 0; count < n; count++)
    {
        printf("Nome: %s | ", a[count].nome);
        printf("Media: %.2f \n", a[count].media);
    }
}