#include <stdio.h>
#include <math.h>


int main (){
    double n1, n2, res;
    
    scanf("%lf %lf", &n1, &n2);
    
    if ((n1 >= -30 && n2 <= 30)){

        if (( n1 >= n2) && (n2 >= 0)){
        res = pow(n1,n2);
        printf("%.2lf", res);
     }
     else if (( n1 < n2 )){

        res = sqrt(n2-n1);
        printf("%.2lf", res);
       }
     else {
        printf ("0.00");
      }
    }

    return 0;
}