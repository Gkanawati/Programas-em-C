#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int splitMatrix(char *string, char **matrix) {
   
   int i=0;

   // Extract the first token
   char * token = strtok(string, " ");
   // loop through the string to extract all other tokens
   while( token != NULL ) {
      //printf( " %s\n", token ); //printing each token
      strcpy(matrix[i++],token);
      token = strtok(NULL, " ");
   }

   return i;

}

void ordenaAlfabetica(char **matrix, int size) {

    int i, j, l, compara;
    char aux[size];

    for (i = 0; i <= size; i++) {

        for (j = i+1; j <= size; j++) {
            
            compara = strcmp(matrix[i], matrix[j]);

            if (compara > 0 ) {

                strcpy(aux, matrix[i]);
                strcpy(matrix[i],matrix[j]);
                strcpy(matrix[j], aux);

            }
        }
    }

    for ( l = 0; l < size; l++) {
        puts(matrix[l]);
    }
};

int main() {
   
   char string[100] = "eu gosto muito de estudar estrutura de dados e usar ponteiros e algo muito legal";
   int i, line=100,col=100;

   char **m = (char **)malloc(line*sizeof(char *));

   for(i=0;i<line;i++)
     m[i]=(char *)malloc(col*sizeof(char));
   
   int size = splitMatrix(string, m);
   
    ordenaAlfabetica(m, size);


   for(i=0;i<line;i++)
       free(m[i]);
   
   free(m);

   return 0;
}