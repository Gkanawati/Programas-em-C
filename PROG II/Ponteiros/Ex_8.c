#include <stdio.h>
#include <stdlib.h>

void f2(int *i, int *j);

int main()
{
    int *a=NULL, b = 22;
    f2(a, &b);
    printf("RES = %d %d", *a, b);

    return 0;
}

void f2(int *i, int *j)
{
    *i = 30;
    *j = *j + 1;
}