#include <stdio.h>

int mul(int);

int main()
{
    int b;
    b = mul(3);
    printf("%d", b);
    return 0;
}

int mul(int x)
{
    if (x <= 1)
    {
        return 1;
    }
    return (x * mul(x - 1));
}