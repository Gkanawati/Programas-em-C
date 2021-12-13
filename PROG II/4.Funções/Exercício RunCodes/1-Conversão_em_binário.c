#include <stdio.h>

void Bin(int num);

int main()
{

    int num = 0;
    scanf("%d", &num);
    Bin(num);

    return 0;
}

// Função Recursiva
/*
    A função recursiva é aquela que chama a si mesma
    Várias funções sao chamadas e, consequentemente empilhadas na Pilha
    */

void Bin(int num)
{
    int binario;

    if (num / 2 != 0)
    {
        binario = num / 2;
        Bin(binario);
        printf("%d", num % 2);
    }
    else
    {
        printf("%d", num % 2);
    }
}