#include <stdio.h>
#include <string.h>
#include <math.h>

int MDC(int n1, int n2);
int MOD(int n1, int n2);
int POT(int n1, int n2);

int main()
{
    int n1 = 0, n2 = 0;
    char operacao[4];
    int resMDC = -1, resMOD = -1, resPOT= -1;
    char finaliza[4] = "OOO";
    char MDCstr[4] = "MDC";
    char MODstr[4] = "MOD";
    char POTstr[4] = "POT";
    int comp1, comp2, comp3;
    

    scanf("%d %d", &n1, &n2);

    while (strcmp(operacao, finaliza) != 0)
    {
        fgets(operacao, 4, stdin);
        /* scanf("%s", &operacao); */

        comp1 = strcmp(operacao, MDCstr);
        comp2 = strcmp(operacao, MODstr);
        comp3 = strcmp(operacao, POTstr);

        if (strcmp(operacao, MDCstr) == 0)
        {
            resMDC = MDC(n1, n2);
        }
        if (strcmp(operacao, MODstr) == 0)
        {
            resMOD = MOD(n1, n2);
        }
        if (strcmp(operacao, POTstr) == 0)
        {
            resPOT = POT(n1, n2);
        }
    }

    if (resMDC != comp1 && resMDC > -1)
    {
        printf("MDC(%d,%d) = %d \n", n1, n2, resMDC);
    }

    if (resMOD != comp2 && resMOD > -1)
    {
        printf("MOD(%d,%d) = %d \n", n1, n2, resMOD);
    }

    if (resPOT != comp3 && resPOT > -1)
    {
        printf("POT(%d,%d) = %d \n", n1, n2, resPOT);
    }

    return 0;
}

int MDC(int n1, int n2)
{
    /*
    Iterativa
     int rest;

    while (n2 != 0)
    {
        rest = n1 % n2;
        n1 = n2;
        n2 = rest;
    }

    return n1; */

    /* Recursiva */

    if (n1 == n2)
    {
        return n1;
    }

    else if (n1 > n2)
    {
        return MDC(n1 - n2, n2);
    }

    else
    {
        return MDC(n2, n1);
    }
}

int MOD(int n1, int n2)
{
    if (n1 == n2)
    {
        return 0;
    }
    else if (n1 > n2)
    {
        return MOD(n1 - n2, n2);
    }

    else
    {
        return n1;
    }
}

int POT(int n1, int n2)
{
    int pot;
    if (n2 == 0)
    {
        pot = 1;
    }

    else
    {
        pot = n1 * POT(n1, n2 - 1);
    }

    return pot;
}