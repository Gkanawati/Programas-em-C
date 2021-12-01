#include <stdio.h>
#include <stdlib.h>

float **alocaMatriz(int linhas, int colunas);
void lerMatriz(float **m, int linhas, int colunas);
float **transpMatriz(float **m, int linhas, int colunas);
void exibeMatriz(float **matriz, int linhas, int colunas);

int main()
{
    int x = 0, y = 0;
    float **matriz, **MatrizTransposta;
    scanf("%d %d", &x, &y);

    matriz = alocaMatriz(x, y);
    MatrizTransposta = alocaMatriz(y, x);
    lerMatriz(matriz, x, y);
    MatrizTransposta = transpMatriz(matriz, x, y);
    exibeMatriz(MatrizTransposta, x, y);

    return 0;
}

float **alocaMatriz(int linhas, int colunas)
{

    int i;
    float **matriz;

    matriz = (float **)malloc(linhas * sizeof(float *));
    for (i = 0; i < linhas; i++)
    {
        matriz[i] = (float *)malloc(colunas * sizeof(float));
    }

    return matriz;
}
void lerMatriz(float **m, int linhas, int colunas)
{

    int i, j;

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            scanf("%f", &m[i][j]);
        }
    }
}
float **transpMatriz(float **m, int linhas, int colunas)
{

    int i, j;
    float **matriz;

    matriz = alocaMatriz(colunas, linhas);

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            matriz[j][i] = m[i][j];
        }
    }

    return matriz;
    for (i = 0; i < colunas; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
}

void exibeMatriz(float **matriz, int linhas, int colunas)
{
    int i, j;
    for (i = 0; i < colunas; i++)
    {
        for (j = 0; j < linhas; j++)
        {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}