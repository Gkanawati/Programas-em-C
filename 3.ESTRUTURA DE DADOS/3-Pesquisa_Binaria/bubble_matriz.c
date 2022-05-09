#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordena_bubble(char **, int);

int main()
{

    char num[1000];
    int r = 10000;
    int c = 100;
    int i;

    char **mat = (char **)malloc(r * sizeof(char *));
    for (i = 0; i < r; i++)
        mat[i] = (char *)malloc(c * sizeof(char));

    strcpy(num, "teste");
    int len = strlen("teste");

    for (i = 0; i < r; i++)
    {

        sprintf(num, "%d", i);
        // itoa(i,num,10);
        strcat(num, "teste");
        strcpy(mat[i], num);
    }

    printf("%s", mat[0]);
    printf("-----------------------");

    ordena_bubble(mat, r);

    for (i = 0; i < r; i++)
    {
        printf("\n%s", mat[i]);
    }
    return 0;
}

/*alterado aqui */
void ordena_bubble(char **mat, int tamanho)
{
    int i, n;
    char aux[20];

    for (n = 1; n <= tamanho; n++)
    {
        for (i = 0; i < tamanho - 1; i++)
        {
            if (strcmp(mat[i], mat[i + 1]) > 0)
            {
                strcpy(aux, mat[i]);
                strcpy(mat[i], mat[i + 1]);
                strcpy(mat[i + 1], aux);
            }
        }
    }
}