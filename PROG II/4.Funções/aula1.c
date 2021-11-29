#include <stdio.h>


/*"Funções são os blocos de construção de C e o local onde toda a atividade
do programa ocorre. Elas são uma das características mais importantes de
C."*/

/*A forma geral de uma função é:

    especificador nome da função ( lista de parametros )
        {
            corpo da funcao;
        }

O especificador especifica o tipo de valor que o comando return da
função devolve, pode ser qualquer tipo válido da linguagem C;
*/

/* Uma função é convocada quando há a sua chamada na função main,
   Nesse momento a função assume o topo no empilhamento e passa a ser exeutada
    */

int somaNumeros(int a, int b) {
    int soma;
    soma = a + b;
    return soma;
}


int main(){
    int v1, v2, s;

    scanf("%d", &v1);
    scanf("%d", &v2);

    s = somaNumeros(v1, v2);
    printf("A soma eh: %d", s);

    return 0;
}