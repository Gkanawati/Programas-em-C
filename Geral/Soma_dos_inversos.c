#include <stdio.h>
#include <stdlib.h>

int main(){
    double n = 0;
    double res = 0;

    scanf("%lf", &n);

    while( n != 0){
        res = res + 1/n;
        scanf("%lf", &n);
    }

    printf("%.15lf", res);

    return 0;
}