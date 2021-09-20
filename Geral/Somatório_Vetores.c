#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, k;
    float notas[4];
    float r, res;

    notas[0] = 4.5;
    notas[1] = 5.6;
    notas[2] = 6.7;
    notas[3] = 7.8;

    for(i=0;i<4;i++){
        r = r + notas[i];
    }

    printf("%f\n\n", r);

    float notas_scanf[4];

    for(j=0;j<4;j++){
        scanf("%f", &notas_scanf[i]);
    }
    for(k=0;k<4;k++){
        res = res + notas_scanf[k];
    }
    printf("%f", res);

return 0;
}