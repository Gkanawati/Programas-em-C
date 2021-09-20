#include <stdio.h>
#include <string.h>

int main(){

    char nome1[]="Ola";
    char nome2[50];
    strcpy(nome2, "Mundo");

    int len1, len2;

    len1 = strlen(nome1);
    len2 = strlen(nome2);

    printf("Tamanho nome1: %d | ", len1);
    printf("Tamanho nome2: %d | ", len2);

    if((strcmp(nome1,nome2)) != 0){
        printf("Strings diferentes! | ");
    }else{
        printf("Strings iguais! | ");
    }

    strcat(nome2,nome1);
    printf("Concatenacao da strings: %s\n", nome2);

    return 0;
}