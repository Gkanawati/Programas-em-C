#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float a,b;
    float r=0;

    printf("Digite valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    if(b==0){
        printf("%cValor de b invalido!\nDigite um valor diferente de zero\n", 175);
    }
    else{
        r = a/b;
        printf("%cO resultado eh: %.2f\n", 175, r);
    }


    system("pause");
    return 0;
}
