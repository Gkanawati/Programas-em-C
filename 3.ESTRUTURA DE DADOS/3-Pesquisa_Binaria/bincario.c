#include <stdio.h>
#include <stdlib.h>

int binario(int *item, int key, int count);

int main()
{
    int *v, tam, key, i, r;
    scanf("%d", &tam);
    v = malloc(sizeof(int) * tam);
    scanf("%d", &key);

    for (i = 0; i < tam; i++)
    {
        v[i] = i;
    }
    r = binario(v, key, tam);

    printf("%d", r);

    free(v);
}

int binario(int *item, int key, int tam)
{
    int bot, top, mid;
    bot = 0;
    top = tam - 1;

    while (bot <= top)
    {
        mid = (bot + top) / 2;
        if (key < item[mid])
        {
            top = mid - 1;
        }
        else if (key > item[mid])
        {
            bot = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}