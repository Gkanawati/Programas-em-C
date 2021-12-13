#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strcat2(const char *s1, const char *s2, char *sres);
char *strcat1(const char *s1, const char *s2, char *sres);

int main(void)
{
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);

    const char *v1[x];
    const char *v2[y];

    char soma[128];

    printf("%s  + %s = %s\n", v1, v2, strcat1(v1, v2, soma));

    soma[0] = 0;

    printf("%s + %s = %s\n",
           v1, v2, strcat2(v1, v2, soma));
    return 0;
}

char *strcat2(const char *s1, const char *s2, char *sres)
{
    char *pOut = (char *)sres;
    const char *pIn = s1;
    while (*pIn != 0)
    {
        *pOut++ = *pIn++;
    };
    pIn = s2;
    while (*pIn != 0)
    {
        *pOut++ = *pIn++;
    };
    *pOut = 0;
    return sres;
};

char *strcat1(const char *s1, const char *s2, char *sres)
{
    char *pOut = sres; // ponteiro para a saida
    for (const char *pIn = s1; *pIn; *pOut = *pIn++, ++pOut)
        ;
    for (const char *pIn = s2; *pIn; *pOut = *pIn++, ++pOut)
        ;
    *pOut = 0;
    return sres;
};