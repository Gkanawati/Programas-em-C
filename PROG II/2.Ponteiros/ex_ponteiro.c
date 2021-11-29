#include <stdio.h>

int main() {


/* Um ponteiro é uma variável que contém um endereço de memória. 
   Esse endereço é normalmente a posição de uma outra variável na memória.*/

    int *p, x;   /* Os ponteiros sao de todos os tipos */

    x = 155;
    p = &x;   /* O & indica endereço de memória da varável */


/* Maneira correta de acessar o valor da variavel 

    printf("%d", x);
    printf("%d", *p);

*/

/* Incorreta:

    printf("%d", p);

*/

    printf("%d\n", x);


    printf("%d\n", *p);   /* O asterismo indica o conteúdo do ponteiro*/

    /* Alterar o conteudo do ponteiro */

    *p = 1234;  /* Manipulando o valor através do ponteiro */

    printf("%d\n", *p);

    x++;        /* Manipulando o valor através da variável */

    printf("%d\n", *p);

    x = *p + x;

    printf("%d\n", *p);

    return 0;
}