#include <stdio.h>

int main()
{
    int *p, i; /* Para a criação dinamica de um vetor deve-se alocá-lo no Heap*/

    p = (int *)malloc(3 * sizeof(int)); /* Para a crição de um vetor com 3 valores, sao alocadas 3 posições do tipo inteiro*/

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &p[i]);
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d", p[i]);
    }

    return 0;
}