#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char binario[14] = {0};
    int i;
    int a = 0, conta = 0;

    fgets(binario, 14, stdin);
    binario[strcspn(binario, "\r\n")] = '\0';

    for (i = (strlen(binario)) - 1; i > 0; i--)
    {
        conta = conta + (binario[i] - 48) * pow(2, a);
        a++;
    }

    if (binario[0] == '1')
    {
        conta *= -1;
    }
    printf("%d", conta);

    return 0;
}