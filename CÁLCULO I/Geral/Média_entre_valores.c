#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2 = 0;
    int cont = 0;
    double res = 0;
    double soma = 0;
    int i;

    


    scanf("%d", &n1);
    scanf("%d", &n2);

    for( i = n1; i < n2+1 ; i++){
        soma = soma + i ;
    }
    
    cont = n2 - n1;
    cont = cont + 1;

    res = soma / cont;
    printf("%.2lf", res);

    return 0;
}

