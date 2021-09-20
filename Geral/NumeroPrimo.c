#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1 = 0;
    int n2 = 0;
    int ehPrimo = 0;
    int i, j;
    int mod;

    scanf ("%d", &n1);
    scanf ("%d", &n2);

    for (i=n1; i<=n2; i++){
        for (j=2; j<=i-1; j++){
            mod = i % j;
            if (mod == 0){
                ehPrimo = 0;
            }

        }
        if (ehPrimo == 1){
            printf("%d ", i);
        }
        ehPrimo = 1;
    }
return 0;
}