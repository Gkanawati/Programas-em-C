#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int N = 0;
    int M = 0;
    int P = 0;
    int i = 0, j = 0, w = 0, Tt = 0;

    scanf("%d", &N);
    scanf("%d", &M);

        scanf("%d", &P);

        int A [60];
        int B [60];
        int PROD [60];

        for ( i = 0; i < N; i++) {
            scanf ("%d", &A[i]);
        }

        for ( j = 0; j < M; j++) {
            scanf ("%d", &B[j]);
        }

        for ( i = 0; i < N; i++) {
            for ( j = 0; j < M; j++) {
                PROD [i + j] = PROD [i + j] + A[i] * B[j];
        }

        Tt = N+M;
        for ( w = 0; w < Tt - 1; w++) {
            printf (" + %dx^%d", PROD[w], w);
        }


    return 0;
}
}