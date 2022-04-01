#include <stdio.h>

int main(){
    
    float cel;
    float fah;

    printf("Temperatura em Fahrenheit: ");
    scanf("%f", &fah);

    cel = (fah - 32)*5/9;
    printf("A temperatura em Celsius eh: %f", cel);

 return 0;
}