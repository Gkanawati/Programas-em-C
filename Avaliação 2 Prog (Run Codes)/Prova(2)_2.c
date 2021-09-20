#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char str_bin[12];
    scanf("%s", str_bin);

    int bin[12];
    int decimal = 0;

    for (int i = 0; i <= strlen(str_bin); i++)
    {
        if (str_bin[i] == '0')
        {
            bin[i] = 0;
        }
        else
        {
            bin[i] = 1;
        }
    }

    for (int i = strlen(str_bin) - 1; i >= 1; i--)
    {
        decimal += bin[i] * pow(2, strlen(str_bin) - 1 - i);
    }

    if (bin[0] == 1)
    {
        decimal = decimal * -1;
    }

    printf("%d\n", decimal);

    return 0;
}