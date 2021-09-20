#include <stdio.h>

int main(){

    int idade;
    int soma;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    soma = idade*(idade+1) / 2;
    printf("A soma de suas idades eh: %d", soma);

    return 0;
}