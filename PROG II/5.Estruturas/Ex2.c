#include <stdio.h>
#include <string.h>

struct hotel {
    int items;
    char name[10];
}a;


int main(){

    strcpy(a.name, "TAJ");
    a.items=10;
    printf("%s", a.name);
    return 0;
}