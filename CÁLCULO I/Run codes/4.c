#include <stdio.h>

int main(){

    float n1, n2, n3, n4;
    float resultado;

    //printf("Digite a Nota 1: ");
    scanf("%f", &n1);

    //printf("Digite a Nota 2: ");
    scanf("%f", &n2);

    //printf("Digite a Nota 3: ");
    scanf("%f", &n3);

    //printf("Digite a Nota 4: ");
    scanf("%f", &n4);

    resultado = (n1 + n2*2 + n3*3 + n4*4) / 10;
    printf("%.1f", resultado);


    return 0;
}