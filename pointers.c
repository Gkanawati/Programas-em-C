#include <stdio.h>

int total = 5;

void inc_por_valor(int a, int b)
{
    a++;
    b++;
}

void inc_por_ref(int *a, int *b)
{
    *a = *a + 1;
    (*b)++;
}

void main()
{
    int a = 1;
    int b = 10;

    // variáveis normais sao tipo de variáveis que guardam valores
    // o ponteiro tem a capacidade de guardar somente endereço de memória
    // variáveis guardam valores.
    // ponteiros guardam endereço de memória.

    int *p;
    int *m;
    p = (int *)malloc(sizeof(int));
    m = &b;

    inc_por_valor(a, b);
    printf("*a = %d e b = %d", a, b);

    inc_por_ref(&a, &b);
    printf("\na = %d e b = %d", a, b);

    printf("\nm = %d", *m);

    printf("\np = %d no endereco %p\n", *p, p);
}