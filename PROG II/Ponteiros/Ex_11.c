#include <stdio.h>
#include <stdlib.h>

int *f1();

int main()
{
    int *a = NULL, i;

    a = f1();
    if (a == NULL)
    {
        printf("Nao foi possivel alocar memoria!");
    }

    for (i = 0; i < 3; i++)
    {
        a[i] = i + 1;
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

int *f1()
{
    int *p;
    p = (int *)malloc(3 * sizeof(int));
    if (p == NULL)
    {
        return NULL;
    }

    return p;
}