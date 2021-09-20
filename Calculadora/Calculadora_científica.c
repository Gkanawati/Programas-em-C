#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    float n1;
    float n2;
    float res;
    char op;

    printf("\nDigite n1: ");
    scanf("%f", &n1);

    getchar();
    fflush(stdin);

    printf("\nEscolha a operacao: +   -   *  /  pot(p)  raiz(r): ");
    scanf("%c", &op);

    if(op == 'r'){
        res = sqrt(n1);
        printf("%.2f %c = %.2f", n1, op, res);
        return 0;
    }

    getchar();
    fflush(stdin);

    printf("\nDigite n2: ");
    scanf("%f", &n2);

    if( op == '+'){
        res = n1+n2;
        printf("%.2f %c %.2f = %.2f", n1, op, n2, res);
    }
    else if( op == '-'){
        res = n1-n2;
        printf("%.2f %c %.2f = %.2f", n1, op, n2, res);
    }
    else if(op == '*'){
        res = n1*n2;
        printf("%.2f %c %.2f = %.2f", n1, op, n2, res);
    }
    else if( op == '/'){
        if(n2 == 0){
            printf("\n!Math ERROR!");
        }
        else{
            res = n1/n2;
            printf("%.2f %c %.2f = %.2f", n1, op, n2, res);
         }
    }     
    else if( op == 'p'){
        res = pow(n1,n2);
        printf("%.2f %c %.2f = %.2f", n1, op, n2, res);
    }
    return 0;
}