#include <stdio.h>
#include <stdlib.h>

int idade_dias(int a, int m, int d)
{                              //3 parâmetros inteiros
    int id;                    //variável que será retornada
    id = a * 360 + m * 30 + d; //cálculo dos dias (1 ano tem 360 dias e 1 mes tem 30 dias)
    return id;                 //retornei a idade em dias
}

int main()
{
    int anos, meses, dias, idade; //3 variáveis que serão lidas e o retorno da função
    printf("Informe a idade em anos, meses e dias (nesta ordem): ");
    scanf("%d%d%d", &anos, &meses, &dias); //idade receberá o retorno da função
    idade = idade_dias(anos, meses, dias); //impressaõ da idade
    printf("A idade em dias eh: %d", idade);
    return 0;
}