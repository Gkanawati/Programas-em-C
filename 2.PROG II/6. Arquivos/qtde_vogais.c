#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivotexto;
    int qtdeVg = 0;
    char contaVg;

    arquivotexto = fopen("arquivos/texto.txt", "r"); //"r" é para Read

    if (arquivotexto == NULL)
    {
        printf("ERROR");
    }

    else
    {
        do
        {
            contaVg = getc(arquivotexto);
            if (contaVg == 'a' || contaVg == 'A' || contaVg == 'e' || contaVg == 'E' || contaVg == 'i' || contaVg == 'I' || contaVg == 'o' || contaVg == 'O' || contaVg == 'u' || contaVg == 'U')
            {
                qtdeVg = qtdeVg + 1;
            }
        } while (contaVg != EOF); //END OF FILE

        printf("A quantidade de voagais no arquivo eh: %d", qtdeVg);
        fclose(arquivotexto);
    }
    return 0;
}