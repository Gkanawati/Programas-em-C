#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = NULL, i;

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