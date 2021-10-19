#include <stdio.h>
#include <string.h>

int main()
{
    int n1, n2;
    int i, j;
    int avaliador = 0;

    scanf("%d %d", &n1, &n2);

    int matriz[n1][n2];

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            if (i == j && matriz[i][j] != 1)
            {
                avaliador = +1;
                break;
            }
            else if (i != j && matriz[i][j] != 0)
            {
                avaliador = +1;
                break;
            }
        }
    }

    if (avaliador == 0)
    {
        printf("Eh matriz identidade.");
    }
    else
    {
        printf("Nao eh matriz identidade.");
    }

    return 0;
}