#include <stdio.h>
#include <math.h>

int main(){
    
    double n1;
    printf("Digite o numero: ");
    scanf("%lf", &n1);

    printf("Raiz quadrada eh igual: %.2lf\n", sqrt(n1) );
    printf("Elevado a 5: %.2lf\n", pow(n1,5));
    printf("Log de N na base 10 eh: %.2lf", log10(n1));
    
    return 0;
}