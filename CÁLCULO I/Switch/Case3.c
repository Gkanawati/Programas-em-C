#include <stdio.h>

int main(){
    float n1, n2 ,n3;

    scanf("%f %f %f", &n1, &n2, &n3);

    if (n1 >= n2 && n1 >= n3){
        printf("%.1f", n1);
     }
    else if (n2 >= n1 && n2 >= n3){
         printf("%.1f", n2);
    }
    else if (n3 >= n1 && n3 >= n2){
        printf("%.1f", n3);
    }
    
   
     return 0;
}