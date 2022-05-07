#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa
{
    int id;
    char nome[50];
};

void Merge(struct pessoa *A,
           struct pessoa *L,
           int leftCount,
           struct pessoa *R,
           int rightCount)
{
    int i, j, k;

    i = 0;
    j = 0;
    k = 0;

    while (i < leftCount && j < rightCount)
    {
        if (strcmp(L[i].nome, R[j].nome) < 0)
            A[k++] = L[i++];
        else
            A[k++] = R[j++];
    }
    while (i < leftCount)
        A[k++] = L[i++];
    while (j < rightCount)
        A[k++] = R[j++];
}

void MergeSort(struct pessoa *A, int n)
{
    int mid, i;
    struct pessoa *L, *R;
    if (n < 2)
        return;

    mid = n / 2;

    L = (struct pessoa *)malloc(mid * sizeof(struct pessoa));
    R = (struct pessoa *)malloc((n - mid) * sizeof(struct pessoa));

    for (i = 0; i < mid; i++)
        L[i] = A[i];
    for (i = mid; i < n; i++)
        R[i - mid] = A[i];

    MergeSort(L, mid);
    MergeSort(R, n - mid);
    Merge(A, L, mid, R, n - mid);
    free(L);
    free(R);
}

int main()
{
    int tam = 3;
    struct pessoa *vetor = (struct pessoa *)
        malloc(sizeof(struct pessoa) * tam);

    vetor[0].id = 5;
    strcpy(vetor[0].nome, "B");

    vetor[1].id = 10;
    strcpy(vetor[1].nome, "A");

    vetor[2].id = 30;
    strcpy(vetor[2].nome, "C");

    MergeSort(vetor, tam);

    for (int i = 0; i < tam; i++)
    {
        printf("%d %s\n", vetor[i].id,
               vetor[i].nome);
    }

    return 0;
}