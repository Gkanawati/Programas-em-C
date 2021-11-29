#include <stdio.h>
#include <stdlib.h>

void Age(int a, int m, int d, int *Return);

int main()
{
    int ano, mes, dias, Return;

    printf("Digite sua idade em Anos, meses e dias: ");

    scanf("%d %d %d", &ano, &mes, &dias);

    Age(ano, mes, dias, &Return);

    printf("Sua idade em dias eh: %d\n", Return);

    return 0;
}

void Age(int a, int m, int d, int *Return)
{
    *Return = a * 365 + m * 30 + d;
}