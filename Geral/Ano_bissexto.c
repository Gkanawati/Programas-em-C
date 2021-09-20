#include <stdio.h>

int main(){
    int Ano;
    int r, r1, r2;

    scanf ("%d", &Ano);

    r = Ano % 400;  
    r1 = Ano % 4;
    r2 = Ano % 100;

    if(r == 0 || (r2 != 0 && r1 == 0)){

        printf("SIM");
    }
    else {
        printf("NAO");
    }

    return 0;
}
