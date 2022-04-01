#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int guess = 0;

    int magic = rand () % 10;
    
    while(1){

    printf("Digite o numero: ");
    scanf("%d", &guess);

         if(guess == magic){
        printf("%c VOCE ACERTOU!\n", 175);
        break;
         }
         
         if( guess > magic){
            printf("Valor muito alto!\n");
        }
         else {
            printf("Valor muito baixo!\n");
        }

        }

    return 0;
}
