#include <stdio.h>

int main(){
    int idade=0;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 35){
        printf("Voce pode votar E assumir qualquer lugar no governo!");
    }
    else if (idade>= 29){
        printf("Voce pode votar e concorrer ao senado!");
    }
    else if(idade >= 16){
        printf("Voce pode votar!");
    }
    else {
        printf("Voce nao tem voz no governo!");
    }
    return 0;
}