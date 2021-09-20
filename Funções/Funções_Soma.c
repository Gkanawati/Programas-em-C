#include <stdio.h>
#include <stdlib.h>
#include <string.h>


double somaNumeros(double n1, double n2);
void PrintfEscreva2numeros(int numero);

int main(){
    double resultado = 0;

    resultado = somaNumeros(5.5, 7.6);
    printf("O resultado eh: %.2lf \n", resultado);

    double x = 0,y = 0;

    PrintfEscreva2numeros(1);
    scanf("%lf", &x);
    PrintfEscreva2numeros(2);
    scanf("%lf", &y);

    double res = x + y;
    
    printf("\nO resultado eh: %.2lf \n", res);

    return 0;
}

double somaNumeros (double n1, double n2) {
    double resultado = n1 + n2;
    return resultado; 
}

void PrintfEscreva2numeros(int numero) {
    printf("\nDigite o %d numero: ", numero);
}