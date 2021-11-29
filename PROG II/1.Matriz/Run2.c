#include <stdio.h>

int main()
{

    int k = 0, x = 0, row = 0, col = 0;
    float matriz[50][50], soma = 0;

    scanf("%d %d", &row, &col);

    for (k = 0; k < row; k++)
    {
        for (x = 0; x < col; x++)
        {
            scanf("%f", &matriz[k][x]);
            if (k >= x)
            {
                soma = soma + matriz[k][x];
            }
        }
    }
    printf("soma = %.2f\n", soma);

    return 0;
}