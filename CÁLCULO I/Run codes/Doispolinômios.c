#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int N = 0;
    int M = 0;
    int i, j, w, Tt;

    scanf("%d %d", &N, &M);

    if ((1 < N && N < 20) && (1 < M && M < 40))
    {
        int A[60];
        int B[60];
        int PROD[60] = {0};

        for (i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }

        for (j = 0; j < M; j++)
        {
            scanf("%d", &B[j]);
        }

        for (i = 0; i < N; i++)
        {
            for (j = 0; j < M; j++)
            {
                PROD[i + j] = PROD[i + j] + (A[i] * B[j]);
            }
        }

        Tt = (N + M) - 1;
        for (w = 0; w < Tt; w++)
        {
            if (w == 0)
            {
                printf("%d", PROD[w]);
            }
            else
            {
                printf(" + %dx^%d", PROD[w], w);
            }
        }
    }
    else
    {
        return 0;
    }
}