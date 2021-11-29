#include <stdio.h>
#include <stdlib.h>

void func(int num, float *return_maior, float *return_menor);

int main()
{
    int num;
    float maior, menor, return_maior, return_menor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &num);

    func(num, &return_maior, &return_menor);
    printf("Maior: %.2f\nMenor: %.2f", return_maior, return_menor);
    return 0;
}

void func(int num, float *return_maior, float *return_menor)     
{
    int i; 
    float maior, menor;
    float v[num];

    printf("Digite os valores do vetor: ");
    for (i = 0; i < num; i++)
    {
        scanf("%f", &v[i]);
    }

    maior = v[0];
    for (i = 0; i < num; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }
    }

    menor = v[0];
    for (i = 0; i < num; i++)
    {
        if (v[i] < menor)
        {
            menor = v[i];
        }
    }

    *return_maior = maior;
    *return_menor = menor;
}