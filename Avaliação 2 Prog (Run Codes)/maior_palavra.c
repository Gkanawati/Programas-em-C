#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char frase[2000], maiorPalavra[2000], palavra[2000];
    int tamanhoFrase = 0, maior = 0; //Variáveis para ver a maior palavra
    int i, j;

    fgets(frase, 2001, stdin);

    for (i = 0; frase[i] != '\0'; i++)
    {
        j = 0;
        while (frase[i] != ' ' && frase[i + 1] != '\0' && frase[i] != '.')
        {
            palavra[j] = frase[i];
            j++;
            i++;
        }
        palavra[j] = '\0';
        tamanhoFrase = strlen(palavra);
        if (tamanhoFrase > maior)
        {
            maior = tamanhoFrase;
            strcpy(maiorPalavra, palavra);
        }
    }

    printf("%d", maior);

    return 0;
}