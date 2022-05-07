#include <stdio.h>
#include <stdlib.h>

void QuickSort(int *item, int Left, int Right)
{
    /*
    Chamada 1:
    *item = {5, 4, 3, 1, 2}

    left = 0;
    Right = 4;
    i = 3;
    j = 1;

    *item = {2, 1, 3, 4, 5};

    */

    /*
    Chamada 2:
    *item = {2, 1, 3, 4, 5};

    left = 0;
    Right = 1;
    i = 1;
    j = 0;

    *item = {1, 2, 3, 4, 5};

    */

    int i, j;
    int pivo, temp;

    i = Left;
    j = Right;
    pivo = item[(Left + Right) / 2];

    do
    {
        while (item[i] < pivo && i < Right)
        {
            i++;
        }
        while (pivo < item[j] && j > Left)
        {
            j--;
        }

        if (i <= j)
        {
            temp = item[i];
            item[i] = item[j];
            item[j] = temp;
            i++;
            j--;
        }
    } while (i <= j);

    if (Left < j)
    {
        QuickSort(item, Left, j);
    }

    if (i < Right)
    {
        QuickSort(item, i, Right);
    }
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
}

// Driver program to test above functions
int main()
{
    int arr[] = {5, 4, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\nVetor arr[]: \n");
    printArray(arr, n);

    QuickSort(arr, 0, n - 1);
    printf("Vetor Ordenado com Merge Sort: \n");
    printArray(arr, n);

    return 0;
}