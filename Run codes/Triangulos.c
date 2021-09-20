#include <stdio.h>

int main()
{
        int n1 = 0;
        int n2 = 0;
        int n3 = 0;


        scanf("%d %d %d", &n1, &n2, &n3);

        if ((n1 == n2) && (n1 == n3)){
                printf("Equilatero\n");
        }
        else if (( n1 == n2 && n1 != n3) || (n2 == n3 && n2 != n1) || (n1 == n3 && n1 != n2)){
                printf("Isosceles\n");
        }
        else{
                printf("Escaleno\n");
        }
        
    return 0;
}