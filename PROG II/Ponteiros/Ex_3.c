#include <stdio.h>

int main(int argc, char *argv[]){


    int *x, y;
    y = 50;
    x = &y; 

    printf("%p", x);

    return 0;
}