#include <stdio.h>

int main(){
    int ano;
    int mes;
    int r, r1, r2;

    scanf ("%d", &ano);
    scanf ("%d", &mes);

    if ( (ano < 1900) || ( ano > 9999) ){
        printf("Ano invalido");
    }
    else if (( mes < 1) || ( mes > 12)){
        printf("Mes invalido");
    }
   else if ( mes == 2){
    r = ano % 400;  
    r1 = ano % 4;
    r2 = ano % 100;
        
        if((r == 0) || (r2 != 0 && r1 == 0)){
            printf("29");
        }
        else{
            printf("28");
        }
   }
   else if (( mes == 4) || (mes == 6) || (mes == 9) || (mes == 11)){
       printf("30");
   }
   else{
       printf("31");
    }
    return 0;
}
