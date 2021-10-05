#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int N;
    int i = 0;
    int res = 0;

    scanf("%d", &N);

    int vX[N];
    int vY[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vX[i]);
    }

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vY[i]);
    }

    for (i = 0; i < N; i++)
    {
        res = res + (vX[i] * vY[i]);
    }

    printf("%d", res);

    return 0;
}