#include <stdio.h>
#include <string.h>

int main(){

    char nome[50];
    char nome1[50];
    int i = 0;
    char end[4] = "END";
                                                   
   while ( nome[0] != 'E' && nome[1] != 'N' && nome[2] != 'D' ){
       
       scanf("%s", nome);
       int tamanho =  strlen(nome);
       memset(nome1,0,strlen(nome1));

        for (i=tamanho; i>=0; i--){ 
             nome1[tamanho-i-1] = nome[i];
        }

         if (strcmp(nome,nome1) == 0){
             printf("SIM\n");
         }
         else if (strcmp(nome,end) != 0){
             printf("NAO\n");
        }
    
   }

    return 0;
}  