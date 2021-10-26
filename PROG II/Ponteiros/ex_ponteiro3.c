#include <stdio.h>
#include <stdlib.h>  

int main () {

    float *p, x;

    p = &x;

    *p = 155;

    /* Alocação dinâmica de memória de ponteiro */
    /* Reserva espaço para variáveis dinâmicas */

    /* Alocar espaço na HEAP */
    /* Criar um espaço de memória */

    p = (float *) malloc(sizeof(float));  /* O malloc aloca espaço no endereço de memória de um float*/
                                          /* MALLOC = memory alocation*/
                                          /* O (float *) tranforma o conteudo no tipo da variavel entre parenteses indicada */                                     

    *p = 3.5;  /* Alocação dinâmica de memória */

    return 0;
}