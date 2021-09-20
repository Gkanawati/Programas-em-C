#include <stdio.h>
#include <string.h>

int main(){

   char nome1[] = "Ola";
   char nome2[50];
   strcpy(nome2, "Mundo");

   printf("%lu %lu", sizeof(nome1), sizeof(nome2));

    return 0;
}