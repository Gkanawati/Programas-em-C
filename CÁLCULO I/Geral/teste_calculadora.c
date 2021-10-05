#include <stdio.h>
#include <stdlib.h>

int main(){

    double n1 = 0;
    double n2 = 0;
    double resultado = 0;
    char opcao;

    printf("Digitar n1 e n2: ");
    scanf("%lf %lf", &n1, &n2);

    getchar();
    fflush(stdin);

    printf("Digite a opcao (1(soma), 2(subtracao) ,3(multp.) ou 4(divisao)): ");
    scanf("%c", &opcao);

    if(opcao == '1'){
        resultado = n1 + n2;
        printf("\nResultado = %.2lf", resultado);
    }
    else if(opcao =='2'){
        resultado = n1 - n2;
        printf("\nResultado = %.2lf", resultado);
    }
    else if(opcao == '3'){
        resultado = n1*n2;
        printf("\nResultado = %.2lf", resultado);
    }
    else{
        if(n2==0){
            printf("\nNao existe divisao por zero !!!!");
        }
        else {
            resultado = n1/n2;
            printf("\nResultado = %.2lf", resultado);
        }
    }
    return 0;
}