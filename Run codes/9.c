#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

   float n1;
   float n2;
   float diag;

   printf("Digite o valor de um lado: ");
    scanf("%f", &n1);

    printf("Digite o valor do outro lado: ");
    scanf("%f", &n2);

    diag = sqrt(n1*n1 + n2*n2);
    printf("%.2f\n", diag);

    return 0;
}