#include <stdio.h>


int main() {
    int a[5] = {22, 33, 44, 55, 66};
    // int *ptr = NULL;
    // int i;
    // ptr = a; // ptr = &a[0]
    // printf("%d\n",*a);
    // printf("%d\n",*ptr);
    // for (i = 0; i < 5; i++){
    //     printf("%d ", *(ptr + i));
    // }
    int* ptr = a;
    int res = *(ptr+2);
    printf("%d",res);

    return 0;

}

