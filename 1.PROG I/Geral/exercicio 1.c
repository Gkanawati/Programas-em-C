#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n1 = 4;
    int n2 = 3;

    printf("%d", n1 % n2);
    printf("\t%.1lf", pow (n1, n2));
    printf("\t%.1lf" , sqrt(n1 * n2 * 2 + 1));
    return 0;



}