#include <stdio.h>

int main(){

   int matriz[3][3], i ,j;
   for(i=0; i<3; i++){
       for(j=0; j<3; j++){
           matriz[i][j] = i+j;
       }
   }

    printf("%d", matriz[2][1]);

    return 0;
}