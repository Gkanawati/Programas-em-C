#include <stdio.h>

/* BUBBLE SORT MELHORADO */
void bubbleMelhorado(int *item, int count)
{
    int n = 1, i, troca = 1, aux;

    while (n <= count && troca == 1)
    {
        troca = 0;
        for (i = 0; i < count - 1; i++)
        {
            if (item[i] < item[i + 1])
            {
                troca = 1;
                aux = item[i];
                item[i] = item[i + 1];
                item[i + 1] = aux;
            }
        }
        n = n + 1;
    }
}

void bubbleV1(int *item, int numElemento)
{
    int i, n, aux;

    for (n = 1; n <= numElemento; n++)
    {
        for (i = 0; i < numElemento - 1; i++)
        {
            if (item[i] > item[i + 1])
            {
                aux = item[i];
                item[i] = item[i + 1];
                item[i + 1] = aux;
            }
        }
    }
}

int main()
{
    int i;
    int numElementos;
    printf("\nDigite o numero de elementos do vetor: ");
    scanf("%d", &numElementos);

    int array_nums[numElementos];

    printf("\nDigite os valores do vetor: ");
    for (int i = 0; i < numElementos; i++)
    {
        scanf("%d", &array_nums[i]);
    }

    /* Chamada da função BubbleSort */
    bubbleMelhorado(array_nums, numElementos);

    printf("\nVetor ordenado por Bubble Sort: ");
    for (i = 0; i < numElementos; i++)
    {
        printf("%d ", array_nums[i]);
    }

    bubbleV1(array_nums, numElementos);

    printf("\nVetor ordenado por Bubble Sort: ");
    for (i = 0; i < numElementos; i++)
    {
        printf("%d ", array_nums[i]);
    }
    return 0;
}
