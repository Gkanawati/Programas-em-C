#include <stdio.h>
#include <string.h>

int main(){

    int i = 0;
    char nome1[] = "Mundo";

    for (i = 0; i < strlen(nome1); i++){
        printf("%c", nome1[i]);
    }
    printf(" | ");

    for(i = 0; nome1[i] != '\0'; i++){
        printf("%c", nome1[i]);
    }
    printf(" | %s", nome1);

    return 0;
}