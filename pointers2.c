#include <stdio.h>

int main() {
    //1 m
    // int j = 63;
    // int *p = NULL;
    // p = &j;

    // printf("The address of j is %x\n", &j);
    // printf("p contains address %x\n", p);
    // printf("The value of j is %d\n", j);
    // printf("p is pointing to the value %d\n", *p);
    
    //2 m
    // int x = 12;
    // int *p = NULL;
    // int **ptr = NULL;
    // p = &x;
    // ptr = &p;

    int x = 5;
    int y;
    int *p = NULL;
    p = &x;

    y = *p + 2; // y=7
    y += *p; // y=12
    *p = y;// x=12
    (*p)++;// x=13
    printf("p is pointing to the value %d\n", *p);
    return 0;
}