#include <stdio.h>
#include <stdlib.h>

int** alocaMatriz(int tamLinhas, int tamColunas);
void recebeMatriz(int **matriz, int tamLinhas, int tamColunas);
int freeMatriz(int **matriz, int tamLinhas);

int main()
{

    int x, y, i, j;
    int **m1;
    int maior;

    // printf("\nDigite as dimensoes das matrizes: ");
    scanf("%d %d", &x, &y);

    m1 = alocaMatriz(x, y);
    // printf("Lendo a Matriz: \n");
    recebeMatriz(m1, x, y);

    for (i = 0; i < x; i++)
    {
        maior = 0;
        for (j = 0; j < y; j++)
        {
            if (m1[i][j] > maior)
            {
                maior = m1[i][j];
            }
        }
        printf("Maior da linha %d: %d \n", i, maior);
    }

    return freeMatriz(m1, x);
}

int** alocaMatriz(int tamLinhas, int tamColunas)
{
    int **m;
    int i;

    m = (int **)malloc(sizeof(int *) * tamLinhas);
    for (i = 0; i < tamLinhas; i++)
    {
        m[i] = (int *)malloc(sizeof(int) * tamColunas);
    }

    return m;
}

void recebeMatriz(int **matriz, int tamLinhas, int tamColunas)
{
    int i, j;
    for (i = 0; i < tamLinhas; i++)
    {
        for (j = 0; j < tamColunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
}

int freeMatriz(int **matriz, int tamLinhas)
{
    int i;

    // liberando a matiz da memoria
    for (i = 0; i < tamLinhas; i++)
    {
        free(matriz[i]);
    }

    free(matriz);
    return 0;
}