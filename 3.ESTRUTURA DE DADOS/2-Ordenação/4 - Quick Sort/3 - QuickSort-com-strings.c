#include <stdio.h>
#include <stdlib.h>

void qs_string(char **item, int left, int right)
{
    int i, j;
    // o pivo vira um ponteiro
    // e o item recebido na funcao vira um ponteiro de ponteiro
    char *x;
    char temp[80];
    i = left;
    j = right;
    x = item[(left + right) / 2];
    do
    {
        while (strcmp(item[i], x) < 0 && i < right)
            i++;
        while (strcmp(item[j], x) > 0 && j > left)
            j--;
        if (i <= j)
        {
            strcpy(temp, item[i]);
            strcpy(item[i], item[j]);
            strcpy(item[j], temp);
            i++;
            j--;
        }
    } while (i <= j);
    if (left < j)
        qs_string(item, left, j);
    if (i < right)
        qs_string(item, i, right);
}