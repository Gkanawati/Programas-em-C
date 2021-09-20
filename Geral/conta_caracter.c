#include <stdio.h>
#include <stdlib.h>

int main(){

    char ch;
    int contaV=0, contaC=0;     // contaV = Conta vogal  contaC = Conta consoante

    scanf("%c", &ch);

    while( (ch != '.')){
        if( (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || ( ch == 'A') || ( ch == 'E') || ( ch == 'I') || ( ch == 'O') || ( ch == 'U')){
            contaV++;
        }
        else{
            if( (ch >= 65 && ch <=90) || (ch >= 97 && ch <= 122)){
                contaC++;
            }
            
        }
    scanf("%c", &ch);
    }
    printf("%d %d", contaV, contaC);

    return 0;
}