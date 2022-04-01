#include <stdio.h>
#include <string.h>

struct endereco{
    char nome[100];
    char rua[200];
    int numero;
};

int main(){

    struct endereco ends[3];
    strcpy(ends[0].nome,"Thiago");
    strcpy(ends[0].rua, "Test1");
    ends[0].numero = 123;

    strcpy(ends[1].nome,"Joao");
    strcpy(ends[1].rua, "Test2");
    ends[1].numero = 321;

    ends[1] = ends[0];
    
    printf("%d", ends[1].numero);

    return 0;
}
