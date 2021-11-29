#include <stdio.h>

int main() // Operação aritmética de Ponteiro
{
    int *p, i;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", (p + i)); // p[i] == *(p+i)
    }                         //          *(0x001 + 1*sizeof(int)) = *(0x005)

    for (i = 0; i < 3; i++)
    {
        printf("%d", *(p + i)); // *(p+i) == conteudo de (p+i)
    }

    return 0;
}