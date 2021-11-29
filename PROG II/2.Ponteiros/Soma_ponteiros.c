#include <stdio.h>
#include <stdlib.h>

int *SomaNumeros(int a[], int b[], int tamanho)
{
    int i;
    int *c = malloc(tamanho * sizeof(int));
    for (i = 0; i < tamanho; i++)
    {
        c[i] = a[i] + b[i];
    }

    return c;
}

int main()
{
    int i, *s;
    int tamVet;
    int v1[tamVet];
    int v2[tamVet];

    printf("Digite o tamanho do Vetor: ");
    scanf("%d", &tamVet);

    printf("Digite os valores do vetor 1: ");
    for (i = 0; i < tamVet; i++)
    {
        scanf("%d", &v1[i]);
    }

    printf("Agora digite os valores do vetor 2: ");
    for (i = 0; i < tamVet; i++)
    {
        scanf("%d", &v2[i]);
    }

    s = SomaNumeros(v1, v2, tamVet);

    for (i = 0; i < tamVet; i++)
    {
        printf("\nSoma[%d]: %d", i, s[i]);
    }

    return 0;
}