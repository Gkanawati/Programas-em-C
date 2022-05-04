/* C implementation QuickSort */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Função para trocar os elementos de lugar
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/*
This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot

Pega um subvetor e pega um subelemento chamado "pivo" tudo que esta a esquerda do pivo sera menor que ele
e tudo que esta à direita do pivo é maior que ele

para a função partition sao passados os seguintes parametros:
o vetor para ser ordenado. Ex: vetor[] = {7, 2, 1, 8, 6, 3, 5, 4};
a posição inicial. Ex: 0;
a posição final. Ex: 7;
*/

int partition(int arr[], int low, int high)
{
    // o pivo recebe o item da ultima posição
    int pivot = arr[high]; // pivot

    // o i inicilamente vale o minimo - 1. nesse caso i começa como i = -1;
    int i = (low - 1); // Index of smaller element

    // for de compração, inicia no minimo e vai ate o limite do vetor
    for (int j = low; j <= high - 1; j++)
    {
        // o elemento na posição j é = ou < que pivo?
        // compara o item na posição j com o pivo (o ultimo elemento);
        if (arr[j] <= pivot)
        {
            /* int arr[] = {7, 2, 1, 8, 6, 3, 5, 4}; */
            // i anda uma casa
            i++;

            // troca o item da posição i com a posição j
            // função swap realiza a troca
            swap(&arr[i], &arr[j]);
        }
    }

    /*
    --> Apos finalizar o for, o codigo ira posicionar o pivo no seu local correto
    --> ele pega o pivo e troca com o elemento de posição [i+1]
    --> de forma com que todos os elementos à esquerda do pivo sao menores que ele,
    e todos o elementos à direita sao maiores que ele
    */
    swap(&arr[i + 1], &arr[high]);

    // retorna o valor do i -1
    // para passar um subvetor para a prox chamada na recursao
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
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        // chamada recursiva do quicksort mas com limites diferentes.
        // passa um subvetor menor --> os elementos antes do pivo inicial
        // o pivo agora passa a ser o ultimo elemento do subvetor
        quickSort(arr, low, pi - 1);

        // Apos finalizar a recursao do lado direito, realiza a recursao do lado direito
        // nao é necessario alterar mais o elemento pivo de lugar
        quickSort(arr, pi + 1, high);
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
    int arr[] = {7, 2, 1, 8, 6, 3, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("\nVetor arr[]: \n");
    printArray(arr, n);

    quickSort(arr, 0, n - 1);
    printf("Vetor Ordenado com Merge Sort: \n");
    printArray(arr, n);

    return 0;
}