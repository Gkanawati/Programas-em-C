#include <stdio.h>
#include <stdlib.h>

void fatorial(int *a, int *b, int tam);

int main()
{

    int i, tam, *a, *b;

    scanf("%d", &tam);

    a = (int *)malloc(tam * sizeof(int));
    b = (int *)malloc(tam * sizeof(int));

    for (i = 0; i < tam; i++)
    {
        scanf("%d", &a[i]);
        fatorial(&a[i], &b[i], tam);
    }

    for (i = 0; i < tam; i++)
    {
        printf("%d ", b[i]);
    }
}

void fatorial(int *a, int *b, int tam)
{
    int i;
    *b = 1;

    for (i = 0; i < *a; *a = *a - 1)
    {
        *b = (*b) * (*a);
    }
}