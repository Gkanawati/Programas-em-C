#include <stdio.h>
#include <stdlib.h>

void func(int h, float f, float *MediaFilho, float *MediaSalario, float *MaiorSalario, float *Porcentagem);

int main()
{
    int i, hab;

    float MediaFilho, MediaSalario, MaiorSalario, Porcentagem, filhos;

    printf("Digite o numero de habitantes: ");
    scanf("%d", &hab);

    func(hab, filhos, &MediaFilho, &MediaSalario, &MaiorSalario, &Porcentagem);
    printf("A media do numero de filhos eh: %.2f \n", MediaFilho);
    printf("A media salarial da cidade eh: %.2f R$ \n", MediaSalario);
    printf("O maior salario eh: %.2f R$\n", MaiorSalario);
    printf("O porcentual de pessoas com salario ate R$ 350: %.0f Porcentagem\n", Porcentagem);

    return 0;
}

void func(int h, float f, float *MediaFilho, float *MediaSalario, float *MaiorSalario, float *Porcentagem)
{
    int i, maior;
    float salario[h], soma, porcent, salario_pobre, filhos[h], somafilhos;
    printf("Digite os salarios: \n");
    for (i = 0; i < h; i++)
    {
        scanf("%f", &salario[i]);
    }
    for (i = 0; i < h; i++)
    {
        soma = soma + salario[i];
    }

    printf("Digite o numero de filhos: \n");
    for (i = 0; i < h; i++)
    {
        scanf("%f", &filhos[i]);
    }
    for (i = 0; i < h; i++)
    {
        somafilhos = somafilhos + filhos[i];
    }

    maior = salario[0];
    for (i = 0; i < h; i++)
    {
        if (salario[i] > maior)
        {
            maior = salario[i];
        }

        if (salario[i] < 350)
        {
            salario_pobre = salario_pobre + 1;
        }
    }

    porcent = (salario_pobre * 100) / h;

    *MediaFilho = somafilhos / h;
    *MediaSalario = soma / h;
    *MaiorSalario = maior;
    *Porcentagem = porcent;
}