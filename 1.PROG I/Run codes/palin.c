#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char p[50], e[5] = "END";
    int i, j, k = 0, x = 0, y, tam, n[100];

    for (i = 0; i < 100; i++) {
        n[i] = 0;
    }

    while (strcmp(p, e) != 0) {
        k = 3;
        fgets(p, 50, stdin);
        p[strcspn(p, "\r\n")] = '\0';

        if (strcmp(p, e) != 0) {
            tam = strlen(p);
            y = tam - 1;

            for (j = 0; j < tam / 2; j++) {
                if (p[j] == p[y])
                {
                    k = 1;
                }
                if (p[j] != p[y])
                {
                    k = 2;
                    break;
                }
                y--;
            }

            if (k == 2) {
                n[x] = 2;
            }
            if (k == 1) {
                n[x] = 1;
            }
        }
        else {
            break;
        }

        if (n[x] == 1) {
            printf("SIM\n");
        }
        if (n[x] == 2) {
            printf("NAO\n");
        }
        x++;
    }

    return 0;
}