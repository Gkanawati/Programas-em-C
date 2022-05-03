#include <stdio.h>

InsertionSort(int *item, int count)
{
    int i, j;
    int eleito;

    // anda por todas as posições do vetor. count-1 por conta que um vetor com 4 elentos vai ate a casa [3]
    for (i = 1; i <= count - 1; i++)
    {
        // inicialmente o eleito recebe o 2 item do vetor (posicao [1])
        eleito = item[i];
        j = i - 1;

        // verifica se o item atual é maior que o proximo item
        // se for -> o item a seguir recebe o valor do item atual
        while (j >= 0 && item[j] > eleito)
        {
            item[j + 1] = item[j];
            j--;
        }

        // apos haver a troca o item atual recebe o valor do item da frente (que era menor)
        item[j + 1] = eleito;
    }
}

int main()
{
    int i;
    int numElementos;

    printf("\nDigite o numero de itens no vetor: ");
    scanf("%d", &numElementos);

    int array_nums[numElementos];

    printf("Digite os valores do vetor: ");

    for (i = 0; i < numElementos; i++)
        scanf("%d", &array_nums[i]);

    InsertionSort(array_nums, numElementos);

    printf("Vetor Ordenado por Insertion Sort: ");
    for (i = 0; i < numElementos; i++)
        printf("%d ", array_nums[i]);

    printf("\n\n");
}
