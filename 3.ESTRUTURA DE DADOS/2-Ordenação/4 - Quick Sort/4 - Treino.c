#include <stdio.h>
#include <stdlib.h>

int QuickSort(int vetor[], int esq, int dir)
{
    int pivo;
    if (esq < dir)
    {
        pivo = dividir(vetor, esq, dir);
        QuickSort(vetor, esq, pivo - 1);
        QuickSort(vetor, pivo + 1, dir);
    }
}

void troca(int *esq, int *dir)
{
    int aux;
    aux = *dir;
    *dir = *esq;
    *esq = aux;
}

int dividir(int vetor[], int esq, int dir)
{
    int i;
    int count = esq;
    int aux;

    for (i = esq + 1; i <= dir; i++)
    {
        if (vetor[i] < vetor[esq])
        {
            count++;
            troca(&vetor[i], &vetor[count]);
            // ou
            /* aux = vetor[i];
            vetor[i] = vetor[count];
            vetor[count] = aux; */
        }
    }
    troca(&vetor[esq], &vetor[count]);
    // ou
    /* aux = vetor[esq];
    vetor[esq] = vetor[count];
    vetor[count] = aux; */
    return count;
}

int main()
{
    int vetor[] = {3, 5, 8, 1, 9, 2, 4, 7, 0, 10, 6};
    int n = 11;

    printf("\n");

    printf("Vetor: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    QuickSort(vetor, 0, n);

    printf("Vetor Ordenado: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    return 0;
}