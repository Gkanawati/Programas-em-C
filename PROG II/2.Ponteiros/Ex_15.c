#include <stdio.h>
#include <stdlib.h>

void func(float *a, float *b);

int main()
{
    float *p, x = 5.7;
    p = (float *)malloc(sizeof(float));
    *p = 3.5;
    func(p, &x);
    return 0;
}

void func(float *a, float *b)
{
    float *aux;
    aux = (float *)malloc(sizeof(float));
    *aux = *a;
    *a = *b;
    *b = *aux;
    printf("%d\n%d\n%d\n", aux, a, b);
}