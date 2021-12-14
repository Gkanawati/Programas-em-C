#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct Point
{
    int p1;
    int p2;
};

double getDistancia(struct Point a, struct Point b);

int main()
{

    struct Point pUm, pDois;
    ;
    int i, qtdeCalculo;
    double res;

    scanf("%d", &qtdeCalculo);

    for (i = 0; i < qtdeCalculo; i++)
    {
        scanf("%d %d", &pUm.p1, &pUm.p2);
        scanf("%d %d", &pDois.p1, &pDois.p2);
        res = getDistancia(pUm, pDois);
        printf("%.2lf\n", res);
    }

    return 0;
}

double getDistancia(struct Point a, struct Point b)
{
    double distance;
    distance = sqrt(pow(b.p1 - a.p1, 2) + pow(b.p2 - a.p2, 2));
    return distance;
}
