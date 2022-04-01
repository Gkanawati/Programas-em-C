#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strcat2(char *str1, char *str2);

int main()
{
    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    char *v1[x];
    char *v2[y];
    char concatenada;

    *v1 = (char *)malloc(sizeof(char *) * x);
    *v2 = (char *)malloc(sizeof(char *) * y);

    scanf("%s", &v1);
    scanf("%s", &v2);
    concatenada = strcat2(v1, v2);

    return 0;
}

char *strcat2(char *str1, char *str2)
{

}