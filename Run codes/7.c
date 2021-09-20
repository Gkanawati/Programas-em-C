#include <stdio.h>
#include <math.h>

int main(){
    
    float C;
    float F;

    printf("Digite a Temperatura em Fahrenheit: ");
    scanf("%f", &F);

    C = (F - 32) * 5/9;
    printf("%0.2f", C);

 return 0;
}