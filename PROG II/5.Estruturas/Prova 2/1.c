#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    char nome[20];
    float nota1;
    float nota2;
};

void getNotas(struct Aluno *al, int n);
float *calculaMedias(struct Aluno *al, int n);
void exibeMedias(struct Aluno *al, float *medias, int n);

int main()
{
    int i, numeroAlunos;
    float *media;
    struct Aluno *estudante;

    scanf("%d", &numeroAlunos);

    estudante = malloc(sizeof(struct Aluno) * numeroAlunos);

    for (i = 0; i < numeroAlunos; i++)
    {
        scanf("%s\n", estudante[i].nome);
        getNotas(estudante, i);
    }

    media = calculaMedias(estudante, numeroAlunos);
    exibeMedias(estudante, media, numeroAlunos);

    return 0;
}

void getNotas(struct Aluno *al, int n)
{
    scanf("%f", &al[n].nota1);
    scanf("%f", &al[n].nota2);
}

float *calculaMedias(struct Aluno *al, int n)
{
    int i;
    float *res;

    res = malloc(sizeof(float) * n);

    for (i = 0; i < n; i++)
    {
        res[i] = (al[i].nota1 + al[i].nota2) / 2;
    }

    return res;
}

void exibeMedias(struct Aluno *al, float *medias, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%s: %.2f\n", al[i].nome, medias[i]);
    }
}