#include <stdio.h>
#include <stdlib.h>
                                /* A função void (=vazio) representa uma função que nao necessariamente apresenta return e nem parametros */
void func(float *a, float *b);  /* Passagem de parâmetro por referência */

int main () {

    float *p, x = 5.7;
    p = (float *) malloc(sizeof(float));
    *p = 3.5;
    func(p, &x);  /* Com a chamada de uma outra função, há a troca de contexto e a função é empilhada em cima da main */
                  /* Com a troca de contexto, o programa nao tem mais acesso à função main, foi tirada de contexto temporariamente*/

    free(p);      /* A função free nao permite que fique espaço alocado */
    
    return 0;
}

void func(float *a, float *b) {
    float *aux;
    aux = (float *) malloc(sizeof(float));
    *aux = *a;
    *a = *b;
    *b = *aux;    /* A partir do momento em que acaba a manipulação da func, o contexto é descartado e 
                    ninguem mais terá acesso a ele*/

    free(aux);    /* A função free destrói o conteudo da heap que estava sendo apontado pelo aux*/

   //printf("%f %f %f", *a, *b, *aux);
}