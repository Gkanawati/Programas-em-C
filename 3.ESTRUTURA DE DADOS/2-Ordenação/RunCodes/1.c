#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int splitMatrix(char *string, char **matrix)
{

    int i = 0;

    // Extract the first token
    char *token = strtok(string, " ");
    // loop through the string to extract all other tokens
    while (token != NULL)
    {
        // printf( " %s\n", token ); //printing each token
        strcpy(matrix[i++], token);
        token = strtok(NULL, " ");
    }

    return i;
}

void ordemTamanho(char **matrix, int size)
{
    int i, j, l;
    char *aux;

    int lenMaior, lenAux;

    for (i = 0; i <= size; i++)
    {
        for (j = 0; j <= size; j++)
        {
            lenMaior = strlen(matrix[i]);
            lenAux = strlen(matrix[j]);

            if (lenMaior < lenAux)
            {
                matrix[i] = matrix[j];
                aux = matrix[i];
                matrix[j] = aux;
            }
        }
    }

    for (l = 0; l < size; l++)
    {
        puts(matrix[l]);
    }
};

int main()
{
    char frase[500];
    int i, line = 500, col = 500;

    fgets(frase, 500, stdin);

    char **m = (char **)malloc(line * sizeof(char *));

    for (i = 0; i < line; i++)
    {
        m[i] = (char *)malloc(col * sizeof(char));
    }

    int size = splitMatrix(frase, m);

    ordemTamanho(m, size);

    for (i = 0; i < line; i++)
        free(m[i]);

    free(m);

    return 0;
}