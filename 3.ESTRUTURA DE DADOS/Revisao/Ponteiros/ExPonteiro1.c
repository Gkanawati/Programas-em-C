#include <stdio.h>

void func(int *px, int *py)
{
    px = py;
    *py = (*py) * (*px);
    *px = *px + 2;
}

void main()
{
    int x, y;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    func(&x, &y);
    printf("x = %d, y = %d\n", x, y);
}