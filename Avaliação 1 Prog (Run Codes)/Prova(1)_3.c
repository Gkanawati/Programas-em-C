#include <stdio.h>

int main(){
   int n, hrs;
   float v, salario;

   scanf("%d", &n);
   scanf("%d", &hrs);
   scanf("%f", &v);

   salario = v * hrs;

   printf("NUMERO = %d\n", n);
   printf("SALARIO = R$ %.2f\n", salario);


    return 0;
}