#include <stdio.h>

struct matriz {
    int tamL;
    int tamC;
    int itens[1000][1000];
};

void mostraMatriz(struct matriz v);

int main() {
    struct matriz m;
    int i, j;
    scanf("%d", &m.tamL);
    scanf("%d", &m.tamC);

    for (i = 0; i < m.tamL; i++)
    {
        for (j = 0; j < m.tamC; j++)
        {
            scanf("%d", &m.itens[i][j]);
        }
    }

    mostraMatriz(m);

    return 0;
}

void mostraMatriz(struct matriz v) {
    int i, j;
    for (i = 0; i < v.tamL; i++)
    {
        for (j = 0; j < v.tamC; j++)
        {
            printf("%d ", v.itens[i][j]);
        }
        printf("\n");
    }
}