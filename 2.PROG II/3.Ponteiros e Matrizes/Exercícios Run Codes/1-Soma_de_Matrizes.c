#include <stdio.h>
#include <stdlib.h>

float **alocaMatriz(int linhas, int colunas);
void recebeMatriz(float **matriz, int linhas, int colunas);
float **somaMatriz(float **matriz1, float **matriz2, float **matriz3, int linhas, int colunas);
void exibeMatriz(float **matriz, int linhas, int colunas);

int main()
{

    int x, y, i;
    float **m1, **m2, **m3;

    // printf("\nDigite as dimensoes das matrizes: ");
    scanf("%d %d", &x, &y);

    m1 = alocaMatriz(x, y);
    m2 = alocaMatriz(x, y);
    m3 = alocaMatriz(x, y);
    // printf("Lendo a Matriz: \n");
    recebeMatriz(m1, x, y);
    recebeMatriz(m2, x, y);
    m3 = somaMatriz(m1, m2, m3, x, y);
    exibeMatriz(m3, x, y);

    // liberando a matiz da memoria
    for(i=0;i<x;i++){
        free(m3[i]);
    }

    return 0;
}

float **alocaMatriz(int linhas, int colunas)
{
    float **m;
    int i;

    m = (float **)malloc(sizeof(float *) * linhas);
    for (i = 0; i < linhas; i++)
    {
        m[i] = (float *)malloc(sizeof(float) * colunas);
    }

    return m;
}

void recebeMatriz(float **matriz, int linhas, int colunas)
{
    int i, j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }
}

float **somaMatriz(float **matriz1, float **matriz2, float **matriz3, int linhas, int colunas)
{
    int i, j;
    float **m;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    m = matriz3;
    return m;
}

void exibeMatriz(float **matriz, int linhas, int colunas)
{
    int i, j;
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}