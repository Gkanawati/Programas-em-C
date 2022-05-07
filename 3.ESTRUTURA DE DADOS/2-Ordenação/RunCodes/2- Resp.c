#include <stdio.h>
#include <stdlib.h>
struct casa
{
    double preco;
    int posicao;
};

void Merge(struct casa *A, struct casa *L, int leftCount, struct casa *R, int rightCount)
{
    int i, j, k;

    i = 0;
    j = 0;
    k = 0;

    while (i < leftCount && j < rightCount)
    {
        if (L[i].preco <= R[j].preco)
            A[k++] = L[i++];
        else
            A[k++] = R[j++];
    }
    while (i < leftCount)
        A[k++] = L[i++];
    while (j < rightCount)
        A[k++] = R[j++];
}

void MergeSort(struct casa *A, int n)
{
    int mid, i;
    struct casa *L, *R;
    if (n < 2)
        return;

    mid = n / 2;

    L = (struct casa *)malloc(mid * sizeof(struct casa));
    R = (struct casa *)malloc((n - mid) * sizeof(struct casa));

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
    int numcasas;
    double montante;

    int i;
    double total = 0;

    scanf("%lf", &montante);
    scanf("%d", &numcasas);

    struct casa vetcasas[numcasas];

    for (i = 0; i < numcasas; i++)
    {
        scanf("%lf", &vetcasas[i].preco);
        vetcasas[i].posicao = i + 1;
    }

    MergeSort(vetcasas, numcasas);

    if (montante < vetcasas[0].preco)
    {
        printf("Insufficient\n");
    }
    else
    {
        for (i = 0; i < numcasas; i++)
        {
            total += vetcasas[i].preco;
            if (total < montante)
            {
                printf("House #%d - Price: %.2lf\n", vetcasas[i].posicao, vetcasas[i].preco);
            }
        }
    }

    return 0;
}