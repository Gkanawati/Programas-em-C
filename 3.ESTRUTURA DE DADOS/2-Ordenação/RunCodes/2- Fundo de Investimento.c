#include <stdio.h>
#include <stdlib.h>

struct casa
{
    double preco;
    int posicao;
};

void Merge(struct casa *A,
           struct casa *L,
           int leftCount,
           struct casa *R,
           int rightCount)
{
    int i, j, k;

    i = 0;
    j = 0;
    k = 0;

    while (i < leftCount && j < rightCount)
    {
        if (L[i].preco < R[j].preco)
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
    double numCasas, mont, sumVal;
    int i;

    // printf("\nDigite o Montante: \n");
    scanf("%lf", &mont);

    // printf("\nDigite o numero de Casas: \n");
    scanf("%lf", &numCasas);

    struct casa *vetor = (struct casa *)malloc(sizeof(struct casa) * numCasas);

    // printf("\nDigite o valor das casas: \n");
    for (i = 0; i < numCasas; i++)
    {
        scanf("%lf", &vetor[i].preco);
        sumVal = sumVal + vetor[i].preco;
        vetor[i].posicao = i + 1;
    }
    /*
        printf("\nSOMA TOTAL: ");
        printf("%.2lf\n\n", sumVal); */

    // se o montante for menor que a soma dos apartamentos, retorna vazio
    /*  if (mont < sumVal)
     {
         printf("Insufficient");
         return 0;
     } */

    MergeSort(vetor, numCasas);

    for (i = 0; i < numCasas; i++)
    {
        // sumVal é a soma dos valores das casas
        // sumDisp é o restante a cada casa contada

        if (mont > vetor[i].preco)
        {
            printf("House #%d - Price: %.2lf\n", vetor[i].posicao, vetor[i].preco);

            mont = mont - vetor[i].preco;
        }
        /*
                printf("\n\n");
                printf("Disponivel: ");
                printf("%.2lf\n", mont);
                printf("Total a pagar: ");
                printf("%.2lf", totalPagar);
                printf("\n\n"); */
    }

    return 0;
}