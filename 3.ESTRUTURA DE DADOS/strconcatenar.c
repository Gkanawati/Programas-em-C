#include <stdio.h>
#include <string.h>

void strconcatena( char *origem, char *destino) { 

    while ( *destino != 0 ) {
        destino++;
    }

    *destino = *origem;
    destino++;
    origem++;

    while ( *origem != 0) {
        *destino = *origem;
        destino++;
        origem++;
    } *destino = '\0';

};

int main() {

    char orig[50] = " Ola";
    char dest[50] = "Paulo";

    strconcatena(orig, dest);
    printf("%s", dest);
    return 0;
}