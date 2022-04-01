#include <stdio.h>
#include <stdlib.h>

int *ordena(int *v, int tam, int opcao);

int main()
{
    int tamanho, det; 
    scanf("%d", &tamanho);

    int *v, i;

    v = (int *)malloc(tamanho * sizeof(int));

    /*printf("Digite os valores do vetor: \n");*/
    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &v[i]);
    }

    scanf("%d", &det);
    /*if ((det != 1) || (det != 0)){
        printf("Opcao invalida! Digite 0 ou 1\n");
    }*/

    ordena(v, tamanho, det);

    return 0;
}

int *ordena(int *v, int tam, int opcao)
{
    int i, j, troca;

    if (opcao == 1)
    {
        for (i = 0; i < tam; i++)
        {
            for (j = i + 1; j < tam; j++)
            {
                if (v[i] > v[j])
                {
                    troca = v[i];
                    v[i] = v[j];
                    v[j] = troca;
                }
            }
        }
        for (i = 0; i < tam; i++)
        {
            printf("%d ", v[i]);
        }
    }

    if (opcao == 0)
    {
        for (i = 0; i < tam; i++)
        {
            for (j = i + 1; j < tam; j++)
            {
                if (v[i] < v[j])
                {
                    troca = v[i];
                    v[i] = v[j];
                    v[j] = troca;
                }
            }
        }
        for (i = 0; i < tam; i++)
        {
            printf("%d ", v[i]);
        }
    }

    return v;
}
