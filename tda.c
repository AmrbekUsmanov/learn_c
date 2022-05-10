#include <stdio.h>

int main() {
    //int a[2][3];// a 2x3 o`lchamli
    int a[2][3]={
        {3,2,6},
        {4,5,20}
    };
    /*printf("Element 3 in row 2 is %d\n", a[1][2]);//20
    a[1][2] = 25;
    printf("Element 3 in row 2 is %d\n", a[1][2]);//25*/
    int k,j;
    for (k = 0; k < 2; k++){
        for (j = 0; j < 3; j++){
            printf(" %d", a[k][j]);
        }
        printf("\n");
    }
    return 0;
}