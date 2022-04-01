#include <stdio.h>

int sum(int);

int main()
{
    int b;
    b = sum(4);
    printf("%d", b);
}

int sum(int x)
{
    int k = 1;
    if (x <= 1)
    {
        return 1;
    }
    k = x + sum(x - 1);
    return k;
}