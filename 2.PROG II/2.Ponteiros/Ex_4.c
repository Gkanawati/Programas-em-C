#include <stdio.h>

int main() {

    int *a, b;

    b = 10;
    a = &b;

    *a = 20;

    printf("%d", b);

    return 0;
}