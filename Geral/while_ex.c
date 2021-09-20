#include <stdio.h>
#include <stdlib.h>

int main(){
    int i = 0;

    while(i<4){
        printf("%d \n", i);
        i++;
    }

    int a = 1;

    while (a < 3){
        a++;
        printf("Loop ");
    }
    printf("Fim\n");

    int cont = 0, x = 2;
   
    while(cont < 5){
        x = x + 10;
        cont++;
    }
    printf("%d %d\n", x, cont);

   int j = 1, h = 2;

   do{
       h++;
       j += 3;
       
   }while((h<4)&&(j<10));

   printf("%d %d\n", j, h);

    return 0;
}