#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    int v_leitura[3];

    for( i = 0; i < 3; i++){
        scanf("%d", &v_leitura[i]);
    }

    for( i = 0; i < 3; i++){
        printf("%d ", v_leitura[i] * 2);
    }

    return 0;
}
