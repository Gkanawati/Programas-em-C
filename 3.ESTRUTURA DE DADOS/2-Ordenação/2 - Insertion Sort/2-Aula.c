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

int main()
{

    char string[50] = "Hello! We are learning about strtok";
    int i, line = 50, col = 50;

    char **m = (char **)malloc(line * sizeof(char *));
    for (i = 0; i < line; i++)
        m[i] = (char *)malloc(col * sizeof(char));

    int size = splitMatrix(string, m);

    for (i = 0; i < size; i++)
    {
        printf("%s\n", m[i]);
    }

    for (i = 0; i < line; i++)
        free(m[i]);

    free(m);

    return 0;
}