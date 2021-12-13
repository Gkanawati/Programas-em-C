#include <stdio.h>

struct student {
    int isnUm;
    char name;
    float gpa;
};

struct student johnSmith;

int main(){

    johnSmith.gpa = 6.5;

    printf("\n%.2f", johnSmith.gpa);

    return 0;
}