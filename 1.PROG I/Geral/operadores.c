#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
   int n1, n2, modulo, elevado, raiz = 0;

   printf("Digite n1: ");
   scanf("%d", &n1);

   printf("Digite n2: ");
   scanf("%d", &n2);

   modulo = (n1 % n2);
   printf("\n Modulo eh: %d", modulo);

   elevado = pow(n1,n2);
    printf("\n Elevado eh: %d", elevado);

    raiz = sqrt(n1 * n2 * 2 + 1);
    printf("\n Raiz eh: %d", raiz);
   
    return 0;
}

