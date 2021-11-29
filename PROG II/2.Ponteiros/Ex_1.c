#include <stdio.h>

int main(int argc, char *argv[])
{

    int *a, b;

    b = 10;
    a = &b;

    b++;
    printf("%d", *a);

    return 0;
}