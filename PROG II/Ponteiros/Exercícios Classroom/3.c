#include <stdio.h>
#include <stdlib.h>

void func(int num1, int num2, int num3, int *return_maior, int *return_medio, int *return_menor);

int main() {
    int a, b, c, return_maior, return_medio, return_menor;
    printf("Digite os valores de A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);
    func(a, b, c, &return_maior, &return_medio, &return_menor);
    printf("Maior(C): %d\nMedio(B): %d\nMenor(A): %d\n", return_maior, return_medio, return_menor);
    return 0;
}

void func(int num1, int num2, int num3, int *return_maior, int *return_medio, int *return_menor) {

    if ((num1 > num2) && (num1 > num3)) {
        *return_maior = num1;
    }

    if ((num2 > num1) && (num2 > num3)) {
        *return_maior = num2;
    }
    
    if ((num3 > num1) && (num3 > num2)) {
        *return_maior = num3;
    }


    if ((num1 > num2) && (num1 < num3) || (num1 < num2) && (num1 > num3)) {
        *return_medio = num1;
    }
    if ((num2 > num1) && (num2 < num3) || (num2 < num1) && (num2 > num3)) {
        *return_medio = num2;
    }
    if ((num3 > num1) && (num3 < num2) || (num3 < num1) && (num3 > num2)) {
        *return_medio = num3;
    }


    if ((num1 < num2) && (num1 < num3)) {
        *return_menor = num1;
    }

    if ((num2 < num1) && (num2 < num3)) {
        *return_menor = num2;
    }
    
    if ((num3 < num1) && (num3 < num2)) {
        *return_menor = num3;
    }
}