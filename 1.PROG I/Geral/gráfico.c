#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int nvezes = 0;
    int i =0;
    int nast = 0;
    int j = 0;

    scanf("%d", &nvezes);

    for (i = 0; i < nvezes ; i++){
        scanf("%d", &nast);

        for( j = 0 ; j < nast ; j++ ){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}