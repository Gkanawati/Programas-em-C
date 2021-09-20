#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    float nums[5];
    int i;
    float m, n;

    for(i=0; i<5; i++){
        scanf("%f", &nums[i]);
    }
    
    m=nums[0];

    for(i=0; i<5; i++){
        if (nums[i] > m){
            m = nums[i];
        }
    }

    printf("%.2f ", m);

    n = nums[0];

    for(i=0; i<5; i++){
        if (nums[i] < n){
            n = nums[i];
        }
    }

    printf("%.2f ", n);

    return 0;
}
