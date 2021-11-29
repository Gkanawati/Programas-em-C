#include <stdio.h>

void f1(int *i, int *j);

int main() {

    int a = 11, b = 22;
    printf("Antes = %d %d, ", a, b);
    f1(&a, &b);
    printf("Depois = %d %d", a, b);

    return 0;
}

void f1(int*i, int *j) {

    *i = 55;
    *j = 65;
}