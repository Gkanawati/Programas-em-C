#include <stdio.h>
#include <string.h>

int main(){

  char  vetStrings[3][100];
   int i;

   strcpy(vetStrings[0], "Joao");
   strcpy(vetStrings[1], "Maria");
   strcpy(vetStrings[2], "Paulo"); 

    for(i=0; i<3; i++){
        printf("%s ", vetStrings[i]);
    }

    return 0;
}