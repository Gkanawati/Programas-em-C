#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

void Merge(int *A, int *L, int letftCount, int *R, int rightCount)
{
    int i, j, k;

    i = 0;
    j = 0;
    k = 0;

    while (i < letftCount && j < rightCount)
    {
        if (L[i] < R[j])
        {
            A[k++] = L[i++];
        }
        else
        {
            A[k++] = R[j++];
        }
    }
    while (i < letftCount)
    {
        A[k++] = L[i++];
    }
    while (j < rightCount)
    {
        A[k++] = R[j++];
    }
}

void MergeSort(int *A, int n)
{
    int mid, i, *L, *R;

    if (n < 2)
    {
        return;
    }

    mid = n / 2;

    L = (int *)malloc(mid * sizeof(int));
    R = (int *)malloc((n - mid) * sizeof(int *));

    for (i = 0; i < mid; i++)
    {
        L[i] = A[i];
    }

    for (i = mid; i < n; i++)
    {
        R[i - mid] = A[i];
    }

    MergeSort(L, mid);
    MergeSort(R, n - mid);
    Merge(A, L, mid, R, n - mid);
    free(L);
    free(R);
}

int main()
{
    int tam = 6;
    int i;

    // int *vetor = malloc(sizeof(int) * tam);
    int vetor[] = {4, 7, 3, 9, 2, 5};

    printf("\nVetor Desordenado: \n");
    for (i = 0; i < tam; i++)
    {
        if (i != 5)
        {
            printf("%d, ", vetor[i]);
        }
        else
        {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");

    MergeSort(vetor, tam);

    printf("\nVetor Ordenado com MergeSort: \n");
    for (i = 0; i < tam; i++)
    {
        if (i != tam - 1)
        {
            printf("%d, ", vetor[i]);
        }
        else
        {
            printf("%d ", vetor[i]);
        }
    }

    printf("\n");

    // Ordem Descrescente
    printf("\nOrdem Decrescente: \n");
    for (int i = tam - 1; i >= tam - 6; i--)
    {
        printf("%d, ", vetor[i]);
    }

    printf("\n\n");

    free(vetor);
    return 0;
}