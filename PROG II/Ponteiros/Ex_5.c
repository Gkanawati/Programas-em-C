#include <stdio.h>
#include <stdlib.h>

int main() {

    int *a, *b, *c;

    a = (int *) malloc(sizeof(int));
    b = (int *) malloc(sizeof(int));

    *a = 10;
    *b = 20;

    c = a;
    a= b;
    *c = 5;
    b = c;

    printf("%d %d %d", *a, *b, *c);

    return 0;
}