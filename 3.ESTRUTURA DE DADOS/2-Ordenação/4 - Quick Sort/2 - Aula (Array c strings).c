/* C implementation QuickSort */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// A utility function to swap two elements
void swap(char *a, char *b)
{
    char t[21];
    strcpy(t, a);
    *a = *b;
    *b = t[0]; //*patch: corrigido em relação ao vídeo.
}

/*
This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot


Pega um subvetor e pega um subelemento chamado "pivo"
tudo que esta a esquerda do pivo sera menor que ele
e tudo que esta à direita do pivo é maior que ele
*/

int partition(char **arr, int low, int high)
{
    char pivot[20];
    // pivo recebe  o ultimo elemento
    strcpy(pivot, arr[high]);

    int i = (low - 1); // Index of smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (strcmp(arr[j], pivot) <= 0) // arr[j] <= pivot
        {
            i++; // increment index of smaller element
            swap(&arr[i][0], &arr[j][0]);
        }
    }
    swap(&arr[i + 1][0], &arr[high][0]);
    return (i + 1);
}

/*
The main function that implements QuickSort
arr[] --> Array to be sorted,
low  --> Starting index,
high  --> Ending index


Separar o vetor principal em
vetores menores com recursao
*/
void quickSort(char **arr, int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

/* Function to print an array */
void printArray(char *arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%s ", arr[i]);
    printf("n");
}

/* Função para gerar caracteres aleatórios */
void gen_random(char *s, const int len)
{
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < len; i++)
    {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    s[len] = '\0';
}

// Driver program to test above functions
int main()
{
    char s[30];
    int linhas = 30, col = 20, i = 0;

    srand(time(NULL));

    char **matrix;

    matrix = (char **)malloc(sizeof(char *) * linhas);
    for (i = 0; i < linhas; i++)
    {
        matrix[i] = (char *)malloc(sizeof(char) * col);
    }

    for (i = 0; i < linhas; i++)
    {
        gen_random(s, 20);
        strcpy(matrix[i], s);
    }

    for (i = linhas - 10; i < linhas; i++)
    {
        printf("%s\n", matrix[i]);
    }

    quickSort(matrix, 0, linhas - 1);

    printf("\nOrdenado\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s\n", matrix[i]);
    }
    printf("...\n");
    for (i = linhas - 5; i < linhas; i++)
    {
        printf("%s\n", matrix[i]);
    }

    for (i = 0; i < linhas; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}