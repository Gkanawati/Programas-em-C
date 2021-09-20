#include <stdio.h>

int main(){

    int i;
    int N[10];
    int v;

    scanf("%d", &v);

    printf("N[%d] = %d\n", i, v);
    
    for(i=1; i<10; i++){
        v = v*2;
        printf("N[%d] = %d\n", i, v);
    }
    
    return 0;
}