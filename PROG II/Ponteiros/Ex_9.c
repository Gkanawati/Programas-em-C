#include <stdio.h>
#include <stdlib.h>

int *func(int *i);

int main()
{
    int *a = NULL, b = 22;

    a = func(&b);
    printf("%d %d", *a, b);
    return 0;
}

int *func(int *i)
{
    int *p;
    p = (int *)malloc(sizeof(int));
    if (p == NULL)
    {
        printf("Não foi possivel alocar memoria!");
        return NULL;
    }

    *p = 30;
    *i = *i + 1;

    return p;
}