#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char frase[2000];
    scanf("%[^\n]s", &frase);

    int i;
    int palavra = 0;
    int maior_palavra = 0;

    for (i = 0; frase[i] != '\0'; i++)
    {
        while (frase[i] != ' ' && frase[i + 1] != '\n' && frase[i] != '.')
        {
            palavra++;
            i++;
        }
        if (palavra > maior_palavra)
        {
            maior_palavra = palavra;
        }
        palavra = 0;
    }

    printf("%d", palavra);
    printf("%d", maior_palavra);

    return 0;
}