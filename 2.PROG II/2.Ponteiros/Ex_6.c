#include <stdio.h>
#include <stdlib.h>

int main () {

    int *a, *b, c = 20;

    a = (int *) malloc(sizeof(int));
    *a = 10;
    b = &c;

    printf("%d %d ", *a, *b);       /* O ponteiro "a" aponta para um espaço de memória no "Heap", 
                                       enquanto o ponteiro "b" aponta para um espaço de memória na "Pilha". */
    return 0;
}