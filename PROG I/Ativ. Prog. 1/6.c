#include <stdio.h>

int main(){
    float n1, n2, n3;
    float media;

    printf("Digite o valor 1: ");
    scanf("%f", &n1);

    printf("Digite o valor 2: ");
    scanf("%f", &n2);

    printf("Digite o valor 3: ");
    scanf("%f", &n3);


    media = (n1 + n2*2 + n3*3) / 6;
    printf("A Media eh: %f", media);
   
    return 0;
}