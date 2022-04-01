#include <stdio.h>
#include <string.h>

/* Em C, uma estrutura é uma coleção de variáveis referenciadas por um
nome, fornecendo uma maneira conveniente de ter informações
agrupadas. */

/*  
A forma geral de uma estrutura:

struct identificador {
tipo identificador ;
tipo identificador ;
tipo identificador ;
.
.
.
} variaveis_estrutura ; 
*/

struct endereco
{
    char nome[100];
    char rua[200];
    int numero;
}/* end1, end2, end3 */;  /* As Vairáveis tambem podem ser declaradas ao final da struct*/

int main()
{
    struct endereco end1, end2, end3;

    fgets(end1.nome, sizeof(end1.nome), stdin);
    strtok(end1.nome, "\n"); // A função strtok retira o \n do final da string que o fgets lê
    fgets(end1.rua, sizeof(end1.rua), stdin);
    strtok(end1.rua, "\n");
    scanf("%d%*c", &end1.numero);

    printf("\n%s", end1.nome);
    printf("\n%s", end1.rua);
    printf("\n%d", end1.numero);

    end2 = end1;

    printf("\nMostrando os valores de end2: ");
    printf("\n%s", end2.nome);
    printf("\n%s", end2.rua);
    printf("\n%d", end2.numero);

    return 0;
}
