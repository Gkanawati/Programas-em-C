#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    while (true)
    {
        char str1[200] = {'\0'}; // string de entrada
        char comp[200] = {'\0'};

        fgets(str1, 200, stdin);
        str1[strcspn(str1, "\r\n")] = '\0';

        if (strcmp(str1, "END") == 0)
            break;

        strcpy(comp, str1);
        int n = strlen(str1);

        for (register int i = 0, j = (n - 1); i < n / 2; i++)
        {

            str1[i] ^= str1[j];
            str1[j] ^= str1[i];
            str1[i] ^= str1[j--];
        }

        printf("%s\n", strcmp(str1, comp) ? "NAO" : "SIM");
    }

    return 0;
}