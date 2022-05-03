#include <stdio.h>
#include <string.h>

int main()
{

    int i = 0;
    char nome1[] = "mundo";

    for (i = 0; i < strlen(nome1); i++)
    {
        // transforma em maiusculas
        nome1[i] = nome1[i] - 32;
    }

    printf("%s", nome1);

    return 0;
}