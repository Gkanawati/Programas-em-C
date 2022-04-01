#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *leitura;
    FILE *escrita;
    int i, position;
    position = 0;
    char nomes[1000][100];

    leitura = fopen("arquivos/nomes.txt", "r");
    escrita = fopen("arquivos/nomesinvertidos.txt", "w");

    if (leitura == NULL || escrita == NULL)
    {
        printf("ERROR");
    }

    do
    {
        fgets(nomes[position++], 100, leitura);
    } while (!feof(leitura));

    for (i = position; i >= 0; i--)
    {
        fprintf(escrita, "%s", nomes[i]);
    }

    fclose(leitura);
    fclose(escrita);
    return 0;
}