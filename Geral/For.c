#include <stdio.h>

int main(){

    int x;
    int z;

    printf("\nLaco 1: \n");
    for( x=1; x <=10; x++){
        printf("%d ", x);
    }

    printf("\n---------------------------------");
    printf("\nLaco 2: ");
    
    x = 100;

    for(x=100; x>=65; x = x-5){
        z = x*x;
        printf("\nO quadrado de x %d = %d", x, z);
    }



    return 0;
}

