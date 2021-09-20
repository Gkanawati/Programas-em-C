#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float n1 = 0;
    float n2 = 0;
    float resultado = 0;
    char op; 

    printf("\nDigite n1: ");
    scanf("%f", &n1);

    getchar();
    fflush(stdin);

    printf("\nEscolha a operacao: ( +, -, * ou /): ");
    scanf("%c", &op);

    getchar();
    fflush(stdin);
    
    printf("\nDigite n2: ");
    scanf("%f", &n2);

    if(op == '+') {
        resultado = n1+n2;
        printf("\n%.2f %c %.2f = %.2f", n1, op, n2, resultado);
    }

    else if (op == '-') {
        resultado = n1 - n2;
        printf("\n%.2f %c %.2f = %.2f", n1, op, n2, resultado);
    }
    else if (op == '*') {
        resultado = n1 * n2;
        printf("\n%.2f %c %.2f = %.2f", n1, op, n2, resultado);
    }
    else if (op == '/') {
       if (n2 == 0){
           printf("Math ERROR!!!");
       }
        else{
            resultado = n1 / n2;
            printf("\n%.2f %c %.2f = %.2f", n1, op, n2, resultado);
        } 
    }
    return 0;
}