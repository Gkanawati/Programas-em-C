#include <stdio.h>
#include <stdlib.h>

struct retangulo
{
    float altura;  // 4 bytes
    float largura; // 4 bytes
};

void estrutura_por_valor(struct retangulo r)
{
    r.altura = r.altura + 1;
    r.largura = r.largura + 1;
}

void estrutura_por_ref(struct retangulo *r)
{
    r->altura = r->altura + 1;
    r->largura = r->largura + 1;
}

void main()
{

    int i = 0;

    // declaração de uma struct estática
    struct retangulo r1;
    r1.altura = 4.0f;
    r1.largura = 5.0f;

    // declaração de um ponteiro para struct
    struct retangulo *r2;
    r2 = (struct retangulo *)malloc(sizeof(struct retangulo));
    r2->largura = 20; // (*r2).largura = 20
    r2->altura = 10;

    // declaração de um ponteiro recebendo o endereço de uma struct estática.
    struct retangulo *r3 = &r1;

    struct retangulo *r4 = r2;

    // declaração de vetor estático
    struct retangulo vetor_r3[2];

    for (int i = 0; i < 2; i++)
    {
        vetor_r3[i].altura = 100.0f + i;
        vetor_r3[i].largura = 200.0f + i;
    }

    // declaração de um vetor para estruturas
    struct retangulo *alloc_vet_r4;
    alloc_vet_r4 = (struct retangulo *)malloc(sizeof(struct retangulo) * 2);

    for (int i = 0; i < 2; i++)
    {
        alloc_vet_r4[i].altura = 300.f + i;
        alloc_vet_r4[i].largura = 300.f + i;
    }

    estrutura_por_valor(r1);
    estrutura_por_ref(&r1);

    free(alloc_vet_r4);
    free(r2);
}

/*

 *alloc_vet_v4
 |            [0]            [1]
 |      -------------   -------------
 |      | A:        |   | A:        |
 ---->  | L:        |   | L:        |
        -------------   -------------
        3000     3007   3008     3015   --> 16 bytes ou (4 + 4) * 2

*/