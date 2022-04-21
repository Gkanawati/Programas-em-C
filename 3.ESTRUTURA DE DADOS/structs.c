#include <stdio.h>
#include <string.h>

typedef struct aluno
{
    char nome[50];
    float n1, n2, media;
} Aluno;

void read();
void media();
void print();

int main()
{

    read();

    return 0;
}

void read(float n1, float n2, char nomeAlun[])
{
    int numAlunos;
    printf("nº de alunos: \n");
    scanf("%d", &numAlunos);

    Aluno indv[numAlunos];

    for (int i = 0; i < numAlunos; i++)
    {
        printf('Digite o nome do aluno: \n');
        scanf("%s", &indv[i].nome[50]);
        printf("Nota 1: ");
        scanf("%f", &indv[i].n1);
        printf("Nota 2: ");
        scanf("%f", &indv[i].n2);
    }
}