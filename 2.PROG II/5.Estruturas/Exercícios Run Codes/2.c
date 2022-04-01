#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct pontos
{
    int a;
    int b;
} pontos;

typedef struct reta
{
    pontos a;
    pontos b;
    int retaMaior;
    double tamReta;
} reta;

reta maiorReta(reta r[], int tam);

int main (){
    int i, quantidade;

    scanf("%d", &quantidade);

    reta reta1[quantidade];
    reta res;

    for(i=0;i<quantidade;i++){
        scanf("%d %d", &reta1[i].a.a, &reta1[i].a.b);
        scanf("%d %d", &reta1[i].b.a, &reta1[i].b.b);

        reta1[i].retaMaior = i;
        reta1[i].tamReta = sqrt(pow(reta1[i].b.a - reta1[i].a.a, 2) + pow(reta1[i].b.b - reta1[i].a.b, 2));
    }

    res = maiorReta(reta1, quantidade);

    printf("Reta numero %d, pontos [%d,%d] e [%d,%d], tamanho %.2lf.", res.retaMaior, res.a.a, res.a.b, res.b.a, res.b.b, res.tamReta);

    return 0;
}

reta maiorReta(reta r[], int tam)
{
    int maiorReta = 0;
    int i;

    for (i = 0; i < tam; i++)
    {
        if (r[i].tamReta > r[maiorReta].tamReta)
        {
            maiorReta = i;
        }
    }

    return r[maiorReta];
}