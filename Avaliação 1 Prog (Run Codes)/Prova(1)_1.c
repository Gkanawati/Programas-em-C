# include <stdio.h>

int main(){

    float x1;

    scanf("%f", &x1);

    if( (x1 >= 0) && (x1 <= 25) ){
        printf("Intervalo [0,25]");
    }
    else if ( (x1 > 25) && (x1 <= 50) ){
        printf("Intervalo (25,50]");
    }
    else if ( (x1 > 50) && (x1 <= 75) ){
        printf("Intervalo (50,75]");
    }
    else if ( (x1 > 75) && (x1 <= 100)){
        printf("Intervalo (75,100]");
    }
    else{
        printf("Fora de intervalo");
    }

    return 0;
}