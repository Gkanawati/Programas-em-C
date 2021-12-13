#include <stdio.h>
#include <stdlib.h>

char* strcat2(const char*,const char*,char*);

int main(void)
{
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);

    const char* uma = (char*)malloc(sizeof(char) * x);
    const char* outra = (char*)malloc(sizeof(char) * x);

    scanf("%s", &uma);
    scanf("%s", &outra);

    char soma[128];


    soma[0] = 0; // zera saida para o proximo teste :) 

    printf("%s", strcat2(uma, outra, soma));
    return 0;
}

char* strcat2(const char* s1,const char* s2, char* sres)
{
    char* pOut = (char*) sres;
    const char* pIn = s1;
    while ( *pIn != 0) { *pOut++ = *pIn++; };
    pIn = s2;
    while ( *pIn != 0) { *pOut++ = *pIn++; };
    *pOut = 0;
    return sres;
};
