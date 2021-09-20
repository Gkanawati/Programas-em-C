#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float salario[12];
    int i;
    float Ma, Me;
    int mesMa, mesMe;
    float media, soma_anual;

    for (i=0; i<12; i++){
        scanf("%f", &salario[i]);
    }

    Ma = salario[0];

    for (i=0; i<12; i++){
        if (salario[i] > Ma){
            Ma = salario[i];
            mesMa = i+1;
        }
    }
    
    Me = salario[0];

    for (i=0; i<12; i++){
        if (salario[i] < Me){
            Me = salario[i];
            mesMe = i+1;
        }
    }

    for (i=0; i<12; i++){
        soma_anual = soma_anual + salario[i];
    }

    media = soma_anual/(i+1);

    printf("\nMaior salario: R$ %.1f\n", Ma);
    printf("O mes que recebeu o maior salario foi: %d\n", mesMa);
    printf("Menor salario: R$ %.1f\n", Me);
    printf("O mes que recebeu o menor salario foi: %d\n", mesMe);
    printf("Media salarial: R$ %.2f\n\n", media);
    printf("Faturamento anual: R$ %.2f\n", soma_anual);

    return 0;
}
