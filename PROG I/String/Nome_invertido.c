#include <stdio.h>
#include <string.h>

int main(){

    char nome[50];

    fgets(nome,50,stdin);
    nome[strlen(nome)-1] = '\0';

    int tamanho =  strlen(nome);
    int i = 0;

    for (i=tamanho; i>=0; i--){
        printf("%c", nome[i]);
    }

    return 0;
}