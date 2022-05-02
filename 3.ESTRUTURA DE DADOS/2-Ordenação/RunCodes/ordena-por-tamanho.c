#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Crie aqui um struct para gerenciar a palavra e o seu tamanho */

/* insira aqui o algoritmo de sua preferência para ordenar. Não esqueça de adaptá-lo */


/**
 * Essa função recebe uma frase e armazena palavra por palavra na matrix
 */
int splitMatrix(char *string, char matrix[][50]) {
   
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

int main() {
  char frase[500];
  int i;
 
  //leia até encontrar um ENTER */
  fscanf(stdin,"%[^\n]",frase);

  //Cria uma matriz
  char matriz[100][50];

  //Chama a função splitMatrix que recebe uma frase e retorna a matriz preenchida com as palavras que formam a frase. 
  int num_palavras_na_frase = splitMatrix(frase,matriz);


  /* Talvez aqui você possa criar um vetor de estruturas dinamicamente alocado */
  

  /* Uma vez que você tem uma matriz de palavras que foi processada pela função splitMatrix 
     talvez agora seja o momento de inserir cada palavra e o seu tamanho no vetor de estruturas */


  /* Aqui já é possível chamar o seu algoritmo de ordenação adaptado para ordenar vetor de structs */
  
  
  /* Se tudo deu certo, aqui você pode imprimir o seu vetor de structs que já estará ordenado pelo tamanho da palavra */

  return 0;
}