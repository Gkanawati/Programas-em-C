#include <stdio.h>

int total = 5;

void inc_por_valor(int a, int b)
{
    a++;
    b++;
}

void inc_por_ref(int *a, int *b)
{
    *a = *a + 1; // --> altera o conteudo do a
    (*b)++;      // --> altera o conteudo do b
}

int main()
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
    // -- > ponteiro so pode receber endereço;
    // ou pode-se alterar o conteudo do ponteiro e atribuir um valor:
    // por ex: *p = 12; */

    inc_por_valor(a, b);
    printf("*a = %d e b = %d", a, b);

    inc_por_ref(&a, &b); // --> Se é um ponteiro, ele espera receber um endereço, por isso passa o endereço de a (&a) e o endereço de b (&b)
    printf("\na = %d e b = %d", a, b);

    printf("\nm = %d", *m); // --> imprime o conteudo do endereço de b

    printf("\np = %d no endereco %p\n", *p, p); // --> imprime lixo
    free(p);

    return 0;
};